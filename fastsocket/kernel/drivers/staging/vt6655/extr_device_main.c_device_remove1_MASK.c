
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
typedef int * PSDevice ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_0)
{
    PSDevice VAR_1=FUNC_1(VAR_0);

    if (VAR_1==((void*)0))
        return;
    FUNC_0(VAR_1);

}
