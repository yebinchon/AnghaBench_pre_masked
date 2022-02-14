
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mthca_tavor_srq_context {void* uar; void* lkey; void* state_pd; int wqe_base_ds; } ;
struct TYPE_8__ {int lkey; } ;
struct TYPE_9__ {TYPE_1__ ibmr; } ;
struct mthca_srq {int wqe_shift; TYPE_2__ mr; } ;
struct TYPE_12__ {TYPE_4__* uobject; } ;
struct mthca_pd {TYPE_5__ ibpd; int pd_num; } ;
struct TYPE_13__ {int index; } ;
struct mthca_dev {TYPE_6__ driver_uar; } ;
struct TYPE_10__ {int index; } ;
struct TYPE_14__ {TYPE_3__ uar; } ;
struct TYPE_11__ {int context; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mthca_tavor_srq_context*,int ,int) ;
 TYPE_7__* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct mthca_dev *VAR_0,
      struct mthca_pd *VAR_1,
      struct mthca_srq *VAR_2,
      struct mthca_tavor_srq_context *VAR_3)
{
 FUNC_2(VAR_3, 0, sizeof *VAR_3);

 VAR_3->wqe_base_ds = FUNC_1(1 << (VAR_2->wqe_shift - 4));
 VAR_3->state_pd = FUNC_0(VAR_1->pd_num);
 VAR_3->lkey = FUNC_0(VAR_2->mr.ibmr.lkey);

 if (VAR_1->ibpd.uobject)
  VAR_3->uar =
   FUNC_0(FUNC_3(VAR_1->ibpd.uobject->context)->uar.index);
 else
  VAR_3->uar = FUNC_0(VAR_0->driver_uar.index);
}
