
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct sw_tx_bd {size_t first_bd; int flags; struct sk_buff* skb; } ;
struct sk_buff {int end; } ;
struct eth_tx_start_bd {int nbd; } ;
struct eth_tx_bd {int nbd; } ;
struct bnx2x_fp_txdata {TYPE_1__* tx_desc_ring; int txq_index; struct sw_tx_bd* tx_buf_ring; } ;
struct bnx2x {TYPE_2__* pdev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct eth_tx_start_bd reg_bd; struct eth_tx_start_bd start_bd; } ;


 int FUNC_0 (struct eth_tx_start_bd*) ;
 int FUNC_1 (struct eth_tx_start_bd*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,int ,size_t,struct sw_tx_bd*,struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_4 (size_t) ;
 size_t FUNC_5 (size_t) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int *,int ,int ,int ) ;
 int FUNC_10 (int *,int ,int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static u16 FUNC_13(struct bnx2x *VAR_4, struct bnx2x_fp_txdata *VAR_5,
        u16 VAR_6)
{
 struct sw_tx_bd *VAR_7 = &VAR_5->tx_buf_ring[VAR_6];
 struct eth_tx_start_bd *VAR_8;
 struct eth_tx_bd *VAR_9;
 struct sk_buff *VAR_10 = VAR_7->skb;
 u16 VAR_11 = FUNC_5(VAR_7->first_bd), VAR_12;
 int VAR_13;


 FUNC_12(&VAR_10->end);

 FUNC_3(VAR_3, "fp[%d]: pkt_idx %d  buff @(%p)->skb %p\n",
    VAR_5->txq_index, VAR_6, VAR_7, VAR_10);


 VAR_8 = &VAR_5->tx_desc_ring[VAR_11].start_bd;
 FUNC_10(&VAR_4->pdev->dev, FUNC_0(VAR_8),
    FUNC_1(VAR_8), VAR_1);

 VAR_13 = FUNC_11(VAR_8->nbd) - 1;






 VAR_12 = VAR_13 + VAR_7->first_bd;


 VAR_11 = FUNC_5(FUNC_4(VAR_11));


 --VAR_13;
 VAR_11 = FUNC_5(FUNC_4(VAR_11));


 if (VAR_7->flags & VAR_0) {
  --VAR_13;
  VAR_11 = FUNC_5(FUNC_4(VAR_11));
 }


 while (VAR_13 > 0) {

  VAR_9 = &VAR_5->tx_desc_ring[VAR_11].reg_bd;
  FUNC_9(&VAR_4->pdev->dev, FUNC_0(VAR_9),
          FUNC_1(VAR_9), VAR_1);
  if (--VAR_13)
   VAR_11 = FUNC_5(FUNC_4(VAR_11));
 }


 FUNC_6(!VAR_10);
 FUNC_8(VAR_10);
 VAR_7->first_bd = 0;
 VAR_7->skb = ((void*)0);

 return VAR_12;
}
