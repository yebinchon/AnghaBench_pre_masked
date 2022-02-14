
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int * cb; } ;
struct nes_vnic {int mgt_wait_queue; int mgt_skb_list; } ;
struct nes_rskb_cb {struct nes_qp* nesqp; } ;
struct nes_qp {int dummy; } ;


 int FUNC_0 (int *,struct sk_buff*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct sk_buff *VAR_0, struct nes_vnic *VAR_1, struct nes_qp *VAR_2)
{
 struct nes_rskb_cb *VAR_3;

 VAR_3 = (struct nes_rskb_cb *)&VAR_0->cb[0];
 VAR_3->nesqp = VAR_2;
 FUNC_0(&VAR_1->mgt_skb_list, VAR_0);
 FUNC_1(&VAR_1->mgt_wait_queue);
}
