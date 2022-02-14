
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_vars {int dummy; } ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;
 int FUNC_2 (struct bnx2x_phy*,struct link_params*) ;

__attribute__((used)) static void FUNC_3(struct link_params *VAR_1,
          struct link_vars *VAR_2,
          struct bnx2x_phy *VAR_3)
{
 struct bnx2x *VAR_4 = VAR_1->bp;
 FUNC_0(VAR_0, "KR2 recovery\n");
 FUNC_1(VAR_3, VAR_1, VAR_2);
 FUNC_2(VAR_3, VAR_1);
}
