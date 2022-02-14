
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int speed; } ;
struct spider_net_card {TYPE_1__ phy; } ;
struct net_device {int dummy; } ;
struct ethtool_cmd {int supported; int advertising; int duplex; int speed; int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct spider_net_card* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int
FUNC_1(struct net_device *VAR_6,
          struct ethtool_cmd *VAR_7)
{
 struct spider_net_card *VAR_8;
 VAR_8 = FUNC_0(VAR_6);

 VAR_7->supported = (VAR_4 |
        VAR_5);
 VAR_7->advertising = (VAR_0 |
        VAR_1);
 VAR_7->port = VAR_3;
 VAR_7->speed = VAR_8->phy.speed;
 VAR_7->duplex = VAR_2;

 return 0;
}
