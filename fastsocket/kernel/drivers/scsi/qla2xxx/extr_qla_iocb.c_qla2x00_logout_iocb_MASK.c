
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct qla_hw_data {int dummy; } ;
struct mbx_entry {void* mb9; void* mb3; void* mb2; void* mb1; void* mb0; int loop_id; int entry_type; } ;
struct TYPE_11__ {TYPE_4__* fcport; } ;
typedef TYPE_5__ srb_t ;
struct TYPE_7__ {int domain; int area; int al_pa; } ;
struct TYPE_8__ {TYPE_1__ b; } ;
struct TYPE_10__ {int loop_id; TYPE_3__* vha; TYPE_2__ d_id; } ;
struct TYPE_9__ {int vp_idx; struct qla_hw_data* hw; } ;


 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct qla_hw_data*,int ,int) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(srb_t *VAR_2, struct mbx_entry *VAR_3)
{
 struct qla_hw_data *VAR_4 = VAR_2->fcport->vha->hw;

 VAR_3->entry_type = VAR_1;
 FUNC_1(VAR_4, VAR_3->loop_id, VAR_2->fcport->loop_id);
 VAR_3->mb0 = FUNC_2(VAR_0);
 VAR_3->mb1 = FUNC_0(VAR_4) ?
     FUNC_2(VAR_2->fcport->loop_id):
     FUNC_2(VAR_2->fcport->loop_id << 8);
 VAR_3->mb2 = FUNC_2(VAR_2->fcport->d_id.b.domain);
 VAR_3->mb3 = FUNC_2(VAR_2->fcport->d_id.b.area << 8 |
     VAR_2->fcport->d_id.b.al_pa);
 VAR_3->mb9 = FUNC_2(VAR_2->fcport->vha->vp_idx);

}
