
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_3(struct bnx2x_phy *VAR_9,
      struct link_params *VAR_10,
      u8 VAR_11)
{
 struct bnx2x *VAR_12 = VAR_10->bp;
 u16 VAR_13;

 FUNC_2(VAR_8, "bnx2x_restart_autoneg\n");


 if (VAR_11) {
  FUNC_0(VAR_12, VAR_9,
      VAR_6,
      VAR_0,
      &VAR_13);

  FUNC_1(VAR_12, VAR_9,
      VAR_6,
      VAR_0,
      (VAR_13 |
      VAR_1 |
      VAR_2));
 } else {

  FUNC_0(VAR_12, VAR_9,
      VAR_7,
      VAR_3,
      &VAR_13);
  FUNC_2(VAR_8,
    "bnx2x_restart_autoneg mii_control before = 0x%x\n",
    VAR_13);
  FUNC_1(VAR_12, VAR_9,
      VAR_7,
      VAR_3,
      (VAR_13 |
       VAR_4 |
       VAR_5));
 }
}
