
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mthca_pd {int pd_num; int ntmr; scalar_t__ privileged; } ;
struct TYPE_2__ {int alloc; } ;
struct mthca_dev {TYPE_1__ pd_table; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct mthca_dev*,int *) ;

void FUNC_2(struct mthca_dev *VAR_0, struct mthca_pd *VAR_1)
{
 if (VAR_1->privileged)
  FUNC_1(VAR_0, &VAR_1->ntmr);
 FUNC_0(&VAR_0->pd_table.alloc, VAR_1->pd_num);
}
