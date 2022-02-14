
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct link_vars {int phy_flags; int flow_ctrl; int mac_type; } ;
struct link_params {int port; int lane_config; int feature_config_flags; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (struct bnx2x*,int,int) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int FUNC_2 (struct bnx2x*,int) ;
 int FUNC_3 (struct bnx2x*,scalar_t__,int) ;
 int FUNC_4 (struct bnx2x*,int,int) ;
 int FUNC_5 (struct bnx2x*,int,int) ;

__attribute__((used)) static int FUNC_6(struct link_params *VAR_47,
        struct link_vars *VAR_48, u8 VAR_49)
{
 struct bnx2x *VAR_50 = VAR_47->bp;
 u8 VAR_51 = VAR_47->port;
 u32 VAR_52 = VAR_51 ? VAR_26 : VAR_25;
 u32 VAR_53;

 FUNC_0(VAR_31, "enabling EMAC\n");


 FUNC_3(VAR_50, VAR_27 + VAR_29,
        (VAR_30 << VAR_51));


 FUNC_3(VAR_50, VAR_37 + VAR_51*4, 1);


 if (VAR_48->phy_flags & VAR_44) {
  u32 VAR_54 = ((VAR_47->lane_config &
     VAR_45) >>
    VAR_46);

  FUNC_0(VAR_31, "XGXS\n");

  FUNC_3(VAR_50, VAR_42 + VAR_51*4, VAR_54);

  FUNC_3(VAR_50, VAR_43 + VAR_51*4, 1);

 } else {
  FUNC_0(VAR_31, "SerDes\n");

  FUNC_3(VAR_50, VAR_43 + VAR_51*4, 0);
 }

 FUNC_5(VAR_50, VAR_52 + VAR_3,
        VAR_17);
 FUNC_5(VAR_50, VAR_52 + VAR_5,
        VAR_21);


  FUNC_4(VAR_50, VAR_52 + VAR_3,
          VAR_13);

  FUNC_4(VAR_50, VAR_52 + VAR_5,
          (VAR_19 |
    VAR_20));
  if (!(VAR_47->feature_config_flags &
        VAR_24)) {
   if (VAR_48->flow_ctrl & VAR_0)
    FUNC_5(VAR_50, VAR_52 +
           VAR_3,
           VAR_13);

   if (VAR_48->flow_ctrl & VAR_1)
    FUNC_5(VAR_50, VAR_52 +
           VAR_5,
           (VAR_19 |
            VAR_20));
  } else
   FUNC_5(VAR_50, VAR_52 + VAR_5,
          VAR_20);


 VAR_53 = FUNC_2(VAR_50, VAR_52 + VAR_3);
 VAR_53 |= VAR_15 | VAR_16;
 FUNC_1(VAR_50, VAR_6, 0);
 if (VAR_47->feature_config_flags & VAR_24) {
  FUNC_0(VAR_31, "PFC is enabled\n");

  FUNC_1(VAR_50, VAR_6,
   VAR_8 |
   VAR_9 |
   VAR_7);

  FUNC_1(VAR_50, VAR_10,
   ((0x0101 <<
     VAR_11) |
    (0x00ff <<
     VAR_12)));
  VAR_53 |= VAR_14;
 }
 FUNC_1(VAR_50, VAR_3, VAR_53);


 VAR_53 = FUNC_2(VAR_50, VAR_52 + VAR_2);
 if (VAR_49)
  VAR_53 |= 0x810;
 else
  VAR_53 &= ~0x810;
 FUNC_1(VAR_50, VAR_2, VAR_53);


 FUNC_3(VAR_50, VAR_40 + VAR_51*4, 1);


 FUNC_1(VAR_50, VAR_4,
  (VAR_18 |
   (VAR_22 + VAR_23)));


 FUNC_3(VAR_50, VAR_41 + VAR_51*4, 0x1);


 FUNC_3(VAR_50, VAR_32 + VAR_51*4, 0x0);
 FUNC_3(VAR_50, VAR_34 + VAR_51*4, 0x0);
 FUNC_3(VAR_50, VAR_33 + VAR_51*4, 0x0);


 FUNC_3(VAR_50, VAR_38 + VAR_51*4, 0x1);
 VAR_53 = 0;
 if ((VAR_47->feature_config_flags &
       VAR_24) ||
     (VAR_48->flow_ctrl & VAR_1))
  VAR_53 = 1;

 FUNC_3(VAR_50, VAR_39 + VAR_51*4, VAR_53);
 FUNC_3(VAR_50, VAR_36 + VAR_51*4, 0x1);

 FUNC_3(VAR_50, VAR_35 + VAR_51*4, 0x0);

 VAR_48->mac_type = VAR_28;
 return 0;
}
