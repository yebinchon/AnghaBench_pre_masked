
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct link_params {int port; struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct bnx2x*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct bnx2x_phy *VAR_3,
      struct link_params *VAR_4)
{
 struct bnx2x *VAR_5 = VAR_4->bp;
 u8 VAR_6;
 if (FUNC_1(VAR_5))
  VAR_6 = FUNC_0(VAR_5);
 else
  VAR_6 = VAR_4->port;
 FUNC_2(VAR_2, "Setting 8073 port %d into low power mode\n",
    VAR_6);
 FUNC_3(VAR_5, VAR_0,
         VAR_1,
         VAR_6);
}
