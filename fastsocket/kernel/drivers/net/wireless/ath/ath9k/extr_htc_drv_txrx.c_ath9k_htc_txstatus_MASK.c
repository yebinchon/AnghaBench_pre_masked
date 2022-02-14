
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wmi_event_txstatus {int cnt; struct __wmi_event_txstatus* txstatus; } ;
struct sk_buff {int dummy; } ;
struct ath9k_htc_tx_event {int list; int txs; } ;
struct ath9k_htc_priv {TYPE_1__* wmi; } ;
struct __wmi_event_txstatus {int dummy; } ;
struct TYPE_2__ {int event_lock; int pending_tx_events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ath9k_htc_priv*) ;
 struct sk_buff* FUNC_2 (struct ath9k_htc_priv*,struct __wmi_event_txstatus*) ;
 int FUNC_3 (struct ath9k_htc_priv*,struct sk_buff*,struct __wmi_event_txstatus*) ;
 struct ath9k_htc_tx_event* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,struct __wmi_event_txstatus*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct ath9k_htc_priv *VAR_2, void *VAR_3)
{
 struct wmi_event_txstatus *VAR_4 = (struct wmi_event_txstatus *)VAR_3;
 struct __wmi_event_txstatus *VAR_5;
 struct sk_buff *VAR_6;
 struct ath9k_htc_tx_event *VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_4->cnt; VAR_8++) {
  FUNC_0(VAR_4->cnt > VAR_1);

  VAR_5 = &VAR_4->txstatus[VAR_8];

  VAR_6 = FUNC_2(VAR_2, VAR_5);
  if (!VAR_6) {




   VAR_7 = FUNC_4(sizeof(struct ath9k_htc_tx_event),
       VAR_0);
   if (!VAR_7)
    continue;

   FUNC_6(&VAR_7->txs, VAR_5,
          sizeof(struct __wmi_event_txstatus));

   FUNC_7(&VAR_2->wmi->event_lock);
   FUNC_5(&VAR_7->list,
          &VAR_2->wmi->pending_tx_events);
   FUNC_8(&VAR_2->wmi->event_lock);

   continue;
  }

  FUNC_3(VAR_2, VAR_6, VAR_5);
 }


 FUNC_1(VAR_2);
}
