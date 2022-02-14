
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct tg3_napi {TYPE_1__* tx_buffers; struct tg3* tp; } ;
struct tg3 {int pdev; } ;
struct sk_buff {int len; scalar_t__ data; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {struct sk_buff* skb; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,scalar_t__,int ,int ) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_5 (struct sk_buff*,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct tg3*) ;
 scalar_t__ FUNC_9 (struct tg3_napi*,size_t*,size_t*,int ,int ,size_t,size_t,size_t) ;
 int FUNC_10 (struct tg3_napi*,size_t,int) ;

__attribute__((used)) static int FUNC_11(struct tg3_napi *VAR_5,
           struct sk_buff **VAR_6,
           u32 *VAR_7, u32 *VAR_8,
           u32 VAR_9, u32 VAR_10, u32 VAR_11)
{
 struct tg3 *VAR_12 = VAR_5->tp;
 struct sk_buff *VAR_13, *VAR_14 = *VAR_6;
 dma_addr_t VAR_15 = 0;
 int VAR_16 = 0;

 if (FUNC_8(VAR_12) != VAR_0)
  VAR_13 = FUNC_4(VAR_14, VAR_1);
 else {
  int VAR_17 = 4 - ((unsigned long)VAR_14->data & 3);

  VAR_13 = FUNC_5(VAR_14,
       FUNC_6(VAR_14) + VAR_17,
       FUNC_7(VAR_14), VAR_1);
 }

 if (!VAR_13) {
  VAR_16 = -1;
 } else {

  VAR_15 = FUNC_3(VAR_12->pdev, VAR_13->data, VAR_13->len,
       VAR_2);

  if (FUNC_2(VAR_12->pdev, VAR_15)) {
   FUNC_0(VAR_13);
   VAR_16 = -1;
  } else {
   u32 VAR_18 = *VAR_7;

   VAR_9 |= VAR_3;

   VAR_5->tx_buffers[*VAR_7].skb = VAR_13;
   FUNC_1(&VAR_5->tx_buffers[*VAR_7],
        VAR_4, VAR_15);

   if (FUNC_9(VAR_5, VAR_7, VAR_8, VAR_15,
         VAR_13->len, VAR_9,
         VAR_10, VAR_11)) {
    FUNC_10(VAR_5, VAR_18, -1);
    FUNC_0(VAR_13);
    VAR_16 = -1;
   }
  }
 }

 FUNC_0(VAR_14);
 *VAR_6 = VAR_13;
 return VAR_16;
}
