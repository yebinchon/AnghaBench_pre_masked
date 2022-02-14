
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcnet32_private {int rx_ring_size; scalar_t__* rx_dma_addr; int ** rx_skbuff; int pci_dev; TYPE_1__* rx_ring; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct pcnet32_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,scalar_t__,int ,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2)
{
 struct pcnet32_private *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_3->rx_ring_size; VAR_4++) {
  VAR_3->rx_ring[VAR_4].status = 0;
  FUNC_3();
  if (VAR_3->rx_skbuff[VAR_4]) {
   FUNC_2(VAR_3->pci_dev, VAR_3->rx_dma_addr[VAR_4],
      VAR_1, VAR_0);
   FUNC_0(VAR_3->rx_skbuff[VAR_4]);
  }
  VAR_3->rx_skbuff[VAR_4] = ((void*)0);
  VAR_3->rx_dma_addr[VAR_4] = 0;
 }
}
