
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ring_info {TYPE_2__* skb; int mapping; } ;
struct b44 {TYPE_1__* sdev; struct ring_info* tx_buffers; struct ring_info* rx_buffers; } ;
struct TYPE_4__ {int len; } ;
struct TYPE_3__ {int dma_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct b44 *VAR_5)
{
 struct ring_info *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_6 = &VAR_5->rx_buffers[VAR_7];

  if (VAR_6->skb == ((void*)0))
   continue;
  FUNC_1(VAR_5->sdev->dma_dev, VAR_6->mapping, VAR_4,
     VAR_2);
  FUNC_0(VAR_6->skb);
  VAR_6->skb = ((void*)0);
 }


 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_6 = &VAR_5->tx_buffers[VAR_7];

  if (VAR_6->skb == ((void*)0))
   continue;
  FUNC_1(VAR_5->sdev->dma_dev, VAR_6->mapping, VAR_6->skb->len,
     VAR_3);
  FUNC_0(VAR_6->skb);
  VAR_6->skb = ((void*)0);
 }
}
