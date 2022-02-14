
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netdev_private {unsigned int rx_buf_sz; int ** rx_skbuff; int * rx_dma; int pci_dev; TYPE_1__* rx_ring; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int addr; scalar_t__ cmd_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 struct netdev_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ,unsigned int,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2)
{
 struct netdev_private *VAR_3 = FUNC_2(VAR_2);
 unsigned int VAR_4 = VAR_3->rx_buf_sz;
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_3->rx_ring[VAR_5].cmd_status = 0;
  VAR_3->rx_ring[VAR_5].addr = FUNC_0(0xBADF00D0);
  if (VAR_3->rx_skbuff[VAR_5]) {
   FUNC_3(VAR_3->pci_dev,
    VAR_3->rx_dma[VAR_5], VAR_4,
    VAR_0);
   FUNC_1(VAR_3->rx_skbuff[VAR_5]);
  }
  VAR_3->rx_skbuff[VAR_5] = ((void*)0);
 }
}
