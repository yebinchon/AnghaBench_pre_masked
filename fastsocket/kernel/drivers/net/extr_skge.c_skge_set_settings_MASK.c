
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct skge_port {int duplex; int speed; scalar_t__ autoneg; int advertising; struct skge_hw* hw; } ;
struct skge_hw {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_cmd {scalar_t__ autoneg; int advertising; int speed; int duplex; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct net_device*) ;
 struct skge_port* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct skge_hw const*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_10, struct ethtool_cmd *VAR_11)
{
 struct skge_port *VAR_12 = FUNC_1(VAR_10);
 const struct skge_hw *VAR_13 = VAR_12->hw;
 u32 VAR_14 = FUNC_4(VAR_13);
 int VAR_15 = 0;

 if (VAR_11->autoneg == VAR_0) {
  VAR_11->advertising = VAR_14;
  VAR_12->duplex = -1;
  VAR_12->speed = -1;
 } else {
  u32 VAR_16;

  switch (VAR_11->speed) {
  case 128:
   if (VAR_11->duplex == VAR_1)
    VAR_16 = VAR_4;
   else if (VAR_11->duplex == VAR_2)
    VAR_16 = VAR_5;
   else
    return -VAR_3;
   break;
  case 129:
   if (VAR_11->duplex == VAR_1)
    VAR_16 = VAR_6;
   else if (VAR_11->duplex == VAR_2)
    VAR_16 = VAR_7;
   else
    return -VAR_3;
   break;

  case 130:
   if (VAR_11->duplex == VAR_1)
    VAR_16 = VAR_8;
   else if (VAR_11->duplex == VAR_2)
    VAR_16 = VAR_9;
   else
    return -VAR_3;
   break;
  default:
   return -VAR_3;
  }

  if ((VAR_16 & VAR_14) == 0)
   return -VAR_3;

  VAR_12->speed = VAR_11->speed;
  VAR_12->duplex = VAR_11->duplex;
 }

 VAR_12->autoneg = VAR_11->autoneg;
 VAR_12->advertising = VAR_11->advertising;

 if (FUNC_2(VAR_10)) {
  FUNC_3(VAR_10);
  VAR_15 = FUNC_5(VAR_10);
  if (VAR_15) {
   FUNC_0(VAR_10);
   return VAR_15;
  }
 }

 return (0);
}
