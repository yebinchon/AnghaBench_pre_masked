
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dummy; } ;
struct cpci_hp_controller {int dummy; } ;
struct TYPE_13__ {int irq; } ;
struct TYPE_12__ {int subordinate; } ;
struct TYPE_11__ {TYPE_6__* dev_id; int irq_flags; int irq; TYPE_1__* ops; } ;
struct TYPE_10__ {int check_irq; int disable_irq; int enable_irq; int query_enum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;
 TYPE_6__* VAR_6 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;
 int FUNC_9 (TYPE_3__*) ;
 TYPE_3__* FUNC_10 (int ,int ,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 () ;
 int FUNC_12 (struct pci_dev*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_2__ VAR_12 ;
 TYPE_1__ VAR_13 ;

__attribute__((used)) static int FUNC_13 (struct pci_dev *VAR_14, const struct pci_device_id *VAR_15)
{
 int VAR_16;

 VAR_16 = FUNC_12(VAR_14);
 if(VAR_16 != 0) {
  return VAR_16;
 }
 FUNC_5("returned from zt5550_hc_config");

 FUNC_8(&VAR_12, 0, sizeof (struct cpci_hp_controller));
 VAR_13.query_enum = VAR_11;
 VAR_12.ops = &VAR_13;
 if(!VAR_7) {
  VAR_12.irq = VAR_6->irq;
  VAR_12.irq_flags = VAR_1;
  VAR_12.dev_id = VAR_6;

  VAR_13.enable_irq = VAR_10;
  VAR_13.disable_irq = VAR_9;
  VAR_13.check_irq = VAR_8;
 } else {
  FUNC_7("using ENUM# polling mode");
 }

 VAR_16 = FUNC_1(&VAR_12);
 if(VAR_16 != 0) {
  FUNC_6("could not register cPCI hotplug controller");
  goto init_hc_error;
 }
 FUNC_5("registered controller");


 if(!(VAR_5 = FUNC_10(VAR_3,
      VAR_2, ((void*)0)))) {
  VAR_16 = -VAR_0;
  goto init_register_error;
 }
 VAR_4 = VAR_5->subordinate;
 FUNC_9(VAR_5);

 VAR_16 = FUNC_0(VAR_4, 0x0a, 0x0f);
 if(VAR_16 != 0) {
  FUNC_6("could not register cPCI hotplug bus");
  goto init_register_error;
 }
 FUNC_5("registered bus");

 VAR_16 = FUNC_2();
 if(VAR_16 != 0) {
  FUNC_6("could not started cPCI hotplug system");
  FUNC_3(VAR_4);
  goto init_register_error;
 }
 FUNC_5("started cpci hp system");

 return 0;
init_register_error:
 FUNC_4(&VAR_12);
init_hc_error:
 FUNC_6("status = %d", VAR_16);
 FUNC_11();
 return VAR_16;

}
