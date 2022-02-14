
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ethtool_cmd {int speed; scalar_t__ duplex; int port; scalar_t__ transceiver; scalar_t__ autoneg; int advertising; } ;
struct de_private {int media_supported; scalar_t__ media_type; unsigned int media_lock; int media_advertise; scalar_t__ de21040; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;


 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (struct de_private*) ;
 int FUNC_1 (struct de_private*) ;
 int FUNC_2 (struct de_private*) ;

__attribute__((used)) static int FUNC_3(struct de_private *VAR_19, struct ethtool_cmd *VAR_20)
{
 u32 VAR_21;
 unsigned int VAR_22;

 if (VAR_20->speed != VAR_17 && VAR_20->speed != 5 && VAR_20->speed != 2)
  return -VAR_15;
 if (VAR_19->de21040 && VAR_20->speed == 2)
  return -VAR_15;
 if (VAR_20->duplex != VAR_14 && VAR_20->duplex != VAR_13)
  return -VAR_15;
 if (VAR_20->port != VAR_16 && VAR_20->port != 129 && VAR_20->port != 128)
  return -VAR_15;
 if (VAR_19->de21040 && VAR_20->port == 128)
  return -VAR_15;
 if (VAR_20->transceiver != VAR_18)
  return -VAR_15;
 if (VAR_20->autoneg != VAR_6 && VAR_20->autoneg != VAR_7)
  return -VAR_15;
 if (VAR_20->advertising & ~VAR_19->media_supported)
  return -VAR_15;
 if (VAR_20->autoneg == VAR_7 &&
     (!(VAR_20->advertising & VAR_3)))
  return -VAR_15;

 switch (VAR_20->port) {
 case 129:
  VAR_21 = VAR_8;
  if (!(VAR_20->advertising & VAR_2))
   return -VAR_15;
  break;
 case 128:
  VAR_21 = VAR_9;
  if (!(VAR_20->advertising & VAR_4))
   return -VAR_15;
  break;
 default:
  if (VAR_20->autoneg == VAR_7)
   VAR_21 = VAR_11;
  else if (VAR_20->duplex == VAR_13)
   VAR_21 = VAR_12;
  else
   VAR_21 = VAR_10;
  if (!(VAR_20->advertising & VAR_5))
   return -VAR_15;
  if (!(VAR_20->advertising & (VAR_0 | VAR_1)))
   return -VAR_15;
  break;
 }

 VAR_22 = (VAR_20->autoneg == VAR_7) ? 0 : 1;

 if ((VAR_21 == VAR_19->media_type) &&
     (VAR_22 == VAR_19->media_lock) &&
     (VAR_20->advertising == VAR_19->media_advertise))
  return 0;

 FUNC_0(VAR_19);
 FUNC_2(VAR_19);

 VAR_19->media_type = VAR_21;
 VAR_19->media_lock = VAR_22;
 VAR_19->media_advertise = VAR_20->advertising;
 FUNC_1(VAR_19);

 return 0;
}
