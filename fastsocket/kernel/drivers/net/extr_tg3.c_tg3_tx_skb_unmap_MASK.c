
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct tg3_tx_ring_info {int fragmented; struct sk_buff* skb; } ;
struct tg3_napi {struct tg3_tx_ring_info* tx_buffers; TYPE_1__* tp; } ;
struct sk_buff {int dummy; } ;
typedef int skb_frag_t ;
struct TYPE_4__ {int * frags; } ;
struct TYPE_3__ {int pdev; } ;


 size_t FUNC_0 (size_t) ;
 int VAR_0 ;
 int FUNC_1 (struct tg3_tx_ring_info*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (struct sk_buff*) ;
 TYPE_2__* FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_7(struct tg3_napi *VAR_2, u32 VAR_3, int VAR_4)
{
 int VAR_5;
 struct sk_buff *VAR_6;
 struct tg3_tx_ring_info *VAR_7 = &VAR_2->tx_buffers[VAR_3];

 VAR_6 = VAR_7->skb;
 VAR_7->skb = ((void*)0);

 FUNC_3(VAR_2->tp->pdev,
    FUNC_1(VAR_7, VAR_1),
    FUNC_5(VAR_6),
    VAR_0);

 while (VAR_7->fragmented) {
  VAR_7->fragmented = 0;
  VAR_3 = FUNC_0(VAR_3);
  VAR_7 = &VAR_2->tx_buffers[VAR_3];
 }

 for (VAR_5 = 0; VAR_5 <= VAR_4; VAR_5++) {
  const skb_frag_t *VAR_8 = &FUNC_6(VAR_6)->frags[VAR_5];

  VAR_3 = FUNC_0(VAR_3);
  VAR_7 = &VAR_2->tx_buffers[VAR_3];

  FUNC_2(VAR_2->tp->pdev,
          FUNC_1(VAR_7, VAR_1),
          FUNC_4(VAR_8), VAR_0);

  while (VAR_7->fragmented) {
   VAR_7->fragmented = 0;
   VAR_3 = FUNC_0(VAR_3);
   VAR_7 = &VAR_2->tx_buffers[VAR_3];
  }
 }
}
