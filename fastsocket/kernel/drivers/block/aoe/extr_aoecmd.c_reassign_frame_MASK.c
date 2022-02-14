
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct frame {struct sk_buff* skb; int sent_jiffs; int sent; int waited_total; scalar_t__ waited; int bv_off; int bv; int lba; int bcnt; int buf; TYPE_1__* t; } ;
struct TYPE_2__ {int d; } ;


 int FUNC_0 (struct frame*) ;
 struct frame* FUNC_1 (int ) ;

__attribute__((used)) static struct frame *
FUNC_2(struct frame *VAR_0)
{
 struct frame *VAR_1;
 struct sk_buff *VAR_2;

 VAR_1 = FUNC_1(VAR_0->t->d);
 if (!VAR_1)
  return ((void*)0);
 if (VAR_1->t == VAR_0->t) {
  FUNC_0(VAR_1);
  return ((void*)0);
 }

 VAR_2 = VAR_1->skb;
 VAR_1->skb = VAR_0->skb;
 VAR_1->buf = VAR_0->buf;
 VAR_1->bcnt = VAR_0->bcnt;
 VAR_1->lba = VAR_0->lba;
 VAR_1->bv = VAR_0->bv;
 VAR_1->bv_off = VAR_0->bv_off;
 VAR_1->waited = 0;
 VAR_1->waited_total = VAR_0->waited_total;
 VAR_1->sent = VAR_0->sent;
 VAR_1->sent_jiffs = VAR_0->sent_jiffs;
 VAR_0->skb = VAR_2;

 return VAR_1;
}
