
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_virtf {int abs_vfid; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct bnx2x*,int ,int ) ;
 int FUNC_3 (struct bnx2x*,int ) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_virtf*) ;

__attribute__((used)) static void FUNC_5(struct bnx2x *VAR_1, struct bnx2x_virtf *VAR_2)
{

 FUNC_4(VAR_1, VAR_2);


 FUNC_3(VAR_1, FUNC_1(VAR_1, VAR_2->abs_vfid));
 FUNC_2(VAR_1, VAR_0, 0);
 FUNC_3(VAR_1, FUNC_0(VAR_1));
}
