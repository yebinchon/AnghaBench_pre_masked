
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct sk_buff {unsigned int len; unsigned int tail; unsigned int data_len; int truesize; } ;
struct bnx2_sw_pg {int * page; } ;
struct bnx2_rx_ring_info {size_t rx_pg_cons; size_t rx_pg_prod; struct bnx2_sw_pg* rx_pg_ring; } ;
struct bnx2 {TYPE_1__* pdev; int rx_buf_use_size; } ;
struct TYPE_5__ {unsigned int size; } ;
typedef TYPE_2__ skb_frag_t ;
typedef int dma_addr_t ;
struct TYPE_6__ {TYPE_2__* frags; } ;
struct TYPE_4__ {int dev; } ;


 size_t FUNC_0 (size_t) ;
 int VAR_0 ;
 size_t FUNC_1 (size_t) ;
 int VAR_1 ;
 int FUNC_2 (unsigned int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct bnx2*,struct bnx2_rx_ring_info*,size_t,int ) ;
 int FUNC_4 (struct bnx2*,struct bnx2_rx_ring_info*,size_t,int ) ;
 int FUNC_5 (struct bnx2*,struct bnx2_rx_ring_info*,struct sk_buff*,size_t,size_t) ;
 int FUNC_6 (struct bnx2*,struct bnx2_rx_ring_info*,struct sk_buff*,unsigned int) ;
 int FUNC_7 (int *,int ,scalar_t__,int ) ;
 int FUNC_8 (int *,int ,int ,int ) ;
 int VAR_5 ;
 unsigned int FUNC_9 (unsigned int,unsigned int) ;
 int FUNC_10 (struct bnx2_sw_pg*,int ) ;
 int FUNC_11 (struct sk_buff*,unsigned int,int *,int ,unsigned int) ;
 int FUNC_12 (struct sk_buff*,unsigned int) ;
 int FUNC_13 (struct sk_buff*,int ) ;
 TYPE_3__* FUNC_14 (struct sk_buff*) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static int
FUNC_16(struct bnx2 *VAR_6, struct bnx2_rx_ring_info *VAR_7, struct sk_buff *VAR_8,
     unsigned int VAR_9, unsigned int VAR_10, dma_addr_t VAR_11,
     u32 VAR_12)
{
 int VAR_13;
 u16 VAR_14 = VAR_12 & 0xffff;

 VAR_13 = FUNC_4(VAR_6, VAR_7, VAR_14, VAR_1);
 if (FUNC_15(VAR_13)) {
  FUNC_5(VAR_6, VAR_7, VAR_8, (u16) (VAR_12 >> 16), VAR_14);
  if (VAR_10) {
   unsigned int VAR_15 = VAR_9 + 4;
   int VAR_16 = FUNC_2(VAR_15 - VAR_10) >> VAR_2;

   FUNC_6(VAR_6, VAR_7, ((void*)0), VAR_16);
  }
  return VAR_13;
 }

 FUNC_13(VAR_8, VAR_0);
 FUNC_8(&VAR_6->pdev->dev, VAR_11, VAR_6->rx_buf_use_size,
    VAR_4);

 if (VAR_10 == 0) {
  FUNC_12(VAR_8, VAR_9);
  return 0;
 } else {
  unsigned int VAR_17, VAR_18, VAR_19, VAR_20;
  struct bnx2_sw_pg *VAR_21;
  u16 VAR_22 = VAR_7->rx_pg_cons;
  u16 VAR_23 = VAR_7->rx_pg_prod;

  VAR_19 = VAR_9 + 4 - VAR_10;
  VAR_20 = FUNC_2(VAR_19) >> VAR_2;
  FUNC_12(VAR_8, VAR_10);

  for (VAR_17 = 0; VAR_17 < VAR_20; VAR_17++) {
   dma_addr_t VAR_24;

   VAR_18 = FUNC_9(VAR_19, (unsigned int) VAR_3);
   if (FUNC_15(VAR_18 <= 4)) {
    unsigned int VAR_25 = 4 - VAR_18;

    VAR_7->rx_pg_cons = VAR_22;
    VAR_7->rx_pg_prod = VAR_23;
    FUNC_6(VAR_6, VAR_7, ((void*)0),
       VAR_20 - VAR_17);
    VAR_8->len -= VAR_25;
    if (VAR_17 == 0) {
     VAR_8->tail -= VAR_25;
    } else {
     skb_frag_t *VAR_26 =
      &FUNC_14(VAR_8)->frags[VAR_17 - 1];
     VAR_26->size -= VAR_25;
     VAR_8->data_len -= VAR_25;
    }
    return 0;
   }
   VAR_21 = &VAR_7->rx_pg_ring[VAR_22];




   VAR_24 = FUNC_10(VAR_21, VAR_5);
   if (VAR_17 == VAR_20 - 1)
    VAR_18 -= 4;

   FUNC_11(VAR_8, VAR_17, VAR_21->page, 0, VAR_18);
   VAR_21->page = ((void*)0);

   VAR_13 = FUNC_3(VAR_6, VAR_7,
       FUNC_1(VAR_23),
       VAR_1);
   if (FUNC_15(VAR_13)) {
    VAR_7->rx_pg_cons = VAR_22;
    VAR_7->rx_pg_prod = VAR_23;
    FUNC_6(VAR_6, VAR_7, VAR_8,
       VAR_20 - VAR_17);
    return VAR_13;
   }

   FUNC_7(&VAR_6->pdev->dev, VAR_24,
           VAR_3, VAR_4);

   VAR_19 -= VAR_18;
   VAR_8->data_len += VAR_18;
   VAR_8->truesize += VAR_3;
   VAR_8->len += VAR_18;

   VAR_23 = FUNC_0(VAR_23);
   VAR_22 = FUNC_1(FUNC_0(VAR_22));
  }
  VAR_7->rx_pg_prod = VAR_23;
  VAR_7->rx_pg_cons = VAR_22;
 }
 return 0;
}
