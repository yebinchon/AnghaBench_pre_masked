
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct rx_header {scalar_t__ flags; scalar_t__ len; } ;
struct ring_info {int mapping; TYPE_1__* skb; } ;
struct dma_desc {int addr; int ctrl; } ;
struct b44 {int flags; TYPE_2__* sdev; int rx_ring_dma; struct ring_info* rx_buffers; struct dma_desc* rx_ring; } ;
typedef int __le32 ;
struct TYPE_5__ {int dma_dev; } ;
struct TYPE_4__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,int ,int,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct b44 *VAR_6, int VAR_7, u32 VAR_8)
{
 struct dma_desc *VAR_9, *VAR_10;
 struct ring_info *VAR_11, *VAR_12;
 struct rx_header *VAR_13;
 int VAR_14;
 __le32 VAR_15;

 VAR_14 = VAR_8 & (VAR_1 - 1);
 VAR_10 = &VAR_6->rx_ring[VAR_14];
 VAR_12 = &VAR_6->rx_buffers[VAR_14];
 VAR_9 = &VAR_6->rx_ring[VAR_7];
 VAR_11 = &VAR_6->rx_buffers[VAR_7];

 VAR_12->skb = VAR_11->skb;
 VAR_13 = (struct rx_header *) VAR_11->skb->data;
 VAR_13->len = 0;
 VAR_13->flags = 0;
 VAR_12->mapping = VAR_11->mapping;

 if (VAR_6->flags & VAR_0)
  FUNC_0(VAR_6->sdev, VAR_6->rx_ring_dma,
                    VAR_7 * sizeof(*VAR_9),
                    VAR_3);

 VAR_15 = VAR_9->ctrl;
 if (VAR_14 == (VAR_1 - 1))
  VAR_15 |= FUNC_2(VAR_2);
 else
  VAR_15 &= FUNC_2(~VAR_2);

 VAR_10->ctrl = VAR_15;
 VAR_10->addr = VAR_9->addr;

 VAR_11->skb = ((void*)0);

 if (VAR_6->flags & VAR_0)
  FUNC_1(VAR_6->sdev, VAR_6->rx_ring_dma,
          VAR_14 * sizeof(*VAR_10),
          VAR_3);

 FUNC_3(VAR_6->sdev->dma_dev, VAR_12->mapping,
       VAR_5,
       VAR_4);
}
