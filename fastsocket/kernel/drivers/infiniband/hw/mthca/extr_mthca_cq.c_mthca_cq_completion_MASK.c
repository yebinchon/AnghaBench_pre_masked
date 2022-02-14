
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int num_cqs; } ;
struct TYPE_4__ {int cq; } ;
struct mthca_dev {TYPE_2__ limits; TYPE_1__ cq_table; } ;
struct TYPE_6__ {int cq_context; int (* comp_handler ) (TYPE_3__*,int ) ;} ;
struct mthca_cq {TYPE_3__ ibcq; int arm_sn; } ;


 struct mthca_cq* FUNC_0 (int *,int) ;
 int FUNC_1 (struct mthca_dev*,char*,int) ;
 int FUNC_2 (TYPE_3__*,int ) ;

void FUNC_3(struct mthca_dev *VAR_0, u32 VAR_1)
{
 struct mthca_cq *VAR_2;

 VAR_2 = FUNC_0(&VAR_0->cq_table.cq, VAR_1 & (VAR_0->limits.num_cqs - 1));

 if (!VAR_2) {
  FUNC_1(VAR_0, "Completion event for bogus CQ %08x\n", VAR_1);
  return;
 }

 ++VAR_2->arm_sn;

 VAR_2->ibcq.comp_handler(&VAR_2->ibcq, VAR_2->ibcq.cq_context);
}
