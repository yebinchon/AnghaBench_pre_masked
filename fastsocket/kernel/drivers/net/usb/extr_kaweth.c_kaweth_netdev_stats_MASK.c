
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int dummy; } ;
struct net_device {int dummy; } ;
struct kaweth_device {struct net_device_stats stats; } ;


 struct kaweth_device* FUNC_0 (struct net_device*) ;

__attribute__((used)) static struct net_device_stats *FUNC_1(struct net_device *VAR_0)
{
 struct kaweth_device *VAR_1 = FUNC_0(VAR_0);
 return &VAR_1->stats;
}
