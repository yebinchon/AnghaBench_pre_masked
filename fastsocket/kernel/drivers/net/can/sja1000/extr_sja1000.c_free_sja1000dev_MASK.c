
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int free_candev (struct net_device*) ;

void free_sja1000dev(struct net_device *dev)
{
 free_candev(dev);
}
