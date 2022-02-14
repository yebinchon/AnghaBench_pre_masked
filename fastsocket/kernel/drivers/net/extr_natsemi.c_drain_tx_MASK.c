
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx_dropped; } ;
struct netdev_private {TYPE_2__** tx_skbuff; TYPE_1__ stats; int * tx_dma; int pci_dev; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 struct netdev_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2)
{
 struct netdev_private *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_3->tx_skbuff[VAR_4]) {
   FUNC_2(VAR_3->pci_dev,
    VAR_3->tx_dma[VAR_4], VAR_3->tx_skbuff[VAR_4]->len,
    VAR_0);
   FUNC_0(VAR_3->tx_skbuff[VAR_4]);
   VAR_3->stats.tx_dropped++;
  }
  VAR_3->tx_skbuff[VAR_4] = ((void*)0);
 }
}
