
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2x_virtf {int flr_clnup_stage; int abs_vfid; } ;
struct bnx2x_vfop_cmd {void (* done ) (struct bnx2x*,struct bnx2x_virtf*) ;int block; } ;
struct bnx2x_vfop_args_qx {int qid; } ;
struct TYPE_2__ {struct bnx2x_vfop_args_qx qx; } ;
struct bnx2x_vfop {int state; scalar_t__ rc; TYPE_1__ args; } ;
struct bnx2x {int dummy; } ;
typedef enum bnx2x_vfop_flr_state { ____Placeholder_bnx2x_vfop_flr_state } bnx2x_vfop_flr_state ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_0 ;


 int VAR_1 ;
 int FUNC_1 (int ,char*,int ,int) ;
 int VAR_2 ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_virtf*,int ) ;
 int FUNC_3 (struct bnx2x*,int ) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_virtf*) ;
 int FUNC_5 (struct bnx2x*,struct bnx2x_virtf*) ;
 struct bnx2x_vfop* FUNC_6 (struct bnx2x*,struct bnx2x_virtf*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vfop*) ;
 scalar_t__ FUNC_9 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vfop_cmd*,int *,int ,int) ;
 scalar_t__ FUNC_10 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vfop_cmd*,int ) ;
 int FUNC_11 (struct bnx2x_virtf*) ;

__attribute__((used)) static void FUNC_12(struct bnx2x *VAR_3, struct bnx2x_virtf *VAR_4)
{
 struct bnx2x_vfop *VAR_5 = FUNC_6(VAR_3, VAR_4);
 struct bnx2x_vfop_args_qx *VAR_6 = &VAR_5->args.qx;
 enum bnx2x_vfop_flr_state VAR_7 = VAR_5->state;
 struct bnx2x_vfop_cmd VAR_8 = {
  .done = FUNC_12,
  .block = 0,
 };

 if (VAR_5->rc < 0)
  goto op_err;

 FUNC_1(VAR_0, "vf[%d] STATE: %d\n", VAR_4->abs_vfid, VAR_7);

 switch (VAR_7) {
 case 128:



  if (++(VAR_6->qid) < FUNC_11(VAR_4)) {
   VAR_5->rc = FUNC_10(VAR_3, VAR_4, &VAR_8,
             VAR_6->qid);
   if (VAR_5->rc)
    goto op_err;
   return;
  }

  VAR_5->state = 129;
  VAR_5->rc = FUNC_9(VAR_3, VAR_4, &VAR_8, ((void*)0),
      0, 1);
  if (VAR_5->rc)
   goto op_err;
  return;
 case 129:


  FUNC_4(VAR_3, VAR_4);


  FUNC_5(VAR_3, VAR_4);


  FUNC_3(VAR_3, VAR_4->abs_vfid);

  goto op_done;
 default:
  FUNC_7(VAR_7);
 }
op_err:
 FUNC_0("VF[%d] FLR error: rc %d\n", VAR_4->abs_vfid, VAR_5->rc);
op_done:
 VAR_4->flr_clnup_stage = VAR_2;
 FUNC_8(VAR_3, VAR_4, VAR_5);
 FUNC_2(VAR_3, VAR_4, VAR_1);
}
