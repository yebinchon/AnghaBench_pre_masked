
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {scalar_t__ tx_coalesce_usecs; scalar_t__ rx_coalesce_usecs; } ;
struct bnx2x {scalar_t__ rx_ticks; scalar_t__ tx_ticks; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bnx2x*) ;
 struct bnx2x* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
         struct ethtool_coalesce *VAR_2)
{
 struct bnx2x *VAR_3 = FUNC_1(VAR_1);

 VAR_3->rx_ticks = (u16)VAR_2->rx_coalesce_usecs;
 if (VAR_3->rx_ticks > VAR_0)
  VAR_3->rx_ticks = VAR_0;

 VAR_3->tx_ticks = (u16)VAR_2->tx_coalesce_usecs;
 if (VAR_3->tx_ticks > VAR_0)
  VAR_3->tx_ticks = VAR_0;

 if (FUNC_2(VAR_1))
  FUNC_0(VAR_3);

 return 0;
}
