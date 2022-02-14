
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ truesize; scalar_t__ len; } ;
struct fritz_bcs {struct sk_buff* tx_skb; scalar_t__ tx_cnt; } ;


 int FUNC_0 (struct fritz_bcs*,int,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct fritz_bcs*) ;

__attribute__((used)) static inline void FUNC_3(struct fritz_bcs *VAR_2)
{
 struct sk_buff *VAR_3;

 VAR_3 = VAR_2->tx_skb;
 if (!VAR_3)
  return;

 if (VAR_3->len) {
  FUNC_2(VAR_2);
  return;
 }
 VAR_2->tx_cnt = 0;
 VAR_2->tx_skb = ((void*)0);
 FUNC_0(VAR_2, VAR_1 | VAR_0, (void *)(unsigned long)VAR_3->truesize);
 FUNC_1(VAR_3);
}
