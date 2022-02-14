
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct fe_priv {int txrxctl_bits; TYPE_2__* tx_change_owner; TYPE_2__* tx_end_flip; int tx_pkts_in_progress; } ;
struct TYPE_4__ {struct TYPE_4__* next_tx_ctx; TYPE_1__* first_tx_desc; } ;
struct TYPE_3__ {int flaglen; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 struct fe_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_4(struct net_device *VAR_3)
{
 struct fe_priv *VAR_4 = FUNC_2(VAR_3);

 VAR_4->tx_pkts_in_progress--;
 if (VAR_4->tx_change_owner) {
  VAR_4->tx_change_owner->first_tx_desc->flaglen |=
   FUNC_0(VAR_1);
  VAR_4->tx_pkts_in_progress++;

  VAR_4->tx_change_owner = VAR_4->tx_change_owner->next_tx_ctx;
  if (VAR_4->tx_change_owner == VAR_4->tx_end_flip)
   VAR_4->tx_change_owner = ((void*)0);

  FUNC_3(VAR_0|VAR_4->txrxctl_bits, FUNC_1(VAR_3) + VAR_2);
 }
}
