
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int dummy; } ;
struct net_device {int dummy; } ;
struct bdx_priv {struct net_device_stats net_stats; } ;


 struct bdx_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static struct net_device_stats *FUNC_1(struct net_device *VAR_0)
{
 struct bdx_priv *VAR_1 = FUNC_0(VAR_0);
 struct net_device_stats *VAR_2 = &VAR_1->net_stats;
 return VAR_2;
}
