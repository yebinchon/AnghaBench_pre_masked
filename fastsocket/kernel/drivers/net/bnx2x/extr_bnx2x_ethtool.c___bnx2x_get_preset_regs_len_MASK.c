
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 scalar_t__ FUNC_3 (struct bnx2x*) ;
 scalar_t__ FUNC_4 (struct bnx2x*) ;
 int** VAR_0 ;

__attribute__((used)) static int FUNC_5(struct bnx2x *VAR_1, u32 VAR_2)
{
 if (FUNC_0(VAR_1))
  return VAR_0[0][VAR_2-1];
 else if (FUNC_1(VAR_1))
  return VAR_0[1][VAR_2-1];
 else if (FUNC_2(VAR_1))
  return VAR_0[2][VAR_2-1];
 else if (FUNC_3(VAR_1))
  return VAR_0[3][VAR_2-1];
 else if (FUNC_4(VAR_1))
  return VAR_0[4][VAR_2-1];
 else
  return 0;
}
