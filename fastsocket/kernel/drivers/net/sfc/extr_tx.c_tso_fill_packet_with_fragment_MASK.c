
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tso_state {scalar_t__ in_len; scalar_t__ packet_space; scalar_t__ out_len; int dma_addr; scalar_t__ unmap_len; int dma_flags; } ;
struct sk_buff {int dummy; } ;
struct efx_tx_queue {int dummy; } ;
struct efx_tx_buffer {int flags; scalar_t__ unmap_len; struct sk_buff const* skb; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct efx_tx_queue*,int,int,struct efx_tx_buffer**) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct efx_tx_queue *VAR_2,
       const struct sk_buff *VAR_3,
       struct tso_state *VAR_4)
{
 struct efx_tx_buffer *VAR_5;
 int VAR_6;

 if (VAR_4->in_len == 0)
  return;
 if (VAR_4->packet_space == 0)
  return;

 FUNC_0(VAR_4->in_len <= 0);
 FUNC_0(VAR_4->packet_space <= 0);

 VAR_6 = FUNC_2(VAR_4->in_len, VAR_4->packet_space);

 VAR_4->packet_space -= VAR_6;
 VAR_4->out_len -= VAR_6;
 VAR_4->in_len -= VAR_6;

 FUNC_1(VAR_2, VAR_4->dma_addr, VAR_6, &VAR_5);

 if (VAR_4->out_len == 0) {

  VAR_5->skb = VAR_3;
  VAR_5->flags = VAR_1;
 } else if (VAR_4->packet_space != 0) {
  VAR_5->flags = VAR_0;
 }

 if (VAR_4->in_len == 0) {

  VAR_5->unmap_len = VAR_4->unmap_len;
  VAR_5->flags |= VAR_4->dma_flags;
  VAR_4->unmap_len = 0;
 }

 VAR_4->dma_addr += VAR_6;
}
