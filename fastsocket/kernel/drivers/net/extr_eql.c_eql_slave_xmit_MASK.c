
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {int priority; scalar_t__ len; struct net_device* dev; } ;
struct TYPE_7__ {int tx_dropped; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct TYPE_8__ {int bytes_queued; struct net_device* dev; } ;
typedef TYPE_2__ slave_t ;
typedef int netdev_tx_t ;
struct TYPE_10__ {int lock; } ;
struct TYPE_9__ {TYPE_6__ queue; } ;
typedef TYPE_3__ equalizer_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 TYPE_3__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static netdev_tx_t FUNC_6(struct sk_buff *VAR_1, struct net_device *VAR_2)
{
 equalizer_t *VAR_3 = FUNC_3(VAR_2);
 slave_t *VAR_4;

 FUNC_4(&VAR_3->queue.lock);

 VAR_4 = FUNC_0(&VAR_3->queue);
 if (VAR_4) {
  struct net_device *VAR_5 = VAR_4->dev;

  VAR_1->dev = VAR_5;
  VAR_1->priority = 1;
  VAR_4->bytes_queued += VAR_1->len;
  FUNC_2(VAR_1);
  VAR_2->stats.tx_packets++;
 } else {
  VAR_2->stats.tx_dropped++;
  FUNC_1(VAR_1);
 }

 FUNC_5(&VAR_3->queue.lock);

 return VAR_0;
}
