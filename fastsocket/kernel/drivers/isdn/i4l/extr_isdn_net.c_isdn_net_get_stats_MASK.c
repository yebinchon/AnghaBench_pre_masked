
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device_stats {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct net_device_stats stats; } ;
typedef TYPE_1__ isdn_net_local ;


 scalar_t__ FUNC_0 (struct net_device*) ;

__attribute__((used)) static struct net_device_stats *
FUNC_1(struct net_device *VAR_0)
{
 isdn_net_local *VAR_1 = (isdn_net_local *) FUNC_0(VAR_0);
 return &VAR_1->stats;
}
