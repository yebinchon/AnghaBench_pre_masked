
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int block_ucfg_access; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

bool FUNC_2(struct pci_dev *VAR_1)
 {
 unsigned long VAR_2;
 bool VAR_3 = 1;

 FUNC_0(&VAR_0, VAR_2);
 if (VAR_1->block_ucfg_access)
  VAR_3 = 0;
 else
  VAR_1->block_ucfg_access = 1;
 FUNC_1(&VAR_0, VAR_2);

 return VAR_3;
}
