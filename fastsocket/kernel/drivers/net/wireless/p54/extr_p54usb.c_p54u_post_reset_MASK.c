
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct TYPE_2__ {scalar_t__ mode; } ;
struct p54u_priv {TYPE_1__ common; } ;
struct ieee80211_hw {struct p54u_priv* priv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct usb_interface*) ;
 struct ieee80211_hw* FUNC_2 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_3(struct usb_interface *VAR_1)
{
 struct ieee80211_hw *VAR_2 = FUNC_2(VAR_1);
 struct p54u_priv *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4)
  return VAR_4;


 VAR_3 = VAR_2->priv;
 if (VAR_3->common.mode != VAR_0)
  FUNC_0(VAR_2);

 return 0;
}
