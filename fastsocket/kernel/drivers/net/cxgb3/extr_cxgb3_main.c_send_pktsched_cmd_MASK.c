
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct mngt_pktsched_wr {int sched; int idx; int min; int max; int binding; int mngt_opcode; int wr_hi; } ;
struct cpl_set_tcb_field {int dummy; } ;
struct adapter {struct sk_buff* nofail_skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct adapter*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct adapter *VAR_4, int VAR_5, int VAR_6, int VAR_7,
         int VAR_8, int VAR_9)
{
 struct sk_buff *VAR_10;
 struct mngt_pktsched_wr *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_1(sizeof(*VAR_11), VAR_3);
 if (!VAR_10)
  VAR_10 = VAR_4->nofail_skb;
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = (struct mngt_pktsched_wr *)FUNC_3(VAR_10, sizeof(*VAR_11));
 VAR_11->wr_hi = FUNC_2(FUNC_0(VAR_2));
 VAR_11->mngt_opcode = VAR_1;
 VAR_11->sched = VAR_5;
 VAR_11->idx = VAR_6;
 VAR_11->min = VAR_7;
 VAR_11->max = VAR_8;
 VAR_11->binding = VAR_9;
 VAR_12 = FUNC_4(VAR_4, VAR_10);
 if (VAR_10 == VAR_4->nofail_skb) {
  VAR_4->nofail_skb = FUNC_1(sizeof(struct cpl_set_tcb_field),
          VAR_3);
  if (!VAR_4->nofail_skb)
   VAR_12 = -VAR_0;
 }

 return VAR_12;
}
