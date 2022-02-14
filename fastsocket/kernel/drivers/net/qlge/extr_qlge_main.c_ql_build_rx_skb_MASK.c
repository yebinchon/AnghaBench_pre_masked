
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; int data_len; int truesize; int data; } ;
struct rx_ring {int lbq_buf_size; } ;
struct ql_adapter {int ndev; int pdev; } ;
struct ib_mac_iocb_rsp {int flags4; int flags3; int flags2; int hdr_len; int data_len; } ;
struct TYPE_3__ {int offset; int page; } ;
struct TYPE_4__ {TYPE_1__ pg_chunk; struct sk_buff* skb; } ;
struct bq_desc {TYPE_2__ p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ,int ,int) ;
 struct sk_buff* FUNC_3 (int ,int) ;
 int FUNC_4 (struct ql_adapter*,int ,int ,int ,char*,...) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (struct bq_desc*,int ) ;
 int FUNC_8 (struct bq_desc*,int ) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ,int ) ;
 int VAR_12 ;
 struct bq_desc* FUNC_11 (struct ql_adapter*,struct rx_ring*) ;
 struct bq_desc* FUNC_12 (struct rx_ring*) ;
 int FUNC_13 (struct sk_buff*,int) ;
 int VAR_13 ;
 int FUNC_14 (struct sk_buff*,int,int ,int,int) ;
 int FUNC_15 (struct sk_buff*,int) ;
 int FUNC_16 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_18(struct ql_adapter *VAR_14,
           struct rx_ring *VAR_15,
           struct ib_mac_iocb_rsp *VAR_16)
{
 struct bq_desc *VAR_17;
 struct bq_desc *VAR_18;
 struct sk_buff *VAR_19 = ((void*)0);
 u32 VAR_20 = FUNC_1(VAR_16->data_len);
       u32 VAR_21 = FUNC_1(VAR_16->hdr_len);




 if (VAR_16->flags4 & VAR_4 &&
     VAR_16->flags4 & VAR_3) {
  FUNC_4(VAR_14, VAR_13, VAR_6, VAR_14->ndev,
        "Header of %d bytes in small buffer.\n", VAR_21);



  VAR_18 = FUNC_12(VAR_15);
  FUNC_10(VAR_14->pdev,
    FUNC_7(VAR_18, VAR_10),
    FUNC_8(VAR_18, VAR_11),
    VAR_8);
  VAR_19 = VAR_18->p.skb;
  FUNC_13(VAR_19, VAR_21);
  FUNC_15(VAR_19, VAR_21);
  VAR_18->p.skb = ((void*)0);
 }




 if (FUNC_17(!VAR_20)) {
  FUNC_4(VAR_14, VAR_13, VAR_6, VAR_14->ndev,
        "No Data buffer in this packet.\n");
  return VAR_19;
 }

 if (VAR_16->flags3 & VAR_2) {
  if (VAR_16->flags4 & VAR_3) {
   FUNC_4(VAR_14, VAR_13, VAR_6, VAR_14->ndev,
         "Headers in small, data of %d bytes in small, combine them.\n",
         VAR_20);







   VAR_18 = FUNC_12(VAR_15);
   FUNC_5(VAR_14->pdev,
          FUNC_7
          (VAR_18, VAR_10),
          FUNC_8
          (VAR_18, VAR_11),
          VAR_8);
   FUNC_2(FUNC_15(VAR_19, VAR_20),
          VAR_18->p.skb->data, VAR_20);
   FUNC_6(VAR_14->pdev,
             FUNC_7
             (VAR_18,
       VAR_10),
             FUNC_8
             (VAR_18,
       VAR_11),
             VAR_8);
  } else {
   FUNC_4(VAR_14, VAR_13, VAR_6, VAR_14->ndev,
         "%d bytes in a single small buffer.\n",
         VAR_20);
   VAR_18 = FUNC_12(VAR_15);
   VAR_19 = VAR_18->p.skb;
   FUNC_13(VAR_19, VAR_20);
   FUNC_15(VAR_19, VAR_20);
   FUNC_10(VAR_14->pdev,
      FUNC_7(VAR_18,
       VAR_10),
      FUNC_8(VAR_18,
             VAR_11),
      VAR_8);
   VAR_18->p.skb = ((void*)0);
  }
 } else if (VAR_16->flags3 & VAR_1) {
  if (VAR_16->flags4 & VAR_3) {
   FUNC_4(VAR_14, VAR_13, VAR_6, VAR_14->ndev,
         "Header in small, %d bytes in large. Chain large to small!\n",
         VAR_20);





   VAR_17 = FUNC_11(VAR_14, VAR_15);
   FUNC_4(VAR_14, VAR_13, VAR_6, VAR_14->ndev,
         "Chaining page at offset = %d, for %d bytes  to skb.\n",
         VAR_17->p.pg_chunk.offset, VAR_20);
   FUNC_14(VAR_19, 0, VAR_17->p.pg_chunk.page,
      VAR_17->p.pg_chunk.offset,
      VAR_20);
   VAR_19->len += VAR_20;
   VAR_19->data_len += VAR_20;
   VAR_19->truesize += VAR_20;
  } else {





   VAR_17 = FUNC_11(VAR_14, VAR_15);
   VAR_19 = FUNC_3(VAR_14->ndev, VAR_20);
   if (VAR_19 == ((void*)0)) {
    FUNC_4(VAR_14, VAR_12, VAR_6, VAR_14->ndev,
          "No skb available, drop the packet.\n");
    return ((void*)0);
   }
   FUNC_9(VAR_14->pdev,
           FUNC_7(VAR_17,
            VAR_10),
           FUNC_8(VAR_17, VAR_11),
           VAR_8);
   FUNC_16(VAR_19, VAR_7);
   FUNC_4(VAR_14, VAR_13, VAR_6, VAR_14->ndev,
         "%d bytes of headers and data in large. Chain page to new skb and pull tail.\n",
         VAR_20);
   FUNC_14(VAR_19, 0,
      VAR_17->p.pg_chunk.page,
      VAR_17->p.pg_chunk.offset,
      VAR_20);
   VAR_19->len += VAR_20;
   VAR_19->data_len += VAR_20;
   VAR_19->truesize += VAR_20;
   VAR_20 -= VAR_20;
   FUNC_0(VAR_19,
    (VAR_16->flags2 & VAR_5) ?
    VAR_9 : VAR_0);
  }
 } else {
  int VAR_22, VAR_23 = 0;
  VAR_18 = FUNC_12(VAR_15);
  FUNC_10(VAR_14->pdev,
     FUNC_7(VAR_18, VAR_10),
     FUNC_8(VAR_18, VAR_11),
     VAR_8);
  if (!(VAR_16->flags4 & VAR_3)) {
   FUNC_4(VAR_14, VAR_13, VAR_6, VAR_14->ndev,
         "%d bytes of headers & data in chain of large.\n",
         VAR_20);
   VAR_19 = VAR_18->p.skb;
   VAR_18->p.skb = ((void*)0);
   FUNC_16(VAR_19, VAR_7);
  }
  while (VAR_20 > 0) {
   VAR_17 = FUNC_11(VAR_14, VAR_15);
   VAR_22 = (VAR_20 < VAR_15->lbq_buf_size) ? VAR_20 :
    VAR_15->lbq_buf_size;

   FUNC_4(VAR_14, VAR_13, VAR_6, VAR_14->ndev,
         "Adding page %d to skb for %d bytes.\n",
         VAR_23, VAR_22);
   FUNC_14(VAR_19, VAR_23,
      VAR_17->p.pg_chunk.page,
      VAR_17->p.pg_chunk.offset,
      VAR_22);
   VAR_19->len += VAR_22;
   VAR_19->data_len += VAR_22;
   VAR_19->truesize += VAR_22;
   VAR_20 -= VAR_22;
   VAR_23++;
  }
  FUNC_0(VAR_19, (VAR_16->flags2 & VAR_5) ?
    VAR_9 : VAR_0);
 }
 return VAR_19;
}
