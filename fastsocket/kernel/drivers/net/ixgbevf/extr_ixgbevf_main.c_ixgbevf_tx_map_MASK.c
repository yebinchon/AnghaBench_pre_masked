
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct skb_frag_struct {scalar_t__ size; } ;
struct sk_buff {unsigned int len; scalar_t__ data; } ;
struct ixgbevf_tx_buffer {unsigned int length; int mapped_as_page; scalar_t__ dma; struct sk_buff* skb; } ;
struct ixgbevf_ring {int next_to_use; int count; struct ixgbevf_tx_buffer* tx_buffer_info; int dev; } ;
struct TYPE_2__ {unsigned int nr_frags; struct skb_frag_struct* frags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,unsigned int,int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct ixgbevf_ring*,struct ixgbevf_tx_buffer*) ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_5 (int ,struct skb_frag_struct*,unsigned int,unsigned int,int ) ;
 unsigned int FUNC_6 (struct sk_buff*) ;
 TYPE_1__* FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_8(struct ixgbevf_ring *VAR_2,
     struct sk_buff *VAR_3, u32 VAR_4)
{
 struct ixgbevf_tx_buffer *VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7 = VAR_3->len;
 unsigned int VAR_8 = 0, VAR_9;
 int VAR_10 = 0;
 unsigned int VAR_11 = FUNC_7(VAR_3)->nr_frags;
 unsigned int VAR_12;
 int VAR_13;

 VAR_13 = VAR_2->next_to_use;

 VAR_6 = FUNC_4(FUNC_6(VAR_3), VAR_7);
 while (VAR_6) {
  VAR_5 = &VAR_2->tx_buffer_info[VAR_13];
  VAR_9 = FUNC_4(VAR_6, (unsigned int)VAR_1);

  VAR_5->length = VAR_9;
  VAR_5->mapped_as_page = 0;
  VAR_5->dma = FUNC_1(VAR_2->dev,
           VAR_3->data + VAR_8,
           VAR_9, VAR_0);
  if (FUNC_2(VAR_2->dev, VAR_5->dma))
   goto dma_error;

  VAR_6 -= VAR_9;
  VAR_7 -= VAR_9;
  VAR_8 += VAR_9;
  VAR_10++;
  VAR_13++;
  if (VAR_13 == VAR_2->count)
   VAR_13 = 0;
 }

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  struct skb_frag_struct *VAR_14;

  VAR_14 = &FUNC_7(VAR_3)->frags[VAR_12];
  VAR_6 = FUNC_4((unsigned int)VAR_14->size, VAR_7);
  VAR_8 = 0;

  while (VAR_6) {
   VAR_5 = &VAR_2->tx_buffer_info[VAR_13];
   VAR_9 = FUNC_4(VAR_6, (unsigned int)VAR_1);

   VAR_5->length = VAR_9;
   VAR_5->dma =
    FUNC_5(VAR_2->dev, VAR_14,
       VAR_8, VAR_9, VAR_0);
   if (FUNC_2(VAR_2->dev,
           VAR_5->dma))
    goto dma_error;
   VAR_5->mapped_as_page = 1;

   VAR_6 -= VAR_9;
   VAR_7 -= VAR_9;
   VAR_8 += VAR_9;
   VAR_10++;
   VAR_13++;
   if (VAR_13 == VAR_2->count)
    VAR_13 = 0;
  }
  if (VAR_7 == 0)
   break;
 }

 if (VAR_13 == 0)
  VAR_13 = VAR_2->count - 1;
 else
  VAR_13 = VAR_13 - 1;
 VAR_2->tx_buffer_info[VAR_13].skb = VAR_3;

 return VAR_10;

dma_error:
 FUNC_0(VAR_2->dev, "TX DMA map failed\n");


 VAR_5->dma = 0;
 VAR_10--;


 while (VAR_10 >= 0) {
  VAR_10--;
  VAR_13--;
  if (VAR_13 < 0)
   VAR_13 += VAR_2->count;
  VAR_5 = &VAR_2->tx_buffer_info[VAR_13];
  FUNC_3(VAR_2, VAR_5);
 }

 return VAR_10;
}
