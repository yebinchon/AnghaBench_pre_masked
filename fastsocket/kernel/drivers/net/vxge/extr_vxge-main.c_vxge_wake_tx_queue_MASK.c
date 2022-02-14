
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxge_fifo {int driver_id; scalar_t__ tx_steering_type; scalar_t__ queue_state; struct net_device* ndev; } ;
struct sk_buff {int dummy; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct netdev_queue* FUNC_0 (struct net_device*,int) ;
 scalar_t__ FUNC_1 (struct netdev_queue*) ;
 int FUNC_2 (struct netdev_queue*) ;

void FUNC_3(struct vxge_fifo *VAR_3, struct sk_buff *VAR_4)
{
 struct net_device *VAR_5 = VAR_3->ndev;

 int VAR_6 = VAR_3->driver_id;
 struct netdev_queue *VAR_7 = ((void*)0);
 if (VAR_3->tx_steering_type == VAR_0) {
  VAR_7 = FUNC_0(VAR_5, VAR_6);
  if (FUNC_1(VAR_7))
   FUNC_2(VAR_7);
 } else {
  VAR_7 = FUNC_0(VAR_5, 0);
  if (VAR_3->queue_state == VAR_2)
   if (FUNC_1(VAR_7)) {
    VAR_3->queue_state = VAR_1;
    FUNC_2(VAR_7);
   }
 }
}
