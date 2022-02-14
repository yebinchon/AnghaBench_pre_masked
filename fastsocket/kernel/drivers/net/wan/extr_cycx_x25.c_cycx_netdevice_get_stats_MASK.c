
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int dummy; } ;
struct net_device {int dummy; } ;
struct cycx_x25_channel {struct net_device_stats ifstats; } ;


 struct cycx_x25_channel* FUNC_0 (struct net_device*) ;

__attribute__((used)) static struct net_device_stats *FUNC_1(struct net_device *VAR_0)
{
 struct cycx_x25_channel *VAR_1 = FUNC_0(VAR_0);

 return VAR_1 ? &VAR_1->ifstats : ((void*)0);
}
