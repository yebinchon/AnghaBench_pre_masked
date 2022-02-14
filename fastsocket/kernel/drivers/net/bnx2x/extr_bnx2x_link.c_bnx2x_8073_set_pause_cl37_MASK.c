
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct link_vars {int ieee_fc; } ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bnx2x_phy*,struct link_params*,int*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct link_params *VAR_6,
          struct bnx2x_phy *VAR_7,
          struct link_vars *VAR_8)
{
 u16 VAR_9;
 struct bnx2x *VAR_10 = VAR_6->bp;
 FUNC_2(VAR_10, VAR_7,
   VAR_0, VAR_1, &VAR_9);

 VAR_9 &= ~VAR_3;

 FUNC_1(VAR_7, VAR_6, &VAR_8->ieee_fc);
 if ((VAR_8->ieee_fc &
     VAR_4) ==
     VAR_4) {
  VAR_9 |= VAR_4;
 }
 if ((VAR_8->ieee_fc &
     VAR_2) ==
     VAR_2) {
  VAR_9 |= VAR_2;
 }
 if ((VAR_8->ieee_fc &
     VAR_3) ==
     VAR_3) {
  VAR_9 |= VAR_3;
 }
 FUNC_0(VAR_5,
   "Ext phy AN advertize cl37 0x%x\n", VAR_9);

 FUNC_3(VAR_10, VAR_7,
    VAR_0, VAR_1, VAR_9);
 FUNC_4(500);
}
