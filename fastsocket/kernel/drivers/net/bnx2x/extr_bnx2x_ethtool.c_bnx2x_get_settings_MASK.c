
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
struct ethtool_cmd {int supported; scalar_t__ maxrxpkt; scalar_t__ maxtxpkt; int autoneg; int transceiver; int phy_address; int port; int duplex; int advertising; int cmd; int lp_advertising; } ;
struct TYPE_10__ {int link_status; int line_speed; int duplex; scalar_t__ link_up; } ;
struct TYPE_9__ {scalar_t__* req_line_speed; TYPE_2__* phy; } ;
struct TYPE_8__ {int prtad; } ;
struct TYPE_6__ {int* supported; int * advertising; } ;
struct bnx2x {scalar_t__ state; int flags; TYPE_5__ link_vars; TYPE_4__ link_params; TYPE_3__ mdio; TYPE_1__ port; } ;
struct TYPE_7__ {scalar_t__ media_type; } ;


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
 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*,int ,int,int ,int ,int ,int ,int ,int ,int ,scalar_t__,scalar_t__) ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 size_t FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (struct bnx2x*) ;
 int FUNC_6 (struct bnx2x*) ;
 int FUNC_7 (struct ethtool_cmd*) ;
 int FUNC_8 (struct ethtool_cmd*,int ) ;
 struct bnx2x* FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_37, struct ethtool_cmd *VAR_38)
{
 struct bnx2x *VAR_39 = FUNC_9(VAR_37);
 int VAR_40 = FUNC_4(VAR_39);


 VAR_38->supported = VAR_39->port.supported[VAR_40] |
  (VAR_39->port.supported[VAR_40 ^ 1] &
   (VAR_35 | VAR_34));
 VAR_38->advertising = VAR_39->port.advertising[VAR_40];
 if (VAR_39->link_params.phy[FUNC_3(VAR_39)].media_type ==
     VAR_17) {
  VAR_38->supported &= ~(VAR_33);
  VAR_38->advertising &= ~(VAR_0);
 }

 if ((VAR_39->state == VAR_15) && VAR_39->link_vars.link_up &&
     !(VAR_39->flags & VAR_30)) {
  VAR_38->duplex = VAR_39->link_vars.duplex;

  if (FUNC_2(VAR_39) && !FUNC_0(VAR_39))
   FUNC_8(VAR_38, FUNC_5(VAR_39));
  else
   FUNC_8(VAR_38, VAR_39->link_vars.line_speed);
 } else {
  VAR_38->duplex = VAR_16;
  FUNC_8(VAR_38, VAR_32);
 }

 VAR_38->port = FUNC_6(VAR_39);

 VAR_38->phy_address = VAR_39->mdio.prtad;
 VAR_38->transceiver = VAR_36;

 if (VAR_39->link_params.req_line_speed[VAR_40] == VAR_31)
  VAR_38->autoneg = VAR_13;
 else
  VAR_38->autoneg = VAR_12;


 if (VAR_39->link_vars.link_status & VAR_18) {
  u32 VAR_41 = VAR_39->link_vars.link_status;

  VAR_38->lp_advertising |= VAR_10;
  if (VAR_41 & VAR_29)
   VAR_38->lp_advertising |= VAR_11;
  if (VAR_41 & VAR_28)
   VAR_38->lp_advertising |= VAR_9;

  if (VAR_41 & VAR_25)
   VAR_38->lp_advertising |= VAR_6;
  if (VAR_41 & VAR_24)
   VAR_38->lp_advertising |= VAR_5;
  if (VAR_41 & VAR_22)
   VAR_38->lp_advertising |= VAR_4;
  if (VAR_41 & VAR_21)
   VAR_38->lp_advertising |= VAR_3;
  if (VAR_41 & VAR_20)
   VAR_38->lp_advertising |= VAR_2;
  if (VAR_41 & VAR_19)
   VAR_38->lp_advertising |= VAR_1;
  if (VAR_41 & VAR_27)
   VAR_38->lp_advertising |= VAR_8;
  if (VAR_41 & VAR_23)
   VAR_38->lp_advertising |= VAR_0;
  if (VAR_41 & VAR_26)
   VAR_38->lp_advertising |= VAR_7;
 }

 VAR_38->maxtxpkt = 0;
 VAR_38->maxrxpkt = 0;

 FUNC_1(VAR_14, "ethtool_cmd: cmd %d\n"
    "  supported 0x%x  advertising 0x%x  speed %u\n"
    "  duplex %d  port %d  phy_address %d  transceiver %d\n"
    "  autoneg %d  maxtxpkt %d  maxrxpkt %d\n",
    VAR_38->cmd, VAR_38->supported, VAR_38->advertising,
    FUNC_7(VAR_38),
    VAR_38->duplex, VAR_38->port, VAR_38->phy_address, VAR_38->transceiver,
    VAR_38->autoneg, VAR_38->maxtxpkt, VAR_38->maxrxpkt);

 return 0;
}
