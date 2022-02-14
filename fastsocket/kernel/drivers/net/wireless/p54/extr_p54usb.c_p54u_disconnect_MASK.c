
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct p54u_priv {int fw; int fw_wait_load; } ;
struct ieee80211_hw {struct p54u_priv* priv; } ;


 int FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (int ) ;
 struct ieee80211_hw* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_0)
{
 struct ieee80211_hw *VAR_1 = FUNC_4(VAR_0);
 struct p54u_priv *VAR_2;

 if (!VAR_1)
  return;

 VAR_2 = VAR_1->priv;
 FUNC_6(&VAR_2->fw_wait_load);
 FUNC_2(VAR_1);

 FUNC_5(FUNC_0(VAR_0));
 FUNC_3(VAR_2->fw);
 FUNC_1(VAR_1);
}
