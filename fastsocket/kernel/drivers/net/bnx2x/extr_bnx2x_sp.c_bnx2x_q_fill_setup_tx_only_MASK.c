
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int hi; int lo; } ;
struct TYPE_11__ {TYPE_3__ tx_bd_page_base; } ;
struct tx_queue_init_ramrod_data {TYPE_5__ tx; int general; } ;
struct TYPE_7__ {int flags; int txq_params; int gen_params; } ;
struct TYPE_8__ {TYPE_1__ tx_only; } ;
struct bnx2x_queue_state_params {TYPE_4__* q_obj; TYPE_2__ params; } ;
struct bnx2x {int dummy; } ;
struct TYPE_10__ {int * cids; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int FUNC_1 (struct bnx2x*,TYPE_4__*,int *,int *,int *) ;
 int FUNC_2 (TYPE_4__*,int *,TYPE_5__*,int *) ;

__attribute__((used)) static void FUNC_3(struct bnx2x *VAR_1,
    struct bnx2x_queue_state_params *VAR_2,
    struct tx_queue_init_ramrod_data *VAR_3)
{
 FUNC_1(VAR_1, VAR_2->q_obj,
           &VAR_2->params.tx_only.gen_params,
           &VAR_3->general,
           &VAR_2->params.tx_only.flags);

 FUNC_2(VAR_2->q_obj,
      &VAR_2->params.tx_only.txq_params,
      &VAR_3->tx,
      &VAR_2->params.tx_only.flags);

 FUNC_0(VAR_0, "cid %d, tx bd page lo %x hi %x",
    VAR_2->q_obj->cids[0],
    VAR_3->tx.tx_bd_page_base.lo,
    VAR_3->tx.tx_bd_page_base.hi);
}
