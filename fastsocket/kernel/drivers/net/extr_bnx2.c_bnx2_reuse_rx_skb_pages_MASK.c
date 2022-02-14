
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct skb_shared_info {size_t nr_frags; TYPE_1__* frags; } ;
struct sk_buff {int dummy; } ;
struct page {int dummy; } ;
struct bnx2_sw_pg {struct page* page; } ;
struct bnx2_rx_ring_info {size_t rx_pg_cons; size_t rx_pg_prod; struct bnx2_rx_bd** rx_pg_desc_ring; struct bnx2_sw_pg* rx_pg_ring; } ;
struct bnx2_rx_bd {int rx_bd_haddr_lo; int rx_bd_haddr_hi; } ;
struct bnx2 {int dummy; } ;
struct TYPE_2__ {struct page* page; } ;


 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;
 size_t FUNC_2 (size_t) ;
 size_t FUNC_3 (size_t) ;
 int FUNC_4 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_5 (struct bnx2_sw_pg*,int ) ;
 int FUNC_6 (struct bnx2_sw_pg*,int ,int ) ;
 struct skb_shared_info* FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static void
FUNC_8(struct bnx2 *VAR_1, struct bnx2_rx_ring_info *VAR_2,
   struct sk_buff *VAR_3, int VAR_4)
{
 struct bnx2_sw_pg *VAR_5, *VAR_6;
 struct bnx2_rx_bd *VAR_7, *VAR_8;
 int VAR_9;
 u16 VAR_10, VAR_11;
 u16 VAR_12 = VAR_2->rx_pg_cons;

 VAR_5 = &VAR_2->rx_pg_ring[VAR_12];





 if (VAR_3) {
  struct page *VAR_13;
  struct skb_shared_info *VAR_14;

  VAR_14 = FUNC_7(VAR_3);
  VAR_14->nr_frags--;
  VAR_13 = VAR_14->frags[VAR_14->nr_frags].page;
  VAR_14->frags[VAR_14->nr_frags].page = ((void*)0);

  VAR_5->page = VAR_13;
  FUNC_4(VAR_3);
 }

 VAR_10 = VAR_2->rx_pg_prod;

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_11 = FUNC_2(VAR_10);

  VAR_6 = &VAR_2->rx_pg_ring[VAR_11];
  VAR_5 = &VAR_2->rx_pg_ring[VAR_12];
  VAR_7 = &VAR_2->rx_pg_desc_ring[FUNC_3(VAR_12)]
      [FUNC_1(VAR_12)];
  VAR_8 = &VAR_2->rx_pg_desc_ring[FUNC_3(VAR_11)]
      [FUNC_1(VAR_11)];

  if (VAR_11 != VAR_12) {
   VAR_6->page = VAR_5->page;
   VAR_5->page = ((void*)0);
   FUNC_6(VAR_6, VAR_0,
    FUNC_5(VAR_5, VAR_0));

   VAR_8->rx_bd_haddr_hi = VAR_7->rx_bd_haddr_hi;
   VAR_8->rx_bd_haddr_lo = VAR_7->rx_bd_haddr_lo;

  }
  VAR_12 = FUNC_2(FUNC_0(VAR_12));
  VAR_10 = FUNC_0(VAR_10);
 }
 VAR_2->rx_pg_prod = VAR_10;
 VAR_2->rx_pg_cons = VAR_12;
}
