
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ring_info {scalar_t__ mapping; TYPE_2__* skb; } ;
struct netdrv_private {int pci_dev; struct ring_info* tx_info; int dirty_tx; int cur_tx; } ;
struct TYPE_3__ {int tx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;
struct TYPE_4__ {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 struct netdrv_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_4 (struct net_device *VAR_2)
{
 int VAR_3;
 struct netdrv_private *VAR_4 = FUNC_2(VAR_2);

 FUNC_0 (&VAR_4->cur_tx, 0);
 FUNC_0 (&VAR_4->dirty_tx, 0);


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct ring_info *VAR_5 = &VAR_4->tx_info[VAR_3];
  if (VAR_5->mapping != 0) {
   FUNC_3 (VAR_4->pci_dev, VAR_5->mapping,
       VAR_5->skb->len, VAR_1);
   VAR_5->mapping = 0;
  }
  if (VAR_5->skb) {
   FUNC_1 (VAR_5->skb);
   VAR_5->skb = ((void*)0);
   VAR_2->stats.tx_dropped++;
  }
 }
}
