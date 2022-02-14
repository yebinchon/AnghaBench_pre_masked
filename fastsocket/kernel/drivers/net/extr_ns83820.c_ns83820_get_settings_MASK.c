
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ns83820 {int CFG_cache; scalar_t__ base; } ;
struct net_device {int dummy; } ;
struct ethtool_cmd {int supported; int autoneg; int speed; int duplex; int port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ns83820* FUNC_0 (struct net_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_18,
    struct ethtool_cmd *VAR_19)
{
 struct ns83820 *VAR_20 = FUNC_0(VAR_18);
 u32 VAR_21, VAR_22, VAR_23;
 int VAR_24 = 0;
 int VAR_25 = 0;
 VAR_21 = FUNC_1(VAR_20->base + VAR_0) ^ VAR_7;
 VAR_22 = FUNC_1(VAR_20->base + VAR_15);
 VAR_23 = FUNC_1(VAR_20->base + VAR_16);

 if (VAR_20->CFG_cache & VAR_3) {

  VAR_24 = 1;
  VAR_25 = (VAR_21 & VAR_1) ? 1 : 0;

 } else {

  VAR_25 = (VAR_21 & VAR_1) ? 1 : 0;
        }

 VAR_19->supported = VAR_13;


 if (VAR_20->CFG_cache & VAR_3) {
  VAR_19->supported |= VAR_12 |
     VAR_11 |
     VAR_14;
  VAR_19->port = VAR_6;
 }

 VAR_19->duplex = VAR_25 ? VAR_4 : VAR_5;
 switch (VAR_21 / VAR_2 & 3) {
 case 2:
  VAR_19->speed = VAR_10;
  break;
 case 1:
  VAR_19->speed = VAR_9;
  break;
 default:
  VAR_19->speed = VAR_8;
  break;
 }
 VAR_19->autoneg = (VAR_23 & VAR_17) ? 1: 0;
 return 0;
}
