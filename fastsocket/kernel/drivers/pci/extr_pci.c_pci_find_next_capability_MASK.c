
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pci_dev {int devfn; int bus; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__,int) ;

int FUNC_1(struct pci_dev *VAR_1, u8 VAR_2, int VAR_3)
{
 return FUNC_0(VAR_1->bus, VAR_1->devfn,
       VAR_2 + VAR_0, VAR_3);
}
