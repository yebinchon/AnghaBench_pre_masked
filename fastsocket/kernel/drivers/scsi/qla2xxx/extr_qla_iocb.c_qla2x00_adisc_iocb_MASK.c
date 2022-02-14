
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qla_hw_data {int async_pd_dma; } ;
struct mbx_entry {void* mb9; void* mb7; void* mb6; void* mb3; void* mb2; void* mb1; void* mb10; void* mb0; int loop_id; int entry_type; } ;
struct TYPE_7__ {TYPE_2__* fcport; } ;
typedef TYPE_3__ srb_t ;
struct TYPE_6__ {int loop_id; TYPE_1__* vha; } ;
struct TYPE_5__ {int vp_idx; struct qla_hw_data* hw; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct qla_hw_data*,int ,int) ;
 void* FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(srb_t *VAR_3, struct mbx_entry *VAR_4)
{
 struct qla_hw_data *VAR_5 = VAR_3->fcport->vha->hw;

 VAR_4->entry_type = VAR_2;
 FUNC_4(VAR_5, VAR_4->loop_id, VAR_3->fcport->loop_id);
 VAR_4->mb0 = FUNC_5(VAR_1);
 if (FUNC_0(VAR_5)) {
  VAR_4->mb1 = FUNC_5(VAR_3->fcport->loop_id);
  VAR_4->mb10 = FUNC_5(VAR_0);
 } else {
  VAR_4->mb1 = FUNC_5((VAR_3->fcport->loop_id << 8) | VAR_0);
 }
 VAR_4->mb2 = FUNC_5(FUNC_3(VAR_5->async_pd_dma));
 VAR_4->mb3 = FUNC_5(FUNC_1(VAR_5->async_pd_dma));
 VAR_4->mb6 = FUNC_5(FUNC_3(FUNC_2(VAR_5->async_pd_dma)));
 VAR_4->mb7 = FUNC_5(FUNC_1(FUNC_2(VAR_5->async_pd_dma)));
 VAR_4->mb9 = FUNC_5(VAR_3->fcport->vha->vp_idx);
}
