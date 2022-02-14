
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbsoft_priv {int dummy; } ;
struct usb_interface {int dummy; } ;
struct ieee80211_hw {struct wbsoft_priv* priv; } ;


 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct usb_interface*) ;
 struct ieee80211_hw* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct usb_interface*,int *) ;
 int FUNC_7 (struct wbsoft_priv*) ;

__attribute__((used)) static void FUNC_8(struct usb_interface *VAR_0)
{
 struct ieee80211_hw *VAR_1 = FUNC_4(VAR_0);
 struct wbsoft_priv *VAR_2 = VAR_1->priv;

 FUNC_7(VAR_2);

 FUNC_1(VAR_1);
 FUNC_2(VAR_1);
 FUNC_0(VAR_1);

 FUNC_6(VAR_0, ((void*)0));
 FUNC_5(FUNC_3(VAR_0));
}
