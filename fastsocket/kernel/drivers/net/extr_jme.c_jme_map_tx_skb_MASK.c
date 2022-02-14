
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct txdesc {int dummy; } ;
struct skb_frag_struct {int size; int page_offset; int page; } ;
struct sk_buff {int data; int len; } ;
struct jme_ring {struct jme_buffer_info* bufinf; struct txdesc* desc; } ;
struct jme_buffer_info {int dummy; } ;
struct jme_adapter {int tx_ring_mask; int pdev; TYPE_1__* dev; struct jme_ring* txring; } ;
struct TYPE_4__ {int nr_frags; struct skb_frag_struct* frags; } ;
struct TYPE_3__ {int features; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct txdesc*,struct jme_buffer_info*,int ,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 TYPE_2__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct jme_adapter *VAR_1, struct sk_buff *VAR_2, int VAR_3)
{
 struct jme_ring *VAR_4 = &(VAR_1->txring[0]);
 struct txdesc *VAR_5 = VAR_4->desc, *VAR_6;
 struct jme_buffer_info *VAR_7 = VAR_4->bufinf, *VAR_8;
 u8 VAR_9 = VAR_1->dev->features & VAR_0;
 int VAR_10, VAR_11 = FUNC_4(VAR_2)->nr_frags;
 int VAR_12 = VAR_1->tx_ring_mask;
 struct skb_frag_struct *VAR_13;
 u32 VAR_14;

 for (VAR_10 = 0 ; VAR_10 < VAR_11 ; ++VAR_10) {
  VAR_13 = &FUNC_4(VAR_2)->frags[VAR_10];
  VAR_6 = VAR_5 + ((VAR_3 + VAR_10 + 2) & (VAR_12));
  VAR_8 = VAR_7 + ((VAR_3 + VAR_10 + 2) & (VAR_12));

  FUNC_0(VAR_1->pdev, VAR_6, VAR_8, VAR_13->page,
     VAR_13->page_offset, VAR_13->size, VAR_9);
 }

 VAR_14 = FUNC_3(VAR_2) ? FUNC_2(VAR_2) : VAR_2->len;
 VAR_6 = VAR_5 + ((VAR_3 + 1) & (VAR_12));
 VAR_8 = VAR_7 + ((VAR_3 + 1) & (VAR_12));
 FUNC_0(VAR_1->pdev, VAR_6, VAR_8, FUNC_5(VAR_2->data),
   FUNC_1(VAR_2->data), VAR_14, VAR_9);

}
