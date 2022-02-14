
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ixgb_adapter {int netdev; } ;
struct ethtool_cmd {scalar_t__ autoneg; scalar_t__ speed; scalar_t__ duplex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ixgb_adapter*,int) ;
 int FUNC_1 (struct ixgb_adapter*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ixgb_adapter*) ;
 struct ixgb_adapter* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_4, struct ethtool_cmd *VAR_5)
{
 struct ixgb_adapter *VAR_6 = FUNC_4(VAR_4);

 if (VAR_5->autoneg == VAR_0 ||
    VAR_5->speed + VAR_5->duplex != VAR_3 + VAR_1)
  return -VAR_2;

 if (FUNC_5(VAR_6->netdev)) {
  FUNC_0(VAR_6, 1);
  FUNC_1(VAR_6);
  FUNC_3(VAR_6);
  FUNC_2(VAR_4);
 } else
  FUNC_1(VAR_6);

 return 0;
}
