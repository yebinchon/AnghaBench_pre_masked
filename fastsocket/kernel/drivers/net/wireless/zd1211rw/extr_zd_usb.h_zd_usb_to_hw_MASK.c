
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_usb {int intf; } ;
struct ieee80211_hw {int dummy; } ;


 struct ieee80211_hw* FUNC_0 (int ) ;

__attribute__((used)) static inline struct ieee80211_hw *FUNC_1(struct zd_usb *VAR_0)
{
 return FUNC_0(VAR_0->intf);
}
