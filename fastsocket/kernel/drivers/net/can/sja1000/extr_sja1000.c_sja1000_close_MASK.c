
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1000_priv {int flags; scalar_t__ open_time; } ;
struct net_device {int irq; } ;


 int SJA1000_CUSTOM_IRQ_HANDLER ;
 int close_candev (struct net_device*) ;
 int free_irq (int ,void*) ;
 struct sja1000_priv* netdev_priv (struct net_device*) ;
 int netif_stop_queue (struct net_device*) ;
 int set_reset_mode (struct net_device*) ;

__attribute__((used)) static int sja1000_close(struct net_device *dev)
{
 struct sja1000_priv *priv = netdev_priv(dev);

 netif_stop_queue(dev);
 set_reset_mode(dev);

 if (!(priv->flags & SJA1000_CUSTOM_IRQ_HANDLER))
  free_irq(dev->irq, (void *)dev);

 close_candev(dev);

 priv->open_time = 0;

 return 0;
}
