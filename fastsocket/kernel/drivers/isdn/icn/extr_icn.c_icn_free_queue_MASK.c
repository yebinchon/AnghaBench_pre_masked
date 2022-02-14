
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {struct sk_buff** xskb; scalar_t__* sndcount; scalar_t__* xlen; struct sk_buff_head* spqueue; } ;
typedef TYPE_1__ icn_card ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff_head*) ;

__attribute__((used)) static void
FUNC_2(icn_card * VAR_0, int VAR_1)
{
 struct sk_buff_head *VAR_2 = &VAR_0->spqueue[VAR_1];
 struct sk_buff *VAR_3;

 FUNC_1(VAR_2);
 VAR_0->xlen[VAR_1] = 0;
 VAR_0->sndcount[VAR_1] = 0;
 if ((VAR_3 = VAR_0->xskb[VAR_1])) {
  VAR_0->xskb[VAR_1] = ((void*)0);
  FUNC_0(VAR_3);
 }
}
