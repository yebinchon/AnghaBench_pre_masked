
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial_private {int dummy; } ;
struct pci_dev {int dummy; } ;
typedef int pci_ers_result_t ;
typedef scalar_t__ pci_channel_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct pci_dev*) ;
 struct serial_private* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct serial_private*) ;

__attribute__((used)) static pci_ers_result_t FUNC_3(struct pci_dev *VAR_3,
      pci_channel_state_t VAR_4)
{
 struct serial_private *VAR_5 = FUNC_1(VAR_3);

 if (VAR_4 == VAR_2)
  return VAR_0;

 if (VAR_5)
  FUNC_2(VAR_5);

 FUNC_0(VAR_3);

 return VAR_1;
}
