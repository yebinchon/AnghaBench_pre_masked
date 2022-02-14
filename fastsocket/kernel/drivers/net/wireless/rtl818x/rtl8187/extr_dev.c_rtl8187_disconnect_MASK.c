
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct rtl8187_priv {int io_dmabuf; int udev; } ;
struct ieee80211_hw {struct rtl8187_priv* priv; } ;


 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 struct ieee80211_hw* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct usb_interface *VAR_0)
{
 struct ieee80211_hw *VAR_1 = FUNC_6(VAR_0);
 struct rtl8187_priv *VAR_2;

 if (!VAR_1)
  return;




 FUNC_5(VAR_1);
 FUNC_1(VAR_1);

 VAR_2 = VAR_1->priv;
 FUNC_8(VAR_2->udev);
 FUNC_7(FUNC_2(VAR_0));
 FUNC_3(VAR_2->io_dmabuf);
 FUNC_0(VAR_1);
}
