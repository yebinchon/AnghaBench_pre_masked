
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct skb_frag_struct {scalar_t__ size; int page_offset; int page; } ;
struct sk_buff {int ip_summed; int truesize; int data_len; int len; } ;
struct napi_struct {int dev; } ;
struct rx_ring {struct napi_struct napi; int cq_id; int rx_bytes; int rx_packets; int rx_dropped; } ;
struct ql_adapter {int vlgrp; int ndev; } ;
struct ib_mac_iocb_rsp {int flags2; } ;
struct TYPE_4__ {int offset; int page; int va; } ;
struct TYPE_5__ {TYPE_1__ pg_chunk; } ;
struct bq_desc {TYPE_2__ p; } ;
struct TYPE_6__ {int nr_frags; struct skb_frag_struct* frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (struct napi_struct*) ;
 int FUNC_1 (struct napi_struct*) ;
 int FUNC_2 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ql_adapter*,int,struct rx_ring*) ;
 struct bq_desc* FUNC_6 (struct ql_adapter*,struct rx_ring*) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 TYPE_3__* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct napi_struct*,int ,int) ;

__attribute__((used)) static void FUNC_10(struct ql_adapter *VAR_3,
     struct rx_ring *VAR_4,
     struct ib_mac_iocb_rsp *VAR_5,
     u32 VAR_6,
     u16 VAR_7)
{
 struct sk_buff *VAR_8;
 struct bq_desc *VAR_9 = FUNC_6(VAR_3, VAR_4);
 struct skb_frag_struct *VAR_10;
 int VAR_11;
 struct napi_struct *VAR_12 = &VAR_4->napi;


 if (VAR_5->flags2 & VAR_1) {
  FUNC_5(VAR_3, VAR_5->flags2, VAR_4);
  FUNC_4(VAR_9->p.pg_chunk.page);
  return;
 }
 VAR_12->dev = VAR_3->ndev;

 VAR_8 = FUNC_0(VAR_12);
 if (!VAR_8) {
  FUNC_2(VAR_3, VAR_2, VAR_3->ndev,
     "Couldn't get an skb, exiting.\n");
  VAR_4->rx_dropped++;
  FUNC_4(VAR_9->p.pg_chunk.page);
  return;
 }
 FUNC_3(VAR_9->p.pg_chunk.va);
 VAR_10 = FUNC_8(VAR_8)->frags;
 VAR_11 = FUNC_8(VAR_8)->nr_frags;
 VAR_10 += VAR_11;
 VAR_10->page = VAR_9->p.pg_chunk.page;
 VAR_10->page_offset = VAR_9->p.pg_chunk.offset;
 VAR_10->size = VAR_6;

 VAR_8->len += VAR_6;
 VAR_8->data_len += VAR_6;
 VAR_8->truesize += VAR_6;
 FUNC_8(VAR_8)->nr_frags++;

 VAR_4->rx_packets++;
 VAR_4->rx_bytes += VAR_6;
 VAR_8->ip_summed = VAR_0;
 FUNC_7(VAR_8, VAR_4->cq_id);
 if (VAR_7 != 0xffff)
  FUNC_9(&VAR_4->napi, VAR_3->vlgrp, VAR_7);
 else
  FUNC_1(VAR_12);
}
