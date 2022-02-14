
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_ringparam {int rx_pending; scalar_t__ rx_max_pending; } ;
struct b44 {int rx_pending; } ;


 scalar_t__ VAR_0 ;
 struct b44* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_1,
         struct ethtool_ringparam *VAR_2)
{
 struct b44 *VAR_3 = FUNC_0(VAR_1);

 VAR_2->rx_max_pending = VAR_0 - 1;
 VAR_2->rx_pending = VAR_3->rx_pending;


}
