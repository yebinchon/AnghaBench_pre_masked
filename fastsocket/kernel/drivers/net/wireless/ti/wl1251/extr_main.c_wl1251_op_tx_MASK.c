
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int tx_queue_stopped; int wl_lock; int hw; int tx_queue; int tx_work; } ;
struct sk_buff {int dummy; } ;
struct ieee80211_tx_control {int dummy; } ;
struct ieee80211_hw {struct wl1251* priv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_2,
    struct ieee80211_tx_control *VAR_3,
    struct sk_buff *VAR_4)
{
 struct wl1251 *VAR_5 = VAR_2->priv;
 unsigned long VAR_6;

 FUNC_3(&VAR_5->tx_queue, VAR_4);






 FUNC_0(VAR_5->hw, &VAR_5->tx_work);





 if (FUNC_2(&VAR_5->tx_queue) >= VAR_1) {
  FUNC_6(VAR_0, "op_tx: tx_queue full, stop queues");

  FUNC_4(&VAR_5->wl_lock, VAR_6);
  FUNC_1(VAR_5->hw);
  VAR_5->tx_queue_stopped = 1;
  FUNC_5(&VAR_5->wl_lock, VAR_6);
 }
}
