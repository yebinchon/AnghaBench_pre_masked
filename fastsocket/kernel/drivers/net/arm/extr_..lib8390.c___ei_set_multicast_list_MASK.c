
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ei_device {int page_lock; } ;


 int do_set_multicast_list (struct net_device*) ;
 scalar_t__ netdev_priv (struct net_device*) ;
 int spin_lock_irqsave (int *,unsigned long) ;
 int spin_unlock_irqrestore (int *,unsigned long) ;

__attribute__((used)) static void __ei_set_multicast_list(struct net_device *dev)
{
 unsigned long flags;
 struct ei_device *ei_local = (struct ei_device*)netdev_priv(dev);

 spin_lock_irqsave(&ei_local->page_lock, flags);
 do_set_multicast_list(dev);
 spin_unlock_irqrestore(&ei_local->page_lock, flags);
}
