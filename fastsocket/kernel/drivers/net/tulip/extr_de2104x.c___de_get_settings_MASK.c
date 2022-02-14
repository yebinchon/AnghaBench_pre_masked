
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ethtool_cmd {int speed; int autoneg; int duplex; int port; int advertising; scalar_t__ phy_address; int transceiver; int supported; } ;
struct de_private {int media_type; scalar_t__ media_lock; int media_advertise; int media_supported; } ;


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
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct de_private *VAR_11, struct ethtool_cmd *VAR_12)
{
 VAR_12->supported = VAR_11->media_supported;
 VAR_12->transceiver = VAR_10;
 VAR_12->phy_address = 0;
 VAR_12->advertising = VAR_11->media_advertise;

 switch (VAR_11->media_type) {
 case 129:
  VAR_12->port = VAR_6;
  VAR_12->speed = 5;
  break;
 case 128:
  VAR_12->port = VAR_7;
  VAR_12->speed = 2;
  break;
 default:
  VAR_12->port = VAR_8;
  VAR_12->speed = VAR_9;
  break;
 }

 if (FUNC_0(VAR_5) & VAR_4)
  VAR_12->duplex = VAR_2;
 else
  VAR_12->duplex = VAR_3;

 if (VAR_11->media_lock)
  VAR_12->autoneg = VAR_0;
 else
  VAR_12->autoneg = VAR_1;



 return 0;
}
