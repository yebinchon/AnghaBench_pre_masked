
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_chip {int rf; int usb; int mutex; } ;
struct usb_interface {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (struct zd_chip*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct ieee80211_hw*,struct usb_interface*) ;

void FUNC_4(struct zd_chip *VAR_0,
          struct ieee80211_hw *VAR_1,
   struct usb_interface *VAR_2)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 FUNC_1(&VAR_0->mutex);
 FUNC_3(&VAR_0->usb, VAR_1, VAR_2);
 FUNC_2(&VAR_0->rf);
}
