
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bfa_ioim_s {TYPE_3__* iosp; TYPE_4__* itnim; int qe; int hcb_qe; TYPE_1__* fcpim; } ;
struct TYPE_8__ {int delay_comp_q; scalar_t__ iotov_active; } ;
struct TYPE_7__ {TYPE_2__* tskim; } ;
struct TYPE_6__ {int wc; } ;
struct TYPE_5__ {scalar_t__ delay_comp; int ioim_comp_q; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct bfa_ioim_s *VAR_0)
{




 FUNC_4(&VAR_0->qe);
 FUNC_3(&VAR_0->qe, &VAR_0->fcpim->ioim_comp_q);

 if (!VAR_0->iosp->tskim) {
  if (VAR_0->fcpim->delay_comp && VAR_0->itnim->iotov_active) {
   FUNC_0(&VAR_0->hcb_qe);
   FUNC_4(&VAR_0->qe);
   FUNC_3(&VAR_0->qe, &VAR_0->itnim->delay_comp_q);
  }
  FUNC_1(VAR_0->itnim);
 } else
  FUNC_2(&VAR_0->iosp->tskim->wc);
}
