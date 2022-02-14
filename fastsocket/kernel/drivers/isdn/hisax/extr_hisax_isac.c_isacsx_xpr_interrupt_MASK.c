
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isac {scalar_t__ tx_cnt; TYPE_1__* tx_skb; } ;
struct TYPE_2__ {scalar_t__ len; } ;


 int VAR_0 ;
 int FUNC_0 (struct isac*,int,int *) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct isac*) ;

__attribute__((used)) static inline void FUNC_3(struct isac *VAR_2)
{
 if (!VAR_2->tx_skb)
  return;

 if (VAR_2->tx_skb->len > 0) {
  FUNC_2(VAR_2);
  return;
 }
 FUNC_1(VAR_2->tx_skb);
 VAR_2->tx_skb = ((void*)0);
 VAR_2->tx_cnt = 0;
 FUNC_0(VAR_2, VAR_1 | VAR_0, ((void*)0));
}
