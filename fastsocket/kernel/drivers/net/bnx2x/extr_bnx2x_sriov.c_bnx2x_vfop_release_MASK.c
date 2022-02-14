
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_virtf {int state; int abs_vfid; } ;
struct bnx2x_vfop_cmd {void (* done ) (struct bnx2x*,struct bnx2x_virtf*) ;int block; } ;
struct bnx2x_vfop {scalar_t__ rc; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,...) ;




 int FUNC_2 (struct bnx2x*,struct bnx2x_virtf*) ;
 scalar_t__ FUNC_3 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vfop_cmd*) ;
 struct bnx2x_vfop* FUNC_4 (struct bnx2x*,struct bnx2x_virtf*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vfop*) ;

__attribute__((used)) static void FUNC_7(struct bnx2x *VAR_1, struct bnx2x_virtf *VAR_2)
{
 struct bnx2x_vfop *VAR_3 = FUNC_4(VAR_1, VAR_2);
 struct bnx2x_vfop_cmd VAR_4 = {
  .done = FUNC_7,
  .block = 0,
 };

 FUNC_1(VAR_0, "vfop->rc %d\n", VAR_3->rc);

 if (VAR_3->rc < 0)
  goto op_err;

 FUNC_1(VAR_0, "VF[%d] STATE: %s\n", VAR_2->abs_vfid,
    VAR_2->state == 129 ? "Free" :
    VAR_2->state == 131 ? "Acquired" :
    VAR_2->state == 130 ? "Enabled" :
    VAR_2->state == 128 ? "Reset" :
    "Unknown");

 switch (VAR_2->state) {
 case 130:
  VAR_3->rc = FUNC_3(VAR_1, VAR_2, &VAR_4);
  if (VAR_3->rc)
   goto op_err;
  return;

 case 131:
  FUNC_1(VAR_0, "about to free resources\n");
  FUNC_2(VAR_1, VAR_2);
  FUNC_1(VAR_0, "vfop->rc %d\n", VAR_3->rc);
  goto op_done;

 case 129:
 case 128:

  goto op_done;
 default:
  FUNC_5(VAR_2->state);
 }
op_err:
 FUNC_0("VF[%d] RELEASE error: rc %d\n", VAR_2->abs_vfid, VAR_3->rc);
op_done:
 FUNC_6(VAR_1, VAR_2, VAR_3);
}
