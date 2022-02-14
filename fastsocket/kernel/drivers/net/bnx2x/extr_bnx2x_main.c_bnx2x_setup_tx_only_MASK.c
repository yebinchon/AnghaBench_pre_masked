
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bnx2x_queue_state_params {TYPE_1__* q_obj; int cmd; } ;
struct TYPE_4__ {int spcl_id; } ;
struct bnx2x_queue_setup_tx_only_params {int cid_index; int flags; TYPE_2__ gen_params; int txq_params; } ;
struct bnx2x_fastpath {int dummy; } ;
struct bnx2x {int dummy; } ;
struct TYPE_3__ {int cl_id; int * cids; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int ,int ,int ,int ,int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_fastpath*,int) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_fastpath*,TYPE_2__*,int) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_fastpath*,int *,int) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_queue_state_params*) ;
 int FUNC_5 (struct bnx2x_queue_setup_tx_only_params*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct bnx2x *VAR_3, struct bnx2x_fastpath *VAR_4,
   struct bnx2x_queue_state_params *VAR_5,
   struct bnx2x_queue_setup_tx_only_params *VAR_6,
   int VAR_7, bool VAR_8)
{
 FUNC_5(VAR_6, 0, sizeof(*VAR_6));


 VAR_5->cmd = VAR_0;


 VAR_6->flags = FUNC_1(VAR_3, VAR_4, 0);


 VAR_6->cid_index = VAR_7;


 FUNC_2(VAR_3, VAR_4, &VAR_6->gen_params, VAR_7);


 FUNC_3(VAR_3, VAR_4, &VAR_6->txq_params, VAR_7);

 FUNC_0(VAR_2,
    "preparing to send tx-only ramrod for connection: cos %d, primary cid %d, cid %d, client id %d, sp-client id %d, flags %lx\n",
    VAR_7, VAR_5->q_obj->cids[VAR_1],
    VAR_5->q_obj->cids[VAR_7], VAR_5->q_obj->cl_id,
    VAR_6->gen_params.spcl_id, VAR_6->flags);


 return FUNC_4(VAR_3, VAR_5);
}
