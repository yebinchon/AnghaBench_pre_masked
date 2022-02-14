
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bnx2x_virtf {int abs_vfid; } ;
struct bnx2x_vfop_cmd {void (* done ) (struct bnx2x*,struct bnx2x_virtf*) ;int block; } ;
struct TYPE_3__ {int qid; } ;
struct TYPE_4__ {TYPE_1__ qx; } ;
struct bnx2x_vfop {int state; scalar_t__ rc; TYPE_2__ args; } ;
struct bnx2x {int dummy; } ;
typedef enum bnx2x_vfop_qteardown_state { ____Placeholder_bnx2x_vfop_qteardown_state } bnx2x_vfop_qteardown_state ;


 int FUNC_0 (char*,int ,int,scalar_t__) ;
 int VAR_0 ;





 int FUNC_1 (int ,char*,...) ;
 struct bnx2x_vfop* FUNC_2 (struct bnx2x*,struct bnx2x_virtf*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vfop*) ;
 scalar_t__ FUNC_5 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vfop_cmd*,int,int) ;
 scalar_t__ FUNC_6 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vfop_cmd*,int) ;
 scalar_t__ FUNC_7 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vfop_cmd*,int,int ) ;
 scalar_t__ FUNC_8 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vfop_cmd*,int,int) ;

__attribute__((used)) static void FUNC_9(struct bnx2x *VAR_1, struct bnx2x_virtf *VAR_2)
{
 struct bnx2x_vfop *VAR_3 = FUNC_2(VAR_1, VAR_2);
 int VAR_4 = VAR_3->args.qx.qid;
 enum bnx2x_vfop_qteardown_state VAR_5 = VAR_3->state;
 struct bnx2x_vfop_cmd VAR_6;

 if (VAR_3->rc < 0)
  goto op_err;

 FUNC_1(VAR_0, "vf[%d] STATE: %d\n", VAR_2->abs_vfid, VAR_5);

 VAR_6.done = FUNC_9;
 VAR_6.block = 0;

 switch (VAR_5) {
 case 128:

  VAR_3->state = 131;
  VAR_3->rc = FUNC_7(VAR_1, VAR_2, &VAR_6, VAR_4, 0);
  if (VAR_3->rc)
   goto op_err;
  return;

 case 131:

  VAR_3->state = 132;
  VAR_3->rc = FUNC_8(VAR_1, VAR_2, &VAR_6, VAR_4, 0);
  if (VAR_3->rc)
   goto op_err;
  return;

 case 132:

  VAR_3->state = 129;
  VAR_3->rc = FUNC_5(VAR_1, VAR_2, &VAR_6, VAR_4, 0);
  if (VAR_3->rc)
   goto op_err;
  return;

 case 129:

  FUNC_1(VAR_0, "case: BNX2X_VFOP_QTEARDOWN_QDTOR\n");
  VAR_3->state = 130;
  FUNC_1(VAR_0, "new state: BNX2X_VFOP_QTEARDOWN_DONE\n");
  VAR_3->rc = FUNC_6(VAR_1, VAR_2, &VAR_6, VAR_4);
  FUNC_1(VAR_0, "returned from cmd\n");
  if (VAR_3->rc)
   goto op_err;
  return;
op_err:
 FUNC_0("QTEARDOWN[%d:%d] error: rc %d\n",
    VAR_2->abs_vfid, VAR_4, VAR_3->rc);

 case 130:
  FUNC_4(VAR_1, VAR_2, VAR_3);
  return;
 default:
  FUNC_3(VAR_5);
 }
}
