
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
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct bnx2x*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct bnx2x_phy *VAR_4,
     struct link_params *VAR_5)
{
 struct bnx2x *VAR_6 = VAR_5->bp;
 u8 VAR_7;

 if (FUNC_1(VAR_6))
  VAR_7 = FUNC_0(VAR_6);
 else
  VAR_7 = VAR_5->port;
 FUNC_3(VAR_6, VAR_0,
         VAR_2,
         VAR_7);
 FUNC_3(VAR_6, VAR_1,
         VAR_2,
         VAR_7);
 FUNC_2(VAR_3, "reset external PHY\n");
}
