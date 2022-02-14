
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxge_fifo {scalar_t__ tx_steering_type; int queue_state; int driver_id; struct net_device* ndev; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct netdev_queue* FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct netdev_queue*) ;

void FUNC_2(struct vxge_fifo *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->ndev;

 struct netdev_queue *VAR_4 = ((void*)0);
 if (VAR_2->tx_steering_type == VAR_0)
  VAR_4 = FUNC_0(VAR_3, VAR_2->driver_id);
 else {
  VAR_4 = FUNC_0(VAR_3, 0);
  VAR_2->queue_state = VAR_1;
 }

 FUNC_1(VAR_4);
}
