
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
typedef int pci_ers_result_t ;
typedef scalar_t__ pci_channel_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static pci_ers_result_t FUNC_1(struct pci_dev *VAR_3,
           pci_channel_state_t VAR_4)
{
 FUNC_0(VAR_3);

 return VAR_4 == VAR_2 ?
  VAR_0 : VAR_1;
}
