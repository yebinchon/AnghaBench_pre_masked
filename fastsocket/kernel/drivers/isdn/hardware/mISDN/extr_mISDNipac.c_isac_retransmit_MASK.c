
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tx_idx; int Flags; scalar_t__ tx_skb; int timer; } ;
struct isac_hw {TYPE_1__ dch; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct isac_hw*) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void
FUNC_7(struct isac_hw *VAR_2)
{
 if (FUNC_4(VAR_0, &VAR_2->dch.Flags))
  FUNC_0(&VAR_2->dch.timer);
 if (FUNC_6(VAR_1, &VAR_2->dch.Flags)) {

  VAR_2->dch.tx_idx = 0;
  FUNC_2(VAR_2);
 } else if (VAR_2->dch.tx_skb) {
  FUNC_3("%s: tx_skb exist but not busy\n", VAR_2->name);
  FUNC_5(VAR_1, &VAR_2->dch.Flags);
  VAR_2->dch.tx_idx = 0;
  FUNC_2(VAR_2);
 } else {
  FUNC_3("%s: ISAC XDU no TX_BUSY\n", VAR_2->name);
  if (FUNC_1(&VAR_2->dch))
   FUNC_2(VAR_2);
 }
}
