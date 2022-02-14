
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int alloc; } ;
struct mthca_dev {TYPE_1__ uar_table; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mthca_dev*) ;

void FUNC_2(struct mthca_dev *VAR_0)
{
 FUNC_1(VAR_0);


 FUNC_0(&VAR_0->uar_table.alloc);
}
