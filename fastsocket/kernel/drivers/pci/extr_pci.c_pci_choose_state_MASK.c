
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_3__ {int event; } ;
typedef TYPE_1__ pm_message_t ;
typedef scalar_t__ pci_power_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;





 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;

pci_power_t FUNC_4(struct pci_dev *VAR_4, pm_message_t VAR_5)
{
 pci_power_t VAR_6;

 if (!FUNC_2(VAR_4, VAR_0))
  return VAR_1;

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6 != VAR_3)
  return VAR_6;

 switch (VAR_5.event) {
 case 130:
  return VAR_1;
 case 132:
 case 129:

 case 128:
 case 131:
  return VAR_2;
 default:
  FUNC_1(&VAR_4->dev, "unrecognized suspend event %d\n",
    VAR_5.event);
  FUNC_0();
 }
 return VAR_1;
}
