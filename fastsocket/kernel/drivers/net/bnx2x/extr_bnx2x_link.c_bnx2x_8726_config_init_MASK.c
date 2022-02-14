
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_vars {int dummy; } ;
struct link_params {int feature_config_flags; struct bnx2x* bp; } ;
struct bnx2x_phy {scalar_t__ req_line_speed; int speed_cap_mask; int* tx_preemphasis; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_1 (struct bnx2x_phy*,struct link_params*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_3 (struct link_params*,struct bnx2x_phy*,struct link_vars*) ;
 int FUNC_4 (struct bnx2x_phy*,struct link_params*) ;
 int FUNC_5 (struct bnx2x*,struct bnx2x_phy*,struct link_params*) ;

__attribute__((used)) static int FUNC_6(struct bnx2x_phy *VAR_19,
      struct link_params *VAR_20,
      struct link_vars *VAR_21)
{
 struct bnx2x *VAR_22 = VAR_20->bp;
 FUNC_0(VAR_14, "Initializing BCM8726\n");

 FUNC_2(VAR_22, VAR_19, VAR_7, VAR_13, 1<<15);
 FUNC_5(VAR_22, VAR_19, VAR_20);

 FUNC_1(VAR_19, VAR_20);






 FUNC_4(VAR_19, VAR_20);

 if (VAR_19->req_line_speed == VAR_17) {
  FUNC_0(VAR_14, "Setting 1G force\n");
  FUNC_2(VAR_22, VAR_19,
     VAR_7, VAR_13, 0x40);
  FUNC_2(VAR_22, VAR_19,
     VAR_7, VAR_10, 0xD);
  FUNC_2(VAR_22, VAR_19,
     VAR_7, VAR_8, 0x5);
  FUNC_2(VAR_22, VAR_19,
     VAR_7, VAR_9,
     0x400);
 } else if ((VAR_19->req_line_speed == VAR_18) &&
     (VAR_19->speed_cap_mask &
        VAR_16) &&
     ((VAR_19->speed_cap_mask &
        VAR_15) !=
      VAR_15)) {
  FUNC_0(VAR_14, "Setting 1G clause37\n");

  FUNC_3(VAR_20, VAR_19, VAR_21);
  FUNC_2(VAR_22, VAR_19,
     VAR_1, VAR_2, 0x20);
  FUNC_2(VAR_22, VAR_19,
     VAR_1, VAR_4, 0x040c);
  FUNC_2(VAR_22, VAR_19,
     VAR_1, VAR_5, 0x0020);
  FUNC_2(VAR_22, VAR_19,
     VAR_1, VAR_3, 0x1000);
  FUNC_2(VAR_22, VAR_19,
    VAR_1, VAR_6, 0x1200);



  FUNC_2(VAR_22, VAR_19,
     VAR_7, VAR_8, 0x4);
  FUNC_2(VAR_22, VAR_19,
     VAR_7, VAR_9,
     0x400);

 } else {
  FUNC_2(VAR_22, VAR_19,
     VAR_7, VAR_8, 1);
 }


 if ((VAR_20->feature_config_flags &
      VAR_0)) {
  FUNC_0(VAR_14,
     "Setting TX_CTRL1 0x%x, TX_CTRL2 0x%x\n",
    VAR_19->tx_preemphasis[0],
    VAR_19->tx_preemphasis[1]);
  FUNC_2(VAR_22, VAR_19,
     VAR_7,
     VAR_11,
     VAR_19->tx_preemphasis[0]);

  FUNC_2(VAR_22, VAR_19,
     VAR_7,
     VAR_12,
     VAR_19->tx_preemphasis[1]);
 }

 return 0;

}
