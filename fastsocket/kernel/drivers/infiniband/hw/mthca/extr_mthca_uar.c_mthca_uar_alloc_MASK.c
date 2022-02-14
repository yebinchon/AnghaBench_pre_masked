
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mthca_uar {int index; int pfn; } ;
struct TYPE_2__ {int alloc; } ;
struct mthca_dev {int pdev; TYPE_1__ uar_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;

int FUNC_2(struct mthca_dev *VAR_2, struct mthca_uar *VAR_3)
{
 VAR_3->index = FUNC_0(&VAR_2->uar_table.alloc);
 if (VAR_3->index == -1)
  return -VAR_0;

 VAR_3->pfn = (FUNC_1(VAR_2->pdev, 2) >> VAR_1) + VAR_3->index;

 return 0;
}
