
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tx_idx; TYPE_2__* tx_skb; int Flags; } ;
struct hscx_hw {TYPE_1__ bch; } ;
struct TYPE_5__ {scalar_t__ len; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct hscx_hw*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5(struct hscx_hw *VAR_1)
{
 if (VAR_1->bch.tx_skb && VAR_1->bch.tx_idx < VAR_1->bch.tx_skb->len)
  FUNC_3(VAR_1);
 else {
  if (VAR_1->bch.tx_skb) {

   if (FUNC_4(VAR_0, &VAR_1->bch.Flags))
    FUNC_0(&VAR_1->bch);
   FUNC_1(VAR_1->bch.tx_skb);
  }
  if (FUNC_2(&VAR_1->bch))
   FUNC_3(VAR_1);
 }
}
