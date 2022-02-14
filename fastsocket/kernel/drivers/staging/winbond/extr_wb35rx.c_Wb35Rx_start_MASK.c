
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wb35_rx {int RxFireCounter; int EP3vm_state; } ;
struct hw_data {struct wb35_rx Wb35Rx; } ;
struct wbsoft_priv {struct hw_data sHwData; } ;
struct ieee80211_hw {struct wbsoft_priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ieee80211_hw *VAR_1)
{
 struct wbsoft_priv *VAR_2 = VAR_1->priv;
 struct hw_data * VAR_3 = &VAR_2->sHwData;
 struct wb35_rx *VAR_4 = &VAR_3->Wb35Rx;


 if (FUNC_2(&VAR_4->RxFireCounter) == 1) {
  VAR_4->EP3vm_state = VAR_0;
  FUNC_0(VAR_1);
 } else
  FUNC_1(&VAR_4->RxFireCounter);
}
