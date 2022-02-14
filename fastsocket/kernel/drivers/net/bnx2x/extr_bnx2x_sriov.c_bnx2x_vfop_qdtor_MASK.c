
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct bnx2x_virtf {int abs_vfid; } ;
struct bnx2x_vfop_args_qdtor {TYPE_6__* cxt; int qid; } ;
struct TYPE_7__ {struct bnx2x_vfop_args_qdtor qdtor; } ;
struct bnx2x_vfop {int state; scalar_t__ rc; TYPE_3__* op_p; TYPE_1__ args; } ;
struct bnx2x_queue_state_params {int cmd; int q_obj; } ;
struct bnx2x {int dummy; } ;
typedef enum bnx2x_vfop_qdtor_state { ____Placeholder_bnx2x_vfop_qdtor_state } bnx2x_vfop_qdtor_state ;
struct TYPE_11__ {int cdu_reserved; } ;
struct TYPE_10__ {int cdu_usage; } ;
struct TYPE_12__ {TYPE_5__ xstorm_ag_context; TYPE_4__ ustorm_ag_context; } ;
struct TYPE_8__ {struct bnx2x_queue_state_params qstate; } ;
struct TYPE_9__ {TYPE_2__ qctor; } ;


 int FUNC_0 (char*,int ,int ,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_1 (int ,char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct bnx2x*,int ) ;
 void* FUNC_3 (struct bnx2x*,struct bnx2x_queue_state_params*) ;
 struct bnx2x_vfop* FUNC_4 (struct bnx2x*,struct bnx2x_virtf*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vfop*) ;
 int FUNC_7 (struct bnx2x_virtf*,scalar_t__,int ) ;
 int FUNC_8 (struct bnx2x_virtf*) ;

__attribute__((used)) static void FUNC_9(struct bnx2x *VAR_7, struct bnx2x_virtf *VAR_8)
{
 struct bnx2x_vfop *VAR_9 = FUNC_4(VAR_7, VAR_8);
 struct bnx2x_vfop_args_qdtor *VAR_10 = &VAR_9->args.qdtor;
 struct bnx2x_queue_state_params *VAR_11 = &VAR_9->op_p->qctor.qstate;
 enum bnx2x_vfop_qdtor_state VAR_12 = VAR_9->state;

 FUNC_8(VAR_8);

 if (VAR_9->rc < 0)
  goto op_err;

 FUNC_1(VAR_0, "vf[%d] STATE: %d\n", VAR_8->abs_vfid, VAR_12);

 switch (VAR_12) {
 case 129:


  if (FUNC_2(VAR_7, VAR_11->q_obj) ==
      VAR_4) {
   FUNC_1(VAR_0,
      "Entered qdtor but queue was already stopped. Aborting gracefully\n");
   goto op_done;
  }


  VAR_9->state = 128;

  VAR_11->cmd = VAR_2;
  VAR_9->rc = FUNC_3(VAR_7, VAR_11);

  FUNC_7(VAR_8, VAR_9->rc, VAR_5);

 case 128:

  VAR_9->state = 131;

  VAR_11->cmd = VAR_3;
  VAR_9->rc = FUNC_3(VAR_7, VAR_11);

  FUNC_7(VAR_8, VAR_9->rc, VAR_5);

 case 131:

  VAR_9->state = 130;

  VAR_11->cmd = VAR_1;
  VAR_9->rc = FUNC_3(VAR_7, VAR_11);

  FUNC_7(VAR_8, VAR_9->rc, VAR_6);
op_err:
 FUNC_0("QDTOR[%d:%d] error: cmd %d, rc %d\n",
    VAR_8->abs_vfid, VAR_10->qid, VAR_11->cmd, VAR_9->rc);
op_done:
 case 130:

  VAR_10->cxt->ustorm_ag_context.cdu_usage = 0;
  VAR_10->cxt->xstorm_ag_context.cdu_reserved = 0;
  FUNC_6(VAR_7, VAR_8, VAR_9);
  return;
 default:
  FUNC_5(VAR_12);
 }
op_pending:
 return;
}
