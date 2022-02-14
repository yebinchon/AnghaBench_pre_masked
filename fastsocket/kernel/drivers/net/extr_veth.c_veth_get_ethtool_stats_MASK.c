
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct veth_priv {TYPE_1__* peer; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_2__ {int ifindex; } ;


 struct veth_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
  struct ethtool_stats *VAR_1, u64 *VAR_2)
{
 struct veth_priv *VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 VAR_2[0] = VAR_3->peer->ifindex;
}
