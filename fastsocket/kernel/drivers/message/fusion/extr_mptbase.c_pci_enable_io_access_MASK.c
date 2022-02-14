
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 int FUNC_1 (struct pci_dev*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct pci_dev *VAR_1)
{
 u16 VAR_2;

 FUNC_0(VAR_1, VAR_0, &VAR_2);
 VAR_2 |= 1;
 FUNC_1(VAR_1, VAR_0, VAR_2);
}
