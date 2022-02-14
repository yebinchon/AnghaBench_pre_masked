
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int transciver; int link_speed; } ;
struct mlx4_en_priv {TYPE_1__ port_state; int port; int mdev; } ;
struct ethtool_cmd {int duplex; int port; int transceiver; int advertising; int supported; int autoneg; } ;


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
 int FUNC_0 (struct ethtool_cmd*,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 struct mlx4_en_priv* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_13, struct ethtool_cmd *VAR_14)
{
 struct mlx4_en_priv *VAR_15 = FUNC_2(VAR_13);
 int VAR_16;

 VAR_14->autoneg = VAR_3;
 VAR_14->supported = VAR_8;
 VAR_14->advertising = VAR_0;

 if (FUNC_1(VAR_15->mdev, VAR_15->port))
  return -VAR_5;

 VAR_16 = VAR_15->port_state.transciver;
 if (FUNC_3(VAR_13)) {
  FUNC_0(VAR_14, VAR_15->port_state.link_speed);
  VAR_14->duplex = VAR_4;
 } else {
  FUNC_0(VAR_14, -1);
  VAR_14->duplex = -1;
 }

 if (VAR_16 > 0 && VAR_16 <= 0xC) {
  VAR_14->port = VAR_6;
  VAR_14->transceiver = VAR_11;
  VAR_14->supported |= VAR_9;
  VAR_14->advertising |= VAR_1;
 } else if (VAR_16 == 0x80 || VAR_16 == 0) {
  VAR_14->port = VAR_7;
  VAR_14->transceiver = VAR_12;
  VAR_14->supported |= VAR_10;
  VAR_14->advertising |= VAR_2;
 } else {
  VAR_14->port = -1;
  VAR_14->transceiver = -1;
 }
 return 0;
}
