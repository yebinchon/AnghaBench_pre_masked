
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_vars {int dummy; } ;
struct link_params {int port; struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_2 (struct bnx2x*,int ) ;
 int FUNC_3 (struct bnx2x*,int ,int ,int ) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_phy*,struct link_params*) ;

__attribute__((used)) static int FUNC_5(struct bnx2x_phy *VAR_4,
      struct link_params *VAR_5,
      struct link_vars *VAR_6)
{
 struct bnx2x *VAR_7 = VAR_5->bp;

 FUNC_3(VAR_7, VAR_2,
         VAR_3, VAR_5->port);


 FUNC_2(VAR_7, VAR_5->port);
 FUNC_4(VAR_7, VAR_4, VAR_5);

 FUNC_1(VAR_7, VAR_4, VAR_0, VAR_1, 1<<15);
 return FUNC_0(VAR_4, VAR_5, VAR_6);
}
