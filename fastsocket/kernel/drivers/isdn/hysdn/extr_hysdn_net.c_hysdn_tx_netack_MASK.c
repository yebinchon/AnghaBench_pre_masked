
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct net_local {size_t out_idx; int sk_count; TYPE_5__** skbs; TYPE_1__* dev; } ;
struct net_device {int dummy; } ;
struct TYPE_8__ {struct net_local* netif; } ;
typedef TYPE_3__ hysdn_card ;
struct TYPE_9__ {scalar_t__ len; } ;
struct TYPE_7__ {int tx_bytes; int tx_packets; } ;
struct TYPE_6__ {TYPE_2__ stats; } ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (struct net_device*) ;

void
FUNC_2(hysdn_card * VAR_1)
{
 struct net_local *VAR_2 = VAR_1->netif;

 if (!VAR_2)
  return;


 if (!VAR_2->sk_count)
  return;

 VAR_2->dev->stats.tx_packets++;
 VAR_2->dev->stats.tx_bytes += VAR_2->skbs[VAR_2->out_idx]->len;

 FUNC_0(VAR_2->skbs[VAR_2->out_idx++]);
 if (VAR_2->out_idx >= VAR_0)
  VAR_2->out_idx = 0;

 if (VAR_2->sk_count-- == VAR_0)
  FUNC_1((struct net_device *) VAR_2);
}
