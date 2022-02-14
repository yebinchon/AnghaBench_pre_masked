
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bnx2x_virtf {int cfg_flags; int abs_vfid; } ;
struct bnx2x_vfop_cmd {void (* done ) (struct bnx2x*,struct bnx2x_virtf*) ;int block; } ;
struct TYPE_3__ {int qid; } ;
struct TYPE_4__ {TYPE_1__ qctor; } ;
struct bnx2x_vfop {int state; scalar_t__ rc; TYPE_2__ args; } ;
struct bnx2x {int sp_rtnl_task; int sp_rtnl_state; } ;
typedef enum bnx2x_vfop_qsetup_state { ____Placeholder_bnx2x_vfop_qsetup_state } bnx2x_vfop_qsetup_state ;


 int FUNC_0 (char*,int ,int,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;



 int FUNC_1 (int ,char*,int ,int) ;
 int VAR_2 ;
 struct bnx2x_vfop* FUNC_2 (struct bnx2x*,struct bnx2x_virtf*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vfop*) ;
 scalar_t__ FUNC_5 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vfop_cmd*,int) ;
 scalar_t__ FUNC_6 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vfop_cmd*,int,int ,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(struct bnx2x *VAR_3, struct bnx2x_virtf *VAR_4)
{
 struct bnx2x_vfop *VAR_5 = FUNC_2(VAR_3, VAR_4);
 int VAR_6 = VAR_5->args.qctor.qid;
 enum bnx2x_vfop_qsetup_state VAR_7 = VAR_5->state;
 struct bnx2x_vfop_cmd VAR_8 = {
  .done = FUNC_11,
  .block = 0,
 };

 if (VAR_5->rc < 0)
  goto op_err;

 FUNC_1(VAR_0, "vf[%d] STATE: %d\n", VAR_4->abs_vfid, VAR_7);

 switch (VAR_7) {
 case 130:

  VAR_5->state = 128;
  VAR_5->rc = FUNC_5(VAR_3, VAR_4, &VAR_8, VAR_6);
  if (VAR_5->rc)
   goto op_err;
  return;

 case 128:

  if (VAR_6)
   goto op_done;


  VAR_5->state = 129;
  VAR_5->rc = FUNC_6(VAR_3, VAR_4, &VAR_8, VAR_6, 0, 1);
  if (VAR_5->rc)
   goto op_err;
  return;
op_err:
 FUNC_0("QSETUP[%d:%d] error: rc %d\n", VAR_4->abs_vfid, VAR_6, VAR_5->rc);
op_done:
 case 129:
  VAR_4->cfg_flags |= VAR_2;
  FUNC_10();
  FUNC_8(VAR_1,
   &VAR_3->sp_rtnl_state);
  FUNC_9();
  FUNC_7(&VAR_3->sp_rtnl_task, 0);
  FUNC_4(VAR_3, VAR_4, VAR_5);
  return;
 default:
  FUNC_3(VAR_7);
 }
}
