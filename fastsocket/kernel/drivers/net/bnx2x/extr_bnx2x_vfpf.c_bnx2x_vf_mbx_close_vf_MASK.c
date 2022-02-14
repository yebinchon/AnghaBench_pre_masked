
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_virtf {int op_rc; int abs_vfid; } ;
struct bnx2x_vfop_cmd {int block; int (* done ) (struct bnx2x*,struct bnx2x_virtf*) ;} ;
struct bnx2x_vf_mbx {int dummy; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_virtf*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vfop_cmd*) ;

__attribute__((used)) static void FUNC_3(struct bnx2x *VAR_1, struct bnx2x_virtf *VAR_2,
      struct bnx2x_vf_mbx *VAR_3)
{
 struct bnx2x_vfop_cmd VAR_4 = {
  .done = FUNC_1,
  .block = 0,
 };

 FUNC_0(VAR_0, "VF[%d] VF_CLOSE\n", VAR_2->abs_vfid);

 VAR_2->op_rc = FUNC_2(VAR_1, VAR_2, &VAR_4);
 if (VAR_2->op_rc)
  FUNC_1(VAR_1, VAR_2);
}
