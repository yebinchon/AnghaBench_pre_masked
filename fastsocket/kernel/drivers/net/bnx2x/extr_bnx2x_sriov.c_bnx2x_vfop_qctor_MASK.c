
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bnx2x_virtf {int abs_vfid; } ;
struct bnx2x_vfop_args_qctor {int qid; int sb_idx; } ;
struct TYPE_5__ {struct bnx2x_vfop_args_qctor qctor; } ;
struct bnx2x_vfop {int state; scalar_t__ rc; TYPE_4__* op_p; TYPE_1__ args; } ;
struct TYPE_6__ {int setup; } ;
struct bnx2x_queue_state_params {int cmd; TYPE_2__ params; int q_obj; } ;
struct bnx2x {int dummy; } ;
typedef enum bnx2x_vfop_qctor_state { ____Placeholder_bnx2x_vfop_qctor_state } bnx2x_vfop_qctor_state ;
struct TYPE_7__ {int prep_qsetup; struct bnx2x_queue_state_params qstate; } ;
struct TYPE_8__ {TYPE_3__ qctor; } ;


 int FUNC_0 (char*,int ,int ,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_1 (int ,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct bnx2x*,int ) ;
 void* FUNC_3 (struct bnx2x*,struct bnx2x_queue_state_params*) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_virtf*,int ,int ,int ,int ,int ) ;
 struct bnx2x_vfop* FUNC_5 (struct bnx2x*,struct bnx2x_virtf*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vfop*) ;
 int FUNC_8 (struct bnx2x_virtf*,scalar_t__,int ) ;
 int FUNC_9 (struct bnx2x_virtf*) ;
 int FUNC_10 (struct bnx2x_virtf*,int ) ;

__attribute__((used)) static void FUNC_11(struct bnx2x *VAR_7, struct bnx2x_virtf *VAR_8)
{
 struct bnx2x_vfop *VAR_9 = FUNC_5(VAR_7, VAR_8);
 struct bnx2x_vfop_args_qctor *VAR_10 = &VAR_9->args.qctor;
 struct bnx2x_queue_state_params *VAR_11 = &VAR_9->op_p->qctor.qstate;
 enum bnx2x_vfop_qctor_state VAR_12 = VAR_9->state;

 FUNC_9(VAR_8);

 if (VAR_9->rc < 0)
  goto op_err;

 FUNC_1(VAR_0, "vf[%d] STATE: %d\n", VAR_8->abs_vfid, VAR_12);

 switch (VAR_12) {
 case 130:


  if (FUNC_2(VAR_7, VAR_11->q_obj) ==
      VAR_3) {
   FUNC_1(VAR_0,
      "Entered qctor but queue was already up. Aborting gracefully\n");
   goto op_done;
  }


  VAR_9->state = 128;

  VAR_11->cmd = VAR_1;
  VAR_9->rc = FUNC_3(VAR_7, VAR_11);

  FUNC_8(VAR_8, VAR_9->rc, VAR_6);

 case 128:

  VAR_9->state = 129;


  VAR_9->op_p->qctor.qstate.params.setup =
   VAR_9->op_p->qctor.prep_qsetup;

  VAR_11->cmd = VAR_2;
  VAR_9->rc = FUNC_3(VAR_7, VAR_11);

  FUNC_8(VAR_8, VAR_9->rc, VAR_6);

 case 129:


  FUNC_4(VAR_7, VAR_8, FUNC_10(VAR_8, VAR_10->sb_idx),
        VAR_5, 0, VAR_4, 0);
  goto op_done;
 default:
  FUNC_6(VAR_12);
 }
op_err:
 FUNC_0("QCTOR[%d:%d] error: cmd %d, rc %d\n",
    VAR_8->abs_vfid, VAR_10->qid, VAR_11->cmd, VAR_9->rc);
op_done:
 FUNC_7(VAR_7, VAR_8, VAR_9);
op_pending:
 return;
}
