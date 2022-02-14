
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int type; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;



 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ) ;
 int FUNC_2 (struct link_params*,int ) ;

__attribute__((used)) static void FUNC_3(struct link_params *VAR_1,
       struct bnx2x_phy *VAR_2,
       u8 VAR_3)
{
 struct bnx2x *VAR_4 = VAR_1->bp;
 FUNC_0(VAR_0, "Setting SFP+ power to %x\n", VAR_3);

 switch (VAR_2->type) {
 case 129:
 case 130:
  FUNC_1(VAR_1->bp, VAR_2, VAR_3);
  break;
 case 128:
  FUNC_2(VAR_1, VAR_3);
  break;
 default:
  break;
 }
}
