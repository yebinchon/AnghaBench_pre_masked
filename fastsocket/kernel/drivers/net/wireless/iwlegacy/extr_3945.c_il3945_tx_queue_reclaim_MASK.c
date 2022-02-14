
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct il_queue {int read_ptr; scalar_t__ low_mark; int n_bd; } ;
struct il_tx_queue {struct il_queue q; struct sk_buff** skbs; } ;
struct il_priv {scalar_t__ mac80211_registered; TYPE_1__* ops; int hw; struct il_tx_queue* txq; } ;
struct TYPE_2__ {int (* txq_free_tfd ) (struct il_priv*,struct il_tx_queue*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct sk_buff*) ;
 void* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (struct il_queue*) ;
 int FUNC_4 (struct il_priv*,struct il_tx_queue*) ;
 int FUNC_5 (struct il_priv*,struct il_tx_queue*) ;

__attribute__((used)) static void
FUNC_6(struct il_priv *VAR_1, int VAR_2, int VAR_3)
{
 struct il_tx_queue *VAR_4 = &VAR_1->txq[VAR_2];
 struct il_queue *VAR_5 = &VAR_4->q;
 struct sk_buff *VAR_6;

 FUNC_0(VAR_2 == VAR_0);

 for (VAR_3 = FUNC_2(VAR_3, VAR_5->n_bd); VAR_5->read_ptr != VAR_3;
      VAR_5->read_ptr = FUNC_2(VAR_5->read_ptr, VAR_5->n_bd)) {

  VAR_6 = VAR_4->skbs[VAR_4->q.read_ptr];
  FUNC_1(VAR_1->hw, VAR_6);
  VAR_4->skbs[VAR_4->q.read_ptr] = ((void*)0);
  VAR_1->ops->txq_free_tfd(VAR_1, VAR_4);
 }

 if (FUNC_3(VAR_5) > VAR_5->low_mark && VAR_2 >= 0 &&
     VAR_2 != VAR_0 && VAR_1->mac80211_registered)
  FUNC_4(VAR_1, VAR_4);
}
