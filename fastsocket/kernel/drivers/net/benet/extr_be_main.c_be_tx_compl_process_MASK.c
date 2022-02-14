
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct be_queue_info {size_t tail; } ;
struct be_tx_obj {struct sk_buff** sent_skb_list; struct be_queue_info q; } ;
struct be_eth_wrb {int dummy; } ;
struct be_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int BUG_ON (int) ;
 int kfree_skb (struct sk_buff*) ;
 int queue_tail_inc (struct be_queue_info*) ;
 struct be_eth_wrb* queue_tail_node (struct be_queue_info*) ;
 scalar_t__ skb_headlen (struct sk_buff*) ;
 int unmap_tx_frag (int *,struct be_eth_wrb*,int) ;

__attribute__((used)) static u16 be_tx_compl_process(struct be_adapter *adapter,
  struct be_tx_obj *txo, u16 last_index)
{
 struct be_queue_info *txq = &txo->q;
 struct be_eth_wrb *wrb;
 struct sk_buff **sent_skbs = txo->sent_skb_list;
 struct sk_buff *sent_skb;
 u16 cur_index, num_wrbs = 1;
 bool unmap_skb_hdr = 1;

 sent_skb = sent_skbs[txq->tail];
 BUG_ON(!sent_skb);
 sent_skbs[txq->tail] = ((void*)0);


 queue_tail_inc(txq);

 do {
  cur_index = txq->tail;
  wrb = queue_tail_node(txq);
  unmap_tx_frag(&adapter->pdev->dev, wrb,
         (unmap_skb_hdr && skb_headlen(sent_skb)));
  unmap_skb_hdr = 0;

  num_wrbs++;
  queue_tail_inc(txq);
 } while (cur_index != last_index);

 kfree_skb(sent_skb);
 return num_wrbs;
}
