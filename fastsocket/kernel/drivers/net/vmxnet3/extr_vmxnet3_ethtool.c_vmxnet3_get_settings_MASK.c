
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxnet3_adapter {int link_speed; } ;
struct net_device {int dummy; } ;
struct ethtool_cmd {int supported; int duplex; int transceiver; int port; int advertising; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ethtool_cmd*,int) ;
 struct vmxnet3_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_7, struct ethtool_cmd *VAR_8)
{
 struct vmxnet3_adapter *VAR_9 = FUNC_1(VAR_7);

 VAR_8->supported = VAR_3 | VAR_4 |
     VAR_5;
 VAR_8->advertising = VAR_0;
 VAR_8->port = VAR_2;
 VAR_8->transceiver = VAR_6;

 if (VAR_9->link_speed) {
  FUNC_0(VAR_8, VAR_9->link_speed);
  VAR_8->duplex = VAR_1;
 } else {
  FUNC_0(VAR_8, -1);
  VAR_8->duplex = -1;
 }
 return 0;
}
