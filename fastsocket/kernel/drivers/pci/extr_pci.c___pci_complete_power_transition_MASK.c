
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
typedef scalar_t__ pci_power_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pci_dev*,scalar_t__) ;

int FUNC_1(struct pci_dev *VAR_2, pci_power_t VAR_3)
{
 return VAR_3 >= VAR_1 ?
   FUNC_0(VAR_2, VAR_3) : -VAR_0;
}
