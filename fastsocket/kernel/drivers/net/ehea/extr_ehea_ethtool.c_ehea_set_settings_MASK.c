
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_cmd {scalar_t__ autoneg; int speed; int duplex; } ;
struct ehea_port {int full_duplex; int port_speed; TYPE_1__* netdev; } ;
struct TYPE_2__ {int name; } ;


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




 int FUNC_0 (char*,int ,int ,char*) ;
 int FUNC_1 (struct ehea_port*,int ) ;
 struct ehea_port* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_10, struct ethtool_cmd *VAR_11)
{
 struct ehea_port *VAR_12 = FUNC_2(VAR_10);
 int VAR_13 = 0;
 u32 VAR_14;

 if (VAR_11->autoneg == VAR_0) {
  VAR_14 = VAR_2;
  goto doit;
 }

 switch (VAR_11->speed) {
 case 131:
  if (VAR_11->duplex == VAR_1)
   VAR_14 = VAR_7;
  else
   VAR_14 = VAR_8;
  break;

 case 130:
  if (VAR_11->duplex == VAR_1)
   VAR_14 = VAR_4;
  else
   VAR_14 = VAR_5;
  break;

 case 129:
  if (VAR_11->duplex == VAR_1)
   VAR_14 = VAR_9;
  else
   VAR_13 = -VAR_3;
  break;

 case 128:
  if (VAR_11->duplex == VAR_1)
   VAR_14 = VAR_6;
  else
   VAR_13 = -VAR_3;
  break;

 default:
   VAR_13 = -VAR_3;
  break;
 }

 if (VAR_13)
  goto out;
doit:
 VAR_13 = FUNC_1(VAR_12, VAR_14);

 if (!VAR_13)
  FUNC_0("%s: Port speed succesfully set: %dMbps "
     "%s Duplex",
     VAR_12->netdev->name, VAR_12->port_speed,
     VAR_12->full_duplex == 1 ? "Full" : "Half");
out:
 return VAR_13;
}
