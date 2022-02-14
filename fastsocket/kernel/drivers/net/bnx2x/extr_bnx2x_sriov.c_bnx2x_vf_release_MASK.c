
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_virtf {int abs_vfid; } ;
struct bnx2x_vfop_cmd {int block; int * done; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,int) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_virtf*,int ) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vfop_cmd*) ;

void FUNC_3(struct bnx2x *VAR_1, struct bnx2x_virtf *VAR_2, bool VAR_3)
{
 struct bnx2x_vfop_cmd VAR_4 = {
  .done = ((void*)0),
  .block = VAR_3,
 };
 int VAR_5;
 FUNC_1(VAR_1, VAR_2, VAR_0);

 VAR_5 = FUNC_2(VAR_1, VAR_2, &VAR_4);
 if (VAR_5)
  FUNC_0(VAR_5,
       "VF[%d] Failed to allocate resources for release op- rc=%d\n",
       VAR_2->abs_vfid, VAR_5);
}
