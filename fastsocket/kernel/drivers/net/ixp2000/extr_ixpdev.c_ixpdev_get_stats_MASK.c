
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int dummy; } ;
struct net_device {struct net_device_stats stats; } ;
struct ixpdev_priv {int channel; } ;


 struct ixpdev_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct net_device_stats*) ;

__attribute__((used)) static struct net_device_stats *FUNC_2(struct net_device *VAR_0)
{
 struct ixpdev_priv *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->channel, &(VAR_0->stats));

 return &(VAR_0->stats);
}
