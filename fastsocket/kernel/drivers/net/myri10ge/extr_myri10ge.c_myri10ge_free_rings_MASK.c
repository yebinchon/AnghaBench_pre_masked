
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct myri10ge_tx_buf {int done; int req; int mask; int * req_list; TYPE_4__* req_bytes; TYPE_4__* info; } ;
struct TYPE_11__ {int cnt; int fill_cnt; int mask; TYPE_4__* shadow; TYPE_4__* info; } ;
struct TYPE_10__ {int cnt; int fill_cnt; int mask; TYPE_4__* shadow; TYPE_4__* info; } ;
struct TYPE_9__ {int tx_dropped; } ;
struct myri10ge_slice_state {struct myri10ge_tx_buf tx; TYPE_3__ rx_small; TYPE_2__ rx_big; TYPE_1__ stats; struct myri10ge_priv* mgp; } ;
struct myri10ge_priv {int pdev; scalar_t__ small_bytes; scalar_t__ big_bytes; } ;
struct TYPE_12__ {struct sk_buff* skb; int page; void* page_offset; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,TYPE_4__*,scalar_t__) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (TYPE_4__*,int,int ) ;
 int FUNC_6 (int ,int ,int,int ) ;
 int FUNC_7 (int ,int ,int,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct myri10ge_slice_state *VAR_4)
{
 struct myri10ge_priv *VAR_5 = VAR_4->mgp;
 struct sk_buff *VAR_6;
 struct myri10ge_tx_buf *VAR_7;
 int VAR_8, VAR_9, VAR_10;


 if (VAR_4->tx.req_list == ((void*)0))
  return;

 for (VAR_8 = VAR_4->rx_big.cnt; VAR_8 < VAR_4->rx_big.fill_cnt; VAR_8++) {
  VAR_10 = VAR_8 & VAR_4->rx_big.mask;
  if (VAR_8 == VAR_4->rx_big.fill_cnt - 1)
   VAR_4->rx_big.info[VAR_10].page_offset = VAR_1;
  FUNC_2(VAR_5->pdev, &VAR_4->rx_big.info[VAR_10],
           VAR_5->big_bytes);
  FUNC_8(VAR_4->rx_big.info[VAR_10].page);
 }

 for (VAR_8 = VAR_4->rx_small.cnt; VAR_8 < VAR_4->rx_small.fill_cnt; VAR_8++) {
  VAR_10 = VAR_8 & VAR_4->rx_small.mask;
  if (VAR_8 == VAR_4->rx_small.fill_cnt - 1)
   VAR_4->rx_small.info[VAR_10].page_offset =
       VAR_1;
  FUNC_2(VAR_5->pdev, &VAR_4->rx_small.info[VAR_10],
           VAR_5->small_bytes + VAR_0);
  FUNC_8(VAR_4->rx_small.info[VAR_10].page);
 }
 VAR_7 = &VAR_4->tx;
 while (VAR_7->done != VAR_7->req) {
  VAR_10 = VAR_7->done & VAR_7->mask;
  VAR_6 = VAR_7->info[VAR_10].skb;


  VAR_7->info[VAR_10].skb = ((void*)0);
  VAR_7->done++;
  VAR_9 = FUNC_4(&VAR_7->info[VAR_10], VAR_9);
  FUNC_5(&VAR_7->info[VAR_10], VAR_9, 0);
  if (VAR_6) {
   VAR_4->stats.tx_dropped++;
   FUNC_0(VAR_6);
   if (VAR_9)
    FUNC_7(VAR_5->pdev,
       FUNC_3(&VAR_7->info[VAR_10],
        VAR_3), VAR_9,
       VAR_2);
  } else {
   if (VAR_9)
    FUNC_6(VAR_5->pdev,
            FUNC_3(&VAR_7->info[VAR_10],
             VAR_3), VAR_9,
            VAR_2);
  }
 }
 FUNC_1(VAR_4->rx_big.info);

 FUNC_1(VAR_4->rx_small.info);

 FUNC_1(VAR_4->tx.info);

 FUNC_1(VAR_4->rx_big.shadow);

 FUNC_1(VAR_4->rx_small.shadow);

 FUNC_1(VAR_4->tx.req_bytes);
 VAR_4->tx.req_bytes = ((void*)0);
 VAR_4->tx.req_list = ((void*)0);
}
