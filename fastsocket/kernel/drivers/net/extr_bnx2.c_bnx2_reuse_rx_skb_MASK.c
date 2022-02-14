
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct sk_buff {scalar_t__ data; } ;
struct l2_fhdr {int dummy; } ;
struct bnx2_sw_bd {struct l2_fhdr* desc; struct sk_buff* skb; } ;
struct bnx2_rx_ring_info {struct bnx2_rx_bd** rx_desc_ring; int rx_prod_bseq; struct bnx2_sw_bd* rx_buf_ring; } ;
struct bnx2_rx_bd {int rx_bd_haddr_lo; int rx_bd_haddr_hi; } ;
struct bnx2 {scalar_t__ rx_buf_use_size; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (size_t) ;
 scalar_t__ VAR_1 ;
 size_t FUNC_1 (size_t) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,scalar_t__,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct bnx2_sw_bd*,int ) ;
 int FUNC_4 (struct bnx2_sw_bd*,int ,int ) ;

__attribute__((used)) static inline void
FUNC_5(struct bnx2 *VAR_4, struct bnx2_rx_ring_info *VAR_5,
    struct sk_buff *VAR_6, u16 VAR_7, u16 VAR_8)
{
 struct bnx2_sw_bd *VAR_9, *VAR_10;
 struct bnx2_rx_bd *VAR_11, *VAR_12;

 VAR_9 = &VAR_5->rx_buf_ring[VAR_7];
 VAR_10 = &VAR_5->rx_buf_ring[VAR_8];

 FUNC_2(&VAR_4->pdev->dev,
  FUNC_3(VAR_9, VAR_3),
  VAR_1 + VAR_0, VAR_2);

 VAR_5->rx_prod_bseq += VAR_4->rx_buf_use_size;

 VAR_10->skb = VAR_6;
 VAR_10->desc = (struct l2_fhdr *) VAR_6->data;

 if (VAR_7 == VAR_8)
  return;

 FUNC_4(VAR_10, VAR_3,
   FUNC_3(VAR_9, VAR_3));

 VAR_11 = &VAR_5->rx_desc_ring[FUNC_1(VAR_7)][FUNC_0(VAR_7)];
 VAR_12 = &VAR_5->rx_desc_ring[FUNC_1(VAR_8)][FUNC_0(VAR_8)];
 VAR_12->rx_bd_haddr_hi = VAR_11->rx_bd_haddr_hi;
 VAR_12->rx_bd_haddr_lo = VAR_11->rx_bd_haddr_lo;
}
