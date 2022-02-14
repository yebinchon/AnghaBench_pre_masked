
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;
struct rx_header {scalar_t__ flags; scalar_t__ len; } ;
struct ring_info {struct sk_buff* skb; scalar_t__ mapping; } ;
struct dma_desc {void* addr; void* ctrl; } ;
struct b44 {int force_copybreak; int flags; int rx_ring_dma; TYPE_1__* sdev; int dma_offset; struct dma_desc* rx_ring; int dev; struct ring_info* rx_buffers; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {int dma_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct sk_buff* FUNC_1 (int ,int,int) ;
 int FUNC_2 (TYPE_1__*,int ,int,int ) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,int,int ) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__,int,int ) ;
 struct sk_buff* FUNC_8 (int ,int) ;

__attribute__((used)) static int FUNC_9(struct b44 *VAR_10, int VAR_11, u32 VAR_12)
{
 struct dma_desc *VAR_13;
 struct ring_info *VAR_14, *VAR_15;
 struct rx_header *VAR_16;
 struct sk_buff *VAR_17;
 dma_addr_t VAR_18;
 int VAR_19;
 u32 VAR_20;

 VAR_14 = ((void*)0);
 if (VAR_11 >= 0)
  VAR_14 = &VAR_10->rx_buffers[VAR_11];
 VAR_19 = VAR_12 & (VAR_1 - 1);
 VAR_15 = &VAR_10->rx_buffers[VAR_19];
 VAR_17 = FUNC_8(VAR_10->dev, VAR_9);
 if (VAR_17 == ((void*)0))
  return -VAR_6;

 VAR_18 = FUNC_5(VAR_10->sdev->dma_dev, VAR_17->data,
     VAR_9,
     VAR_5);



 if (FUNC_6(VAR_10->sdev->dma_dev, VAR_18) ||
  VAR_18 + VAR_9 > FUNC_0(30)) {

  if (!FUNC_6(VAR_10->sdev->dma_dev, VAR_18))
   FUNC_7(VAR_10->sdev->dma_dev, VAR_18,
          VAR_9, VAR_5);
  FUNC_4(VAR_17);
  VAR_17 = FUNC_1(VAR_10->dev, VAR_9, VAR_7|VAR_8);
  if (VAR_17 == ((void*)0))
   return -VAR_6;
  VAR_18 = FUNC_5(VAR_10->sdev->dma_dev, VAR_17->data,
      VAR_9,
      VAR_5);
  if (FUNC_6(VAR_10->sdev->dma_dev, VAR_18) ||
      VAR_18 + VAR_9 > FUNC_0(30)) {
   if (!FUNC_6(VAR_10->sdev->dma_dev, VAR_18))
    FUNC_7(VAR_10->sdev->dma_dev, VAR_18, VAR_9,VAR_5);
   FUNC_4(VAR_17);
   return -VAR_6;
  }
  VAR_10->force_copybreak = 1;
 }

 VAR_16 = (struct rx_header *) VAR_17->data;

 VAR_16->len = 0;
 VAR_16->flags = 0;

 VAR_15->skb = VAR_17;
 VAR_15->mapping = VAR_18;

 if (VAR_14 != ((void*)0))
  VAR_14->skb = ((void*)0);

 VAR_20 = (VAR_3 & VAR_9);
 if (VAR_19 == (VAR_1 - 1))
  VAR_20 |= VAR_2;

 VAR_13 = &VAR_10->rx_ring[VAR_19];
 VAR_13->ctrl = FUNC_3(VAR_20);
 VAR_13->addr = FUNC_3((u32) VAR_18 + VAR_10->dma_offset);

 if (VAR_10->flags & VAR_0)
  FUNC_2(VAR_10->sdev, VAR_10->rx_ring_dma,
                       VAR_19 * sizeof(*VAR_13),
                       VAR_4);

 return VAR_9;
}
