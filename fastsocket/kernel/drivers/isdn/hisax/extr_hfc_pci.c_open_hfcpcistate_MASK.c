
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct IsdnCardState {int dummy; } ;
struct BCState {scalar_t__ tx_cnt; scalar_t__ event; int Flag; int * tx_skb; int squeue; int rqueue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int
FUNC_3(struct IsdnCardState *VAR_2, struct BCState *VAR_3)
{
 if (!FUNC_2(VAR_1, &VAR_3->Flag)) {
  FUNC_0(&VAR_3->rqueue);
  FUNC_0(&VAR_3->squeue);
 }
 VAR_3->tx_skb = ((void*)0);
 FUNC_1(VAR_0, &VAR_3->Flag);
 VAR_3->event = 0;
 VAR_3->tx_cnt = 0;
 return (0);
}
