
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int flags; } ;
struct pci_dev {int dummy; } ;
typedef int pci_ers_result_t ;
typedef int pci_channel_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (struct pci_dev*) ;
 struct qib_devdata* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,char*,...) ;
 int FUNC_3 (struct qib_devdata*) ;

__attribute__((used)) static pci_ers_result_t
FUNC_4(struct pci_dev *VAR_4, pci_channel_state_t VAR_5)
{
 struct qib_devdata *VAR_6 = FUNC_1(VAR_4);
 pci_ers_result_t VAR_7 = VAR_2;

 switch (VAR_5) {
 case 129:
  FUNC_2(VAR_4, "State Normal, ignoring\n");
  break;

 case 130:
  FUNC_2(VAR_4, "State Frozen, requesting reset\n");
  FUNC_0(VAR_4);
  VAR_7 = VAR_1;
  break;

 case 128:
  FUNC_2(VAR_4, "State Permanent Failure, disabling\n");
  if (VAR_6) {

   VAR_6->flags &= ~VAR_3;
   FUNC_3(VAR_6);
  }

  VAR_7 = VAR_0;
  break;

 default:
  FUNC_2(VAR_4, "QIB PCI errors detected (state %d)\n",
   VAR_5);
  break;
 }
 return VAR_7;
}
