
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct link_vars {int ieee_fc; } ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct bnx2x_phy*,struct link_params*,int*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int *) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct link_params *VAR_8,
        struct bnx2x_phy *VAR_9,
        struct link_vars *VAR_10)
{
 u16 VAR_11;
 struct bnx2x *VAR_12 = VAR_8->bp;

 FUNC_2(VAR_12, VAR_9, VAR_0, VAR_1, &VAR_11);

 VAR_11 &= ~VAR_3;


 FUNC_1(VAR_9, VAR_8, &VAR_10->ieee_fc);
 if ((VAR_10->ieee_fc &
     VAR_5) ==
     VAR_5) {
  VAR_11 |= VAR_2;
 }
 if ((VAR_10->ieee_fc &
     VAR_6) ==
     VAR_6) {
  VAR_11 |= VAR_4;
 }
 FUNC_0(VAR_7, "Ext phy AN advertize 0x%x\n", VAR_11);
 FUNC_3(VAR_12, VAR_9, VAR_0, VAR_1, VAR_11);
}
