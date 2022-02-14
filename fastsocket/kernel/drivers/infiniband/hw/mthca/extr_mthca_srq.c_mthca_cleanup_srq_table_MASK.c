
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int alloc; int srq; } ;
struct TYPE_3__ {int num_srqs; } ;
struct mthca_dev {int mthca_flags; TYPE_2__ srq_table; TYPE_1__ limits; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(struct mthca_dev *VAR_1)
{
 if (!(VAR_1->mthca_flags & VAR_0))
  return;

 FUNC_1(&VAR_1->srq_table.srq, VAR_1->limits.num_srqs);
 FUNC_0(&VAR_1->srq_table.alloc);
}
