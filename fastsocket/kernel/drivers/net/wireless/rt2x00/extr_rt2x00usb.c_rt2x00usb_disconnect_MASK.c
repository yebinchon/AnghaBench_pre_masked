
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct rt2x00_dev {int dummy; } ;
struct ieee80211_hw {struct rt2x00_dev* priv; } ;


 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct rt2x00_dev*) ;
 int FUNC_3 (struct rt2x00_dev*) ;
 struct ieee80211_hw* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct usb_interface*,int *) ;

void FUNC_7(struct usb_interface *VAR_0)
{
 struct ieee80211_hw *VAR_1 = FUNC_4(VAR_0);
 struct rt2x00_dev *VAR_2 = VAR_1->priv;




 FUNC_2(VAR_2);
 FUNC_3(VAR_2);
 FUNC_0(VAR_1);




 FUNC_6(VAR_0, ((void*)0));
 FUNC_5(FUNC_1(VAR_0));
}
