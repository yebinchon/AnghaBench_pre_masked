
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cp_private {int * rx_ring; int * tx_ring; int ring_dma; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cp_private*) ;
 void* FUNC_1 (int *,int ,int *,int ) ;

__attribute__((used)) static int FUNC_2 (struct cp_private *VAR_4)
{
 void *VAR_5;

 VAR_5 = FUNC_1(&VAR_4->pdev->dev, VAR_0,
     &VAR_4->ring_dma, VAR_3);
 if (!VAR_5)
  return -VAR_2;

 VAR_4->rx_ring = VAR_5;
 VAR_4->tx_ring = &VAR_4->rx_ring[VAR_1];

 return FUNC_0(VAR_4);
}
