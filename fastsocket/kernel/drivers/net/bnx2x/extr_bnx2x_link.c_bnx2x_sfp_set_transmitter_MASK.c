
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct link_params*,struct bnx2x_phy*,int ) ;
 int FUNC_3 (struct link_params*,struct bnx2x_phy*,int ) ;

__attribute__((used)) static void FUNC_4(struct link_params *VAR_1,
          struct bnx2x_phy *VAR_2,
          u8 VAR_3)
{
 struct bnx2x *VAR_4 = VAR_1->bp;
 FUNC_1(VAR_0, "Setting SFP+ transmitter to %d\n", VAR_3);
 if (FUNC_0(VAR_4))
  FUNC_3(VAR_1, VAR_2, VAR_3);
 else
  FUNC_2(VAR_1, VAR_2, VAR_3);
}
