
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_cmd {int supported; int advertising; int duplex; int autoneg; int transceiver; int port; } ;
struct enic {int vdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ethtool_cmd*,int) ;
 struct enic* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_8,
 struct ethtool_cmd *VAR_9)
{
 struct enic *VAR_10 = FUNC_1(VAR_8);

 VAR_9->supported = (VAR_5 | VAR_6);
 VAR_9->advertising = (VAR_0 | VAR_1);
 VAR_9->port = VAR_4;
 VAR_9->transceiver = VAR_7;

 if (FUNC_2(VAR_8)) {
  FUNC_0(VAR_9, FUNC_3(VAR_10->vdev));
  VAR_9->duplex = VAR_3;
 } else {
  FUNC_0(VAR_9, -1);
  VAR_9->duplex = -1;
 }

 VAR_9->autoneg = VAR_2;

 return 0;
}
