
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct cpufreq_freqs {unsigned int new; int old; scalar_t__ cpu; } ;
struct TYPE_4__ {int on_duration; int off_duration; int pci_pmer1; int pci_suscfg; TYPE_1__* cs55x0; } ;
struct TYPE_3__ {int device; int revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct cpufreq_freqs*,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;
 TYPE_2__* VAR_12 ;
 unsigned int FUNC_3 (unsigned int,int*,int*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (TYPE_1__*,int ,int*) ;
 unsigned int VAR_13 ;

__attribute__((used)) static void FUNC_8(unsigned int VAR_14)
{
 u8 VAR_15, VAR_16;
 unsigned int VAR_17;
 unsigned long VAR_18;
 struct cpufreq_freqs VAR_19;

 VAR_19.cpu = 0;
 VAR_19.old = FUNC_2(0);

 VAR_17 = FUNC_3(VAR_14, &VAR_12->on_duration,
   &VAR_12->off_duration);

 VAR_19.new = VAR_17;

 FUNC_0(&VAR_19, VAR_1);
 FUNC_6(VAR_18);



 if (VAR_17 != VAR_13) {

  switch (VAR_12->cs55x0->device) {
  case 128:
   VAR_16 = VAR_12->pci_pmer1 | VAR_2 | VAR_11;


   FUNC_4(VAR_3, 4);

   FUNC_4(VAR_8, 100);
   FUNC_4(VAR_6, VAR_16);

   if (VAR_12->cs55x0->revision < 0x10) {

    VAR_15 = VAR_12->pci_suscfg|VAR_10;
   } else {

    VAR_15 = VAR_12->pci_suscfg|VAR_10|VAR_9;
   }
   break;
  case 129:
  case 130:
   VAR_15 = VAR_12->pci_suscfg | VAR_10;
   break;
  default:
   FUNC_5(VAR_18);
   FUNC_1("fatal: try to set unknown chipset.\n");
   return;
  }
 } else {
  VAR_15 = VAR_12->pci_suscfg & ~(VAR_10);
  VAR_12->off_duration = 0;
  VAR_12->on_duration = 0;
  FUNC_1("suspend modulation disabled: cpu runs 100%% speed.\n");
 }

 FUNC_4(VAR_4, VAR_12->off_duration);
 FUNC_4(VAR_5, VAR_12->on_duration);

 FUNC_4(VAR_7, VAR_15);
 FUNC_7(VAR_12->cs55x0, VAR_7, &VAR_15);

 FUNC_5(VAR_18);

 VAR_12->pci_suscfg = VAR_15;

 FUNC_0(&VAR_19, VAR_0);

 FUNC_1("suspend modulation w/ duration of ON:%d us, OFF:%d us\n",
  VAR_12->on_duration * 32, VAR_12->off_duration * 32);
 FUNC_1("suspend modulation w/ clock speed: %d kHz.\n", VAR_19.new);
}
