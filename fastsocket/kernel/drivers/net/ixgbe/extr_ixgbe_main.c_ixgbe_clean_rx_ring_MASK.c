
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct sk_buff {int dummy; } ;
struct ixgbe_rx_buffer {int * page; scalar_t__ dma; struct sk_buff* skb; } ;
struct ixgbe_ring {size_t count; unsigned long size; scalar_t__ next_to_use; scalar_t__ next_to_clean; scalar_t__ next_to_alloc; struct ixgbe_rx_buffer* desc; struct ixgbe_rx_buffer* rx_buffer_info; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int page_released; scalar_t__ dma; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct device*,scalar_t__,int ,int ) ;
 int FUNC_4 (struct ixgbe_ring*) ;
 int FUNC_5 (struct ixgbe_ring*) ;
 int FUNC_6 (struct ixgbe_ring*) ;
 int FUNC_7 (struct ixgbe_rx_buffer*,int ,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct ixgbe_ring *VAR_1)
{
 struct device *VAR_2 = VAR_1->dev;
 unsigned long VAR_3;
 u16 VAR_4;


 if (!VAR_1->rx_buffer_info)
  return;


 for (VAR_4 = 0; VAR_4 < VAR_1->count; VAR_4++) {
  struct ixgbe_rx_buffer *VAR_5;

  VAR_5 = &VAR_1->rx_buffer_info[VAR_4];
  if (VAR_5->skb) {
   struct sk_buff *VAR_6 = VAR_5->skb;
   if (FUNC_0(VAR_6)->page_released) {
    FUNC_3(VAR_2,
            FUNC_0(VAR_6)->dma,
            FUNC_4(VAR_1),
            VAR_0);
    FUNC_0(VAR_6)->page_released = 0;
   }
   FUNC_2(VAR_6);
  }
  VAR_5->skb = ((void*)0);
  if (VAR_5->dma)
   FUNC_3(VAR_2, VAR_5->dma,
           FUNC_6(VAR_1),
           VAR_0);
  VAR_5->dma = 0;
  if (VAR_5->page)
   FUNC_1(VAR_5->page,
         FUNC_5(VAR_1));
  VAR_5->page = ((void*)0);
 }

 VAR_3 = sizeof(struct ixgbe_rx_buffer) * VAR_1->count;
 FUNC_7(VAR_1->rx_buffer_info, 0, VAR_3);


 FUNC_7(VAR_1->desc, 0, VAR_1->size);

 VAR_1->next_to_alloc = 0;
 VAR_1->next_to_clean = 0;
 VAR_1->next_to_use = 0;
}
