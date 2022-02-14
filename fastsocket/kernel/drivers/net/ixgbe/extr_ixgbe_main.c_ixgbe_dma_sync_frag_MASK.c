
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct skb_frag_struct {int page_offset; } ;
struct sk_buff {int dummy; } ;
struct ixgbe_ring {int dev; } ;
struct TYPE_4__ {int page_released; scalar_t__ dma; } ;
struct TYPE_3__ {struct skb_frag_struct* frags; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,scalar_t__,int ,int ,int ) ;
 int FUNC_2 (int ,scalar_t__,int ,int ) ;
 int FUNC_3 (struct ixgbe_ring*) ;
 int FUNC_4 (struct ixgbe_ring*) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct ixgbe_ring *VAR_1,
    struct sk_buff *VAR_2)
{

 if (FUNC_6(FUNC_0(VAR_2)->page_released)) {
  FUNC_2(VAR_1->dev, FUNC_0(VAR_2)->dma,
          FUNC_4(VAR_1), VAR_0);
  FUNC_0(VAR_2)->page_released = 0;
 } else {
  struct skb_frag_struct *VAR_3 = &FUNC_5(VAR_2)->frags[0];

  FUNC_1(VAR_1->dev,
           FUNC_0(VAR_2)->dma,
           VAR_3->page_offset,
           FUNC_3(VAR_1),
           VAR_0);
 }
 FUNC_0(VAR_2)->dma = 0;
}
