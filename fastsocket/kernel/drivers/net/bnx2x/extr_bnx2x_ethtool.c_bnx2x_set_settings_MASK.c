
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_cmd {int advertising; scalar_t__ duplex; int port; scalar_t__ autoneg; int maxrxpkt; int maxtxpkt; int transceiver; int phy_address; int supported; int cmd; } ;
struct TYPE_9__ {int multi_phy_config; int* req_line_speed; scalar_t__* req_duplex; TYPE_1__* phy; int * speed_cap_mask; } ;
struct TYPE_10__ {int* supported; int* advertising; } ;
struct TYPE_8__ {scalar_t__ bc_ver; } ;
struct TYPE_7__ {int line_speed; } ;
struct bnx2x {scalar_t__ state; int pending_max; TYPE_4__ link_params; TYPE_5__ port; TYPE_3__ common; TYPE_2__ link_vars; } ;
struct TYPE_6__ {scalar_t__ type; int media_type; } ;


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
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 size_t VAR_22 ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;


 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;

 scalar_t__ VAR_35 ;





 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (struct bnx2x*) ;
 int FUNC_6 (struct bnx2x*,int ) ;
 int FUNC_7 (struct bnx2x*,int) ;
 int FUNC_8 (struct ethtool_cmd*) ;
 struct bnx2x* FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (struct net_device*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_48, struct ethtool_cmd *VAR_49)
{
 struct bnx2x *VAR_50 = FUNC_9(VAR_48);
 u32 VAR_51, VAR_52, VAR_53, VAR_54;
 u32 VAR_55, VAR_56;

 if (FUNC_1(VAR_50))
  return 0;

 FUNC_0(VAR_16, "ethtool_cmd: cmd %d\n"
    "  supported 0x%x  advertising 0x%x  speed %u\n"
    "  duplex %d  port %d  phy_address %d  transceiver %d\n"
    "  autoneg %d  maxtxpkt %d  maxrxpkt %d\n",
    VAR_49->cmd, VAR_49->supported, VAR_49->advertising,
    FUNC_8(VAR_49),
    VAR_49->duplex, VAR_49->port, VAR_49->phy_address, VAR_49->transceiver,
    VAR_49->autoneg, VAR_49->maxtxpkt, VAR_49->maxrxpkt);

 VAR_55 = FUNC_8(VAR_49);


 if (VAR_49->duplex == VAR_19)
  VAR_49->duplex = VAR_18;

 if (FUNC_2(VAR_50)) {
  u32 VAR_57;
  u32 VAR_58 = VAR_50->link_vars.line_speed;


  if (!VAR_58)
   VAR_58 = 10000;

  if (VAR_50->common.bc_ver < VAR_35) {
   FUNC_0(VAR_16,
      "To set speed BC %X or higher is required, please upgrade BC\n",
      VAR_35);
   return -VAR_20;
  }

  VAR_57 = (VAR_55 * 100) / VAR_58;

  if (VAR_58 < VAR_55 || !VAR_57) {
   FUNC_0(VAR_16,
      "Speed setting should be in a range from 1%% to 100%% of actual line speed\n");
   return -VAR_20;
  }

  if (VAR_50->state != VAR_17)

   VAR_50->pending_max = VAR_57;
  else
   FUNC_7(VAR_50, VAR_57);

  return 0;
 }

 VAR_52 = FUNC_4(VAR_50);
 VAR_53 = VAR_50->link_params.multi_phy_config;
 switch (VAR_49->port) {
 case 133:
  if (VAR_50->port.supported[VAR_52] & VAR_47)
   break;

  if (!(VAR_50->port.supported[0] & VAR_47 ||
        VAR_50->port.supported[1] & VAR_47)) {
   FUNC_0(VAR_16, "Unsupported port type\n");
   return -VAR_20;
  }
  VAR_50->link_params.multi_phy_config &=
   ~VAR_24;
  if (VAR_50->link_params.multi_phy_config &
      VAR_26)
   VAR_50->link_params.multi_phy_config |=
   VAR_25;
  else
   VAR_50->link_params.multi_phy_config |=
   VAR_23;
  break;
 case 134:
 case 135:
  if (VAR_50->port.supported[VAR_52] & VAR_46)
   break;

  if (!(VAR_50->port.supported[0] & VAR_46 ||
        VAR_50->port.supported[1] & VAR_46)) {
   FUNC_0(VAR_16, "Unsupported port type\n");
   return -VAR_20;
  }
  VAR_50->link_params.multi_phy_config &=
   ~VAR_24;
  if (VAR_50->link_params.multi_phy_config &
      VAR_26)
   VAR_50->link_params.multi_phy_config |=
   VAR_23;
  else
   VAR_50->link_params.multi_phy_config |=
   VAR_25;
  break;
 default:
  FUNC_0(VAR_16, "Unsupported port type\n");
  return -VAR_20;
 }

 VAR_54 = VAR_50->link_params.multi_phy_config;

 VAR_52 = FUNC_4(VAR_50);

 VAR_50->link_params.multi_phy_config = VAR_53;
 FUNC_0(VAR_16, "cfg_idx = %x\n", VAR_52);

 if (VAR_49->autoneg == VAR_15) {
  u32 VAR_59 = VAR_50->port.supported[VAR_52];
  if (VAR_50->link_params.phy[VAR_22].type ==
      VAR_34)
   VAR_59 |= (VAR_41 |
            VAR_40);
  if (!(VAR_50->port.supported[VAR_52] & VAR_45)) {
   FUNC_0(VAR_16, "Autoneg not supported\n");
   return -VAR_20;
  }


  if (VAR_49->advertising & ~VAR_59) {
   FUNC_0(VAR_16,
      "Advertisement parameters are not supported\n");
   return -VAR_20;
  }

  VAR_50->link_params.req_line_speed[VAR_52] = VAR_36;
  VAR_50->link_params.req_duplex[VAR_52] = VAR_49->duplex;
  VAR_50->port.advertising[VAR_52] = (VAR_12 |
      VAR_49->advertising);
  if (VAR_49->advertising) {

   VAR_50->link_params.speed_cap_mask[VAR_52] = 0;
   if (VAR_49->advertising & VAR_9) {
    VAR_50->link_params.speed_cap_mask[VAR_52] |=
    VAR_31;
   }
   if (VAR_49->advertising & VAR_8)
    VAR_50->link_params.speed_cap_mask[VAR_52] |=
    VAR_30;

   if (VAR_49->advertising & VAR_6)
    VAR_50->link_params.speed_cap_mask[VAR_52] |=
    VAR_27;

   if (VAR_49->advertising & VAR_7) {
    VAR_50->link_params.speed_cap_mask[VAR_52] |=
         VAR_28;
   }
   if (VAR_49->advertising & VAR_5) {
    VAR_50->link_params.speed_cap_mask[VAR_52] |=
     VAR_32;
   }
   if (VAR_49->advertising & (VAR_4 |
      VAR_3))
    VAR_50->link_params.speed_cap_mask[VAR_52] |=
     VAR_32;

   if (VAR_49->advertising & (VAR_2 |
      VAR_1 |
      VAR_0))
    VAR_50->link_params.speed_cap_mask[VAR_52] |=
     VAR_29;

   if (VAR_49->advertising & VAR_10)
    VAR_50->link_params.speed_cap_mask[VAR_52] |=
     VAR_33;
  }
 } else {

  switch (VAR_55) {
  case 132:
   if (VAR_49->duplex == VAR_18) {
    if (!(VAR_50->port.supported[VAR_52] &
          VAR_42)) {
     FUNC_0(VAR_16,
        "10M full not supported\n");
     return -VAR_20;
    }

    VAR_51 = (VAR_8 |
            VAR_14);
   } else {
    if (!(VAR_50->port.supported[VAR_52] &
          VAR_43)) {
     FUNC_0(VAR_16,
        "10M half not supported\n");
     return -VAR_20;
    }

    VAR_51 = (VAR_9 |
            VAR_14);
   }
   break;

  case 131:
   if (VAR_49->duplex == VAR_18) {
    if (!(VAR_50->port.supported[VAR_52] &
      VAR_40)) {
     FUNC_0(VAR_16,
        "100M full not supported\n");
     return -VAR_20;
    }

    VAR_51 = (VAR_6 |
            VAR_14);
   } else {
    if (!(VAR_50->port.supported[VAR_52] &
      VAR_41)) {
     FUNC_0(VAR_16,
        "100M half not supported\n");
     return -VAR_20;
    }

    VAR_51 = (VAR_7 |
            VAR_14);
   }
   break;

  case 130:
   if (VAR_49->duplex != VAR_18) {
    FUNC_0(VAR_16,
       "1G half not supported\n");
    return -VAR_20;
   }

   if (!(VAR_50->port.supported[VAR_52] &
         VAR_39)) {
    FUNC_0(VAR_16,
       "1G full not supported\n");
    return -VAR_20;
   }

   VAR_51 = (VAR_4 |
           VAR_14);
   break;

  case 128:
   if (VAR_49->duplex != VAR_18) {
    FUNC_0(VAR_16,
       "2.5G half not supported\n");
    return -VAR_20;
   }

   if (!(VAR_50->port.supported[VAR_52]
         & VAR_44)) {
    FUNC_0(VAR_16,
       "2.5G full not supported\n");
    return -VAR_20;
   }

   VAR_51 = (VAR_11 |
           VAR_14);
   break;

  case 129:
   if (VAR_49->duplex != VAR_18) {
    FUNC_0(VAR_16,
       "10G half not supported\n");
    return -VAR_20;
   }
   VAR_56 = FUNC_3(VAR_50);
   if (!(VAR_50->port.supported[VAR_52]
         & VAR_38) ||
       (VAR_50->link_params.phy[VAR_56].media_type ==
        VAR_21)) {
    FUNC_0(VAR_16,
       "10G full not supported\n");
    return -VAR_20;
   }

   VAR_51 = (VAR_2 |
           VAR_13);
   break;

  default:
   FUNC_0(VAR_16, "Unsupported speed %u\n", VAR_55);
   return -VAR_20;
  }

  VAR_50->link_params.req_line_speed[VAR_52] = VAR_55;
  VAR_50->link_params.req_duplex[VAR_52] = VAR_49->duplex;
  VAR_50->port.advertising[VAR_52] = VAR_51;
 }

 FUNC_0(VAR_16, "req_line_speed %d\n"
    "  req_duplex %d  advertising 0x%x\n",
    VAR_50->link_params.req_line_speed[VAR_52],
    VAR_50->link_params.req_duplex[VAR_52],
    VAR_50->port.advertising[VAR_52]);


 VAR_50->link_params.multi_phy_config = VAR_54;
 if (FUNC_10(VAR_48)) {
  FUNC_6(VAR_50, VAR_37);
  FUNC_5(VAR_50);
 }

 return 0;
}
