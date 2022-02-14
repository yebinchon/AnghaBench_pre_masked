
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ block_ucfg_access; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct pci_dev *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_1, VAR_3);



 FUNC_0(!VAR_2->block_ucfg_access);

 VAR_2->block_ucfg_access = 0;
 FUNC_3(&VAR_0);
 FUNC_2(&VAR_1, VAR_3);
}
