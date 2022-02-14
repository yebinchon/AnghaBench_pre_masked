
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zd_usb {int was_running; } ;
struct TYPE_2__ {int mutex; struct zd_usb usb; } ;
struct zd_mac {TYPE_1__ chip; int flags; } ;
struct usb_interface {scalar_t__ condition; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 struct ieee80211_hw* FUNC_2 (struct usb_interface*) ;
 struct zd_mac* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct zd_usb*) ;

__attribute__((used)) static int FUNC_5(struct usb_interface *VAR_2)
{
 struct ieee80211_hw *VAR_3 = FUNC_2(VAR_2);
 struct zd_mac *VAR_4;
 struct zd_usb *VAR_5;

 if (!VAR_3 || VAR_2->condition != VAR_0)
  return 0;

 VAR_4 = FUNC_3(VAR_3);
 VAR_5 = &VAR_4->chip.usb;

 VAR_5->was_running = FUNC_1(VAR_1, &VAR_4->flags);

 FUNC_4(VAR_5);

 FUNC_0(&VAR_4->chip.mutex);
 return 0;
}
