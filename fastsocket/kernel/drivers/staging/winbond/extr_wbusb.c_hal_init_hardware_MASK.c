
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {unsigned long data; scalar_t__ expires; int function; } ;
struct hw_data {int SurpriseRemove; TYPE_1__ LEDTimer; int FragmentThreshold; int MaxReceiveLifeTime; } ;
struct wbsoft_priv {struct hw_data sHwData; } ;
struct ieee80211_hw {struct wbsoft_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hw_data*) ;
 int FUNC_1 (struct hw_data*) ;
 int FUNC_2 (struct hw_data*) ;
 int FUNC_3 (struct hw_data*) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct wbsoft_priv*) ;
 int FUNC_6 (struct hw_data*) ;
 int FUNC_7 (struct hw_data*) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_9 (struct hw_data*) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct ieee80211_hw *VAR_5)
{
 struct wbsoft_priv *VAR_6 = VAR_5->priv;
 struct hw_data *VAR_7 = &VAR_6->sHwData;
 u16 VAR_8;

 VAR_7->MaxReceiveLifeTime = VAR_1;
 VAR_7->FragmentThreshold = VAR_0;

 if (!FUNC_1(VAR_7))
  goto error_reg_destroy;

 if (!FUNC_7(VAR_7))
  goto error_tx_destroy;

 if (!FUNC_3(VAR_7))
  goto error_rx_destroy;

 FUNC_10(&VAR_7->LEDTimer);
 VAR_7->LEDTimer.function = VAR_3;
 VAR_7->LEDTimer.data = (unsigned long)VAR_6;
 VAR_7->LEDTimer.expires = VAR_4 + FUNC_11(1000);
 FUNC_8(&VAR_7->LEDTimer);

 VAR_8 = FUNC_9(VAR_7);
 FUNC_4(VAR_5);
 FUNC_5(VAR_6);

 return 0;

error_rx_destroy:
 FUNC_2(VAR_7);
error_tx_destroy:
 FUNC_6(VAR_7);
error_reg_destroy:
 FUNC_0(VAR_7);

 VAR_7->SurpriseRemove = 1;
 return -VAR_2;
}
