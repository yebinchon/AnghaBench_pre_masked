
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int next2fill; } ;
struct TYPE_5__ {struct Vmxnet3_TxDataDesc* base; } ;
struct TYPE_4__ {int oversized_hdr; } ;
struct vmxnet3_tx_queue {TYPE_3__ tx_ring; TYPE_2__ data_ring; TYPE_1__ stats; } ;
struct vmxnet3_tx_ctx {unsigned int eth_ip_hdr_size; int l4_hdr_size; unsigned int copy_size; scalar_t__ ipv4; scalar_t__ mss; } ;
struct vmxnet3_adapter {int netdev; } ;
struct udphdr {int dummy; } ;
struct sk_buff {scalar_t__ ip_summed; int data; int len; } ;
struct iphdr {scalar_t__ protocol; } ;
struct Vmxnet3_TxDataDesc {int data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 struct iphdr* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,unsigned int) ;
 void* FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (int ,char*,unsigned int,int) ;
 int FUNC_4 (struct sk_buff*,unsigned int) ;
 unsigned int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 unsigned int FUNC_7 (struct sk_buff*) ;
 void* FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int
FUNC_10(struct sk_buff *VAR_4, struct vmxnet3_tx_queue *VAR_5,
      struct vmxnet3_tx_ctx *VAR_6,
      struct vmxnet3_adapter *VAR_7)
{
 struct Vmxnet3_TxDataDesc *VAR_8;

 if (VAR_6->mss) {
  VAR_6->eth_ip_hdr_size = FUNC_7(VAR_4);
  VAR_6->l4_hdr_size = FUNC_8(VAR_4);
  VAR_6->copy_size = VAR_6->eth_ip_hdr_size + VAR_6->l4_hdr_size;
 } else {
  if (VAR_4->ip_summed == VAR_0) {
   VAR_6->eth_ip_hdr_size = FUNC_5(VAR_4);

   if (VAR_6->ipv4) {
    const struct iphdr *VAR_9 = FUNC_0(VAR_4);

    if (VAR_9->protocol == VAR_1)
     VAR_6->l4_hdr_size = FUNC_8(VAR_4);
    else if (VAR_9->protocol == VAR_2)
     VAR_6->l4_hdr_size =
       sizeof(struct udphdr);
    else
     VAR_6->l4_hdr_size = 0;
   } else {

    VAR_6->l4_hdr_size = 0;
   }
   VAR_6->copy_size = FUNC_2(VAR_6->eth_ip_hdr_size +
      VAR_6->l4_hdr_size, VAR_4->len);
  } else {
   VAR_6->eth_ip_hdr_size = 0;
   VAR_6->l4_hdr_size = 0;

   VAR_6->copy_size = FUNC_2((unsigned int)VAR_3
          , FUNC_6(VAR_4));
  }


  if (FUNC_9(!FUNC_4(VAR_4, VAR_6->copy_size)))
   goto err;
 }

 if (FUNC_9(VAR_6->copy_size > VAR_3)) {
  VAR_5->stats.oversized_hdr++;
  VAR_6->copy_size = 0;
  return 0;
 }

 VAR_8 = VAR_5->data_ring.base + VAR_5->tx_ring.next2fill;

 FUNC_1(VAR_8->data, VAR_4->data, VAR_6->copy_size);
 FUNC_3(VAR_7->netdev,
  "copy %u bytes to dataRing[%u]\n",
  VAR_6->copy_size, VAR_5->tx_ring.next2fill);
 return 1;

err:
 return -1;
}
