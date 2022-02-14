
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_virtf {int dummy; } ;
struct bnx2x_vfop_cmd {int block; int done; } ;
struct bnx2x_vfop {int dummy; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 struct bnx2x_vfop* FUNC_0 (struct bnx2x*,struct bnx2x_virtf*) ;
 int FUNC_1 (int,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_virtf*,int ,int ) ;

int FUNC_3(struct bnx2x *VAR_2,
      struct bnx2x_virtf *VAR_3,
      struct bnx2x_vfop_cmd *VAR_4)
{
 struct bnx2x_vfop *VAR_5 = FUNC_0(VAR_2, VAR_3);
 if (VAR_5) {
  FUNC_1(-1,
     VAR_1, VAR_4->done);
  return FUNC_2(VAR_2, VAR_3, VAR_1,
          VAR_4->block);
 }
 return -VAR_0;
}
