
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct pau_fpdu_info {int frag_cnt; int hdr_pbase; scalar_t__ hdr_vbase; int hdr_len; TYPE_1__* frags; struct nes_qp* nesqp; } ;
struct nes_qp {int cm_node; } ;
struct nes_device {int pcidev; } ;
struct nes_cqp_request {struct pau_fpdu_info* cqp_callback_pointer; } ;
struct TYPE_2__ {scalar_t__ cmplt; struct sk_buff* skb; } ;


 int VAR_0 ;
 int FUNC_0 (struct pau_fpdu_info*) ;
 int FUNC_1 (struct nes_device*,struct sk_buff*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(struct nes_device *VAR_1, struct nes_cqp_request *VAR_2)
{
 struct pau_fpdu_info *VAR_3 = VAR_2->cqp_callback_pointer;
 struct nes_qp *VAR_4 = VAR_3->nesqp;
 struct sk_buff *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3->frag_cnt; VAR_6++) {
  VAR_5 = VAR_3->frags[VAR_6].skb;
  if (VAR_3->frags[VAR_6].cmplt) {
   FUNC_1(VAR_1, VAR_5, VAR_0);
   FUNC_2(VAR_4->cm_node);
  }
 }

 if (VAR_3->hdr_vbase)
  FUNC_3(VAR_1->pcidev, VAR_3->hdr_len,
        VAR_3->hdr_vbase, VAR_3->hdr_pbase);
 FUNC_0(VAR_3);
}
