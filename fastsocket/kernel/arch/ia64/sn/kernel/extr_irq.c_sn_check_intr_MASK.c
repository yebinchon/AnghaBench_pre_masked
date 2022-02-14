
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct sn_irq_info {scalar_t__ irq_bridge_type; int irq_int_bit; int irq_last_intr; scalar_t__ irq_pciioinfo; } ;
struct pcidev_info {TYPE_1__* pdi_host_pcidev_info; } ;
struct pcibus_info {int dummy; } ;
struct TYPE_4__ {int sn_in_service_ivecs; } ;
struct TYPE_3__ {scalar_t__ pdi_pcibus_info; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct pcibus_info*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 (struct sn_irq_info*) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(int VAR_2, struct sn_irq_info *VAR_3)
{
 u64 VAR_4;
 struct pcidev_info *VAR_5;
 struct pcibus_info *VAR_6;






 if (VAR_3->irq_bridge_type != VAR_0)
  return;

 VAR_5 = (struct pcidev_info *)VAR_3->irq_pciioinfo;
 if (!VAR_5)
  return;

 VAR_6 =
     (struct pcibus_info *)VAR_5->pdi_host_pcidev_info->
     pdi_pcibus_info;
 VAR_4 = FUNC_2(VAR_6);

 if (!FUNC_0(FUNC_1(VAR_2))) {
  if (!FUNC_4(VAR_2, VAR_1->sn_in_service_ivecs)) {
   VAR_4 &= 0xff;
   if (VAR_3->irq_int_bit & VAR_4 &
       VAR_3->irq_last_intr) {
    VAR_4 &= ~(VAR_3->irq_int_bit & VAR_4);
    FUNC_3(VAR_3);
   }
  }
 }
 VAR_3->irq_last_intr = VAR_4;
}
