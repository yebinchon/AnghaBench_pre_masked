
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u16 ;
struct sk_buff {scalar_t__ data; } ;
struct l2_fhdr {int dummy; } ;
struct bnx2_sw_bd {struct l2_fhdr* desc; struct sk_buff* skb; } ;
struct bnx2_rx_ring_info {int rx_prod_bseq; struct bnx2_rx_bd** rx_desc_ring; struct bnx2_sw_bd* rx_buf_ring; } ;
struct bnx2_rx_bd {int rx_bd_haddr_hi; int rx_bd_haddr_lo; } ;
struct bnx2 {int rx_buf_use_size; TYPE_1__* pdev; int rx_buf_size; int dev; } ;
typedef int gfp_t ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int *,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (struct bnx2_sw_bd*,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct sk_buff*,int) ;
 scalar_t__ FUNC_8 (unsigned long) ;

__attribute__((used)) static inline int
FUNC_9(struct bnx2 *VAR_4, struct bnx2_rx_ring_info *VAR_5, u16 VAR_6, gfp_t VAR_7)
{
 struct sk_buff *VAR_8;
 struct bnx2_sw_bd *VAR_9 = &VAR_5->rx_buf_ring[VAR_6];
 dma_addr_t VAR_10;
 struct bnx2_rx_bd *VAR_11 =
  &VAR_5->rx_desc_ring[FUNC_1(VAR_6)][FUNC_0(VAR_6)];
 unsigned long VAR_12;

 VAR_8 = FUNC_2(VAR_4->dev, VAR_4->rx_buf_size, VAR_7);
 if (VAR_8 == ((void*)0)) {
  return -VAR_2;
 }

 if (FUNC_8((VAR_12 = (unsigned long) VAR_8->data & (VAR_0 - 1))))
  FUNC_7(VAR_8, VAR_0 - VAR_12);

 VAR_10 = FUNC_4(&VAR_4->pdev->dev, VAR_8->data, VAR_4->rx_buf_use_size,
     VAR_3);
 if (FUNC_5(&VAR_4->pdev->dev, VAR_10)) {
  FUNC_3(VAR_8);
  return -VAR_1;
 }

 VAR_9->skb = VAR_8;
 VAR_9->desc = (struct l2_fhdr *) VAR_8->data;
 FUNC_6(VAR_9, VAR_10, VAR_10);

 VAR_11->rx_bd_haddr_hi = (u64) VAR_10 >> 32;
 VAR_11->rx_bd_haddr_lo = (u64) VAR_10 & 0xffffffff;

 VAR_5->rx_prod_bseq += VAR_4->rx_buf_use_size;

 return 0;
}
