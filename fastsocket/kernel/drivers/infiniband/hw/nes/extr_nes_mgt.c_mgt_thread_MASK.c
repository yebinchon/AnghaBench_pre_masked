
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int * cb; scalar_t__ data; } ;
struct nes_vnic {int mgt_skb_list; int max_frame_size; TYPE_1__* nesdev; int mgt_wait_queue; } ;
struct nes_rskb_cb {TYPE_2__* nesqp; scalar_t__ data_start; int busaddr; } ;
struct TYPE_4__ {int cm_node; } ;
struct TYPE_3__ {int pcidev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,int ,int ) ;
 int FUNC_4 (struct sk_buff*,struct nes_vnic*,TYPE_2__*) ;
 struct sk_buff* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int FUNC_8(void *VAR_2)
{
 struct nes_vnic *VAR_3 = VAR_2;
 struct sk_buff *VAR_4;
 struct nes_rskb_cb *VAR_5;

 while (!FUNC_1()) {
  FUNC_7(VAR_3->mgt_wait_queue,
      FUNC_6(&VAR_3->mgt_skb_list) || FUNC_1());
  while ((FUNC_6(&VAR_3->mgt_skb_list)) && !FUNC_1()) {
   VAR_4 = FUNC_5(&VAR_3->mgt_skb_list);
   VAR_5 = (struct nes_rskb_cb *)&VAR_4->cb[0];
   VAR_5->data_start = VAR_4->data - VAR_0;
   VAR_5->busaddr = FUNC_3(VAR_3->nesdev->pcidev, VAR_5->data_start,
           VAR_3->max_frame_size, VAR_1);
   FUNC_4(VAR_4, VAR_3, VAR_5->nesqp);
  }
 }


 while (FUNC_6(&VAR_3->mgt_skb_list)) {
  VAR_4 = FUNC_5(&VAR_3->mgt_skb_list);
  VAR_5 = (struct nes_rskb_cb *)&VAR_4->cb[0];
  FUNC_2(VAR_5->nesqp->cm_node);
  FUNC_0(VAR_4);
 }
 return 0;
}
