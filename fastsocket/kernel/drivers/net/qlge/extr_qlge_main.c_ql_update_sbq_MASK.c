
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct rx_ring {size_t sbq_clean_idx; int sbq_free_cnt; size_t sbq_len; int sbq_prod_idx; int sbq_prod_idx_db_reg; int sbq_buf_size; struct bq_desc* sbq; } ;
struct ql_adapter {int ndev; int pdev; } ;
struct TYPE_5__ {TYPE_2__* skb; } ;
struct bq_desc {size_t index; int * addr; TYPE_1__ p; } ;
struct TYPE_6__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_4 (struct ql_adapter*,int ,int ,int ,char*,size_t) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (struct bq_desc*,int ,int ) ;
 int FUNC_8 (struct bq_desc*,int ,int ) ;
 int VAR_7 ;
 int FUNC_9 (size_t,int ) ;
 int VAR_8 ;
 int FUNC_10 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_11(struct ql_adapter *VAR_9, struct rx_ring *VAR_10)
{
 u32 VAR_11 = VAR_10->sbq_clean_idx;
 u32 VAR_12 = VAR_11;
 struct bq_desc *VAR_13;
 u64 VAR_14;
 int VAR_15;

 while (VAR_10->sbq_free_cnt > 16) {
  for (VAR_15 = (VAR_10->sbq_clean_idx % 16); VAR_15 < 16; VAR_15++) {
   VAR_13 = &VAR_10->sbq[VAR_11];
   FUNC_4(VAR_9, VAR_8, VAR_0, VAR_9->ndev,
         "sbq: try cleaning clean_idx = %d.\n",
         VAR_11);
   if (VAR_13->p.skb == ((void*)0)) {
    FUNC_4(VAR_9, VAR_8, VAR_0,
          VAR_9->ndev,
          "sbq: getting new skb for index %d.\n",
          VAR_13->index);
    VAR_13->p.skb =
        FUNC_2(VAR_9->ndev,
           VAR_3);
    if (VAR_13->p.skb == ((void*)0)) {
     FUNC_3(VAR_9, VAR_7, VAR_9->ndev,
        "Couldn't get an skb.\n");
     VAR_10->sbq_clean_idx = VAR_11;
     return;
    }
    FUNC_10(VAR_13->p.skb, VAR_2);
    VAR_14 = FUNC_6(VAR_9->pdev,
           VAR_13->p.skb->data,
           VAR_10->sbq_buf_size,
           VAR_1);
    if (FUNC_5(VAR_9->pdev, VAR_14)) {
     FUNC_3(VAR_9, VAR_4, VAR_9->ndev,
        "PCI mapping failed.\n");
     VAR_10->sbq_clean_idx = VAR_11;
     FUNC_1(VAR_13->p.skb);
     VAR_13->p.skb = ((void*)0);
     return;
    }
    FUNC_7(VAR_13, VAR_5, VAR_14);
    FUNC_8(VAR_13, VAR_6,
        VAR_10->sbq_buf_size);
    *VAR_13->addr = FUNC_0(VAR_14);
   }

   VAR_11++;
   if (VAR_11 == VAR_10->sbq_len)
    VAR_11 = 0;
  }
  VAR_10->sbq_clean_idx = VAR_11;
  VAR_10->sbq_prod_idx += 16;
  if (VAR_10->sbq_prod_idx == VAR_10->sbq_len)
   VAR_10->sbq_prod_idx = 0;
  VAR_10->sbq_free_cnt -= 16;
 }

 if (VAR_12 != VAR_11) {
  FUNC_4(VAR_9, VAR_8, VAR_0, VAR_9->ndev,
        "sbq: updating prod idx = %d.\n",
        VAR_10->sbq_prod_idx);
  FUNC_9(VAR_10->sbq_prod_idx,
    VAR_10->sbq_prod_idx_db_reg);
 }
}
