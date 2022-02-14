
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_local {int lock; int timer; int deferred; int immediate; int nibble; int trigger; scalar_t__ port_owner; } ;
struct net_device {int tx_queue_len; int flags; int irq; int * header_ops; int * netdev_ops; int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int,int ) ;
 struct net_local* FUNC_3 (struct net_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct net_device *VAR_10)
{
 struct net_local *VAR_11 = FUNC_3(VAR_10);


 VAR_10->tx_queue_len = 10;
 VAR_10->flags = VAR_2|VAR_1;
 FUNC_2(VAR_10->dev_addr, 0xfc, VAR_0);

 VAR_10->netdev_ops = &VAR_8;
 VAR_10->header_ops = &VAR_6;


 VAR_11->port_owner = 0;


 VAR_11->trigger = VAR_4;
 VAR_11->nibble = VAR_3;


 FUNC_1(&VAR_11->immediate, VAR_5);
 FUNC_0(&VAR_11->deferred, VAR_7);

 if (VAR_10->irq == -1)
  FUNC_0(&VAR_11->timer, VAR_9);

 FUNC_4(&VAR_11->lock);
}
