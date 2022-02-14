
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev_addr; int flags; scalar_t__ tx_queue_len; int destructor; int * netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_4)
{
 FUNC_0(VAR_4);


 VAR_4->netdev_ops = &VAR_2;
 VAR_4->destructor = VAR_3;


 VAR_4->tx_queue_len = 0;
 VAR_4->flags |= VAR_1;
 VAR_4->flags &= ~VAR_0;
 FUNC_1(VAR_4->dev_addr);
}
