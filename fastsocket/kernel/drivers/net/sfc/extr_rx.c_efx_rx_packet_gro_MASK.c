
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {unsigned int truesize; int len; int data_len; int ip_summed; int rxhash; } ;
struct napi_struct {int dummy; } ;
struct efx_rx_buffer {int flags; int len; int * page; int page_offset; } ;
struct efx_nic {unsigned int rx_buffer_truesize; TYPE_1__* net_dev; } ;
struct TYPE_6__ {int core_index; } ;
struct efx_channel {int irq_mod_score; TYPE_3__ rx_queue; struct efx_nic* efx; struct napi_struct napi_str; } ;
typedef scalar_t__ gro_result_t ;
struct TYPE_5__ {unsigned int nr_frags; } ;
struct TYPE_4__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 struct efx_rx_buffer* FUNC_1 (TYPE_3__*,struct efx_rx_buffer*) ;
 struct sk_buff* FUNC_2 (struct napi_struct*) ;
 scalar_t__ FUNC_3 (struct napi_struct*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sk_buff*,unsigned int,int *,int ,int ) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 TYPE_2__* FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(struct efx_channel *VAR_5, struct efx_rx_buffer *VAR_6,
    unsigned int VAR_7, u8 *VAR_8)
{
 struct napi_struct *VAR_9 = &VAR_5->napi_str;
 gro_result_t VAR_10;
 struct efx_nic *VAR_11 = VAR_5->efx;
 struct sk_buff *VAR_12;

 VAR_12 = FUNC_2(VAR_9);
 if (FUNC_8(!VAR_12)) {
  while (VAR_7--) {
   FUNC_4(VAR_6->page);
   VAR_6->page = ((void*)0);
   VAR_6 = FUNC_1(&VAR_5->rx_queue, VAR_6);
  }
  return;
 }

 if (VAR_11->net_dev->features & VAR_4)
  VAR_12->rxhash = FUNC_0(VAR_8);
 VAR_12->ip_summed = ((VAR_6->flags & VAR_2) ?
     VAR_1 : VAR_0);

 for (;;) {
  FUNC_5(VAR_12, FUNC_7(VAR_12)->nr_frags,
       VAR_6->page, VAR_6->page_offset,
       VAR_6->len);
  VAR_6->page = ((void*)0);
  VAR_12->len += VAR_6->len;
  if (FUNC_7(VAR_12)->nr_frags == VAR_7)
   break;

  VAR_6 = FUNC_1(&VAR_5->rx_queue, VAR_6);
 }

 VAR_12->data_len = VAR_12->len;
 VAR_12->truesize += VAR_7 * VAR_11->rx_buffer_truesize;

 FUNC_6(VAR_12, VAR_5->rx_queue.core_index);

 VAR_10 = FUNC_3(VAR_9);
 if (VAR_10 != VAR_3)
  VAR_5->irq_mod_score += 2;
}
