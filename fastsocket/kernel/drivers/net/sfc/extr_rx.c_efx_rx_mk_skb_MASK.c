
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; int data_len; unsigned int truesize; int protocol; } ;
struct efx_rx_buffer {int len; int page_offset; int * page; } ;
struct efx_nic {unsigned int rx_buffer_truesize; int net_dev; int rx_buffer_order; } ;
struct efx_channel {int rx_queue; struct efx_nic* efx; } ;
struct TYPE_2__ {unsigned int nr_frags; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct sk_buff*,int) ;
 struct efx_rx_buffer* FUNC_3 (int *,struct efx_rx_buffer*) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (int ,int *,int) ;
 struct sk_buff* FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (struct sk_buff*,unsigned int,int *,int,int) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;
 TYPE_1__* FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static struct sk_buff *FUNC_11(struct efx_channel *VAR_1,
         struct efx_rx_buffer *VAR_2,
         unsigned int VAR_3,
         u8 *VAR_4, int VAR_5)
{
 struct efx_nic *VAR_6 = VAR_1->efx;
 struct sk_buff *VAR_7;


 VAR_7 = FUNC_6(VAR_6->net_dev, VAR_5 + VAR_0);
 if (FUNC_10(VAR_7 == ((void*)0)))
  return ((void*)0);

 FUNC_0(VAR_2->len < VAR_5);

 FUNC_8(VAR_7, VAR_0);
 FUNC_5(FUNC_2(VAR_7, VAR_5), VAR_4, VAR_5);


 if (VAR_2->len > VAR_5) {
  VAR_2->page_offset += VAR_5;
  VAR_2->len -= VAR_5;

  for (;;) {
   FUNC_7(VAR_7, FUNC_9(VAR_7)->nr_frags,
        VAR_2->page, VAR_2->page_offset,
        VAR_2->len);
   VAR_2->page = ((void*)0);
   VAR_7->len += VAR_2->len;
   VAR_7->data_len += VAR_2->len;
   if (FUNC_9(VAR_7)->nr_frags == VAR_3)
    break;

   VAR_2 = FUNC_3(&VAR_1->rx_queue, VAR_2);
  }
 } else {
  FUNC_1(VAR_2->page, VAR_6->rx_buffer_order);
  VAR_2->page = ((void*)0);
  VAR_3 = 0;
 }

 VAR_7->truesize += VAR_3 * VAR_6->rx_buffer_truesize;


 VAR_7->protocol = FUNC_4(VAR_7, VAR_6->net_dev);

 return VAR_7;
}
