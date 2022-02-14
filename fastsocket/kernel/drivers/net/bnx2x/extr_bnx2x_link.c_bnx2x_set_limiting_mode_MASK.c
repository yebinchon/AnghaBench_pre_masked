
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct link_params {int bp; } ;
struct bnx2x_phy {int type; } ;






 int FUNC_0 (int ,struct bnx2x_phy*,int ) ;
 int FUNC_1 (int ,struct bnx2x_phy*,int ) ;
 int FUNC_2 (struct link_params*,struct bnx2x_phy*,int ) ;

__attribute__((used)) static void FUNC_3(struct link_params *VAR_0,
        struct bnx2x_phy *VAR_1,
        u16 VAR_2)
{
 switch (VAR_1->type) {
 case 130:
  FUNC_0(VAR_0->bp, VAR_1, VAR_2);
  break;
 case 129:
 case 131:
  FUNC_1(VAR_0->bp, VAR_1, VAR_2);
  break;
 case 128:
  FUNC_2(VAR_0, VAR_1, VAR_2);
  break;
 }
}
