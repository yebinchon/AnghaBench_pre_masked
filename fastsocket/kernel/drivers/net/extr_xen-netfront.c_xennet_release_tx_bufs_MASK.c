
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct netfront_info {TYPE_1__* tx_skbs; int tx_skb_freelist; int * grant_tx_ref; int gref_tx_head; } ;
struct TYPE_3__ {struct sk_buff* skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(struct netfront_info *VAR_3)
{
 struct sk_buff *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {

  if (FUNC_4(&VAR_3->tx_skbs[VAR_5]))
   continue;

  VAR_4 = VAR_3->tx_skbs[VAR_5].skb;
  FUNC_2(VAR_3->grant_tx_ref[VAR_5],
           VAR_0);
  FUNC_3(&VAR_3->gref_tx_head,
            VAR_3->grant_tx_ref[VAR_5]);
  VAR_3->grant_tx_ref[VAR_5] = VAR_1;
  FUNC_0(&VAR_3->tx_skb_freelist, VAR_3->tx_skbs, VAR_5);
  FUNC_1(VAR_4);
 }
}
