
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct fcoe_ctlr {TYPE_1__* sel_fcf; int (* send ) (struct fcoe_ctlr*,struct sk_buff*) ;int lp; struct sk_buff* flogi_req; } ;
struct fc_frame_header {int fh_d_id; } ;
struct TYPE_2__ {int flogi_sent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fcoe_ctlr*,int ,int ,struct sk_buff*,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 struct sk_buff* FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct fcoe_ctlr*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct fcoe_ctlr *VAR_3)
{
 struct sk_buff *VAR_4;
 struct sk_buff *VAR_5;
 struct fc_frame_header *VAR_6;
 int VAR_7;

 VAR_5 = VAR_3->flogi_req;
 if (!VAR_5)
  return -VAR_0;




 VAR_4 = FUNC_3(VAR_5, VAR_2);
 if (!VAR_4) {
  VAR_4 = VAR_5;
  VAR_3->flogi_req = ((void*)0);
 }
 VAR_6 = (struct fc_frame_header *)VAR_4->data;
 VAR_7 = FUNC_0(VAR_3, VAR_3->lp, VAR_1, VAR_4,
     FUNC_2(VAR_6->fh_d_id));
 if (VAR_7) {
  FUNC_1(VAR_4);
  return VAR_7;
 }
 VAR_3->send(VAR_3, VAR_4);
 VAR_3->sel_fcf->flogi_sent = 1;
 return 0;
}
