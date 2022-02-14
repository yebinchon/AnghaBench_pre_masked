
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x_virtf {int abs_vfid; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct bnx2x*,int ) ;
 int FUNC_3 (struct bnx2x*,int ,int) ;
 int FUNC_4 (struct bnx2x*,int ) ;

__attribute__((used)) static void FUNC_5(struct bnx2x *VAR_5, struct bnx2x_virtf *VAR_6)
{
 u32 VAR_7;


 FUNC_4(VAR_5, FUNC_1(VAR_5, VAR_6->abs_vfid));
 VAR_7 = FUNC_2(VAR_5, VAR_0);
 VAR_7 &= ~(VAR_2 | VAR_4 |
   VAR_1 | VAR_3);
 FUNC_3(VAR_5, VAR_0, VAR_7);
 FUNC_4(VAR_5, FUNC_0(VAR_5));
}
