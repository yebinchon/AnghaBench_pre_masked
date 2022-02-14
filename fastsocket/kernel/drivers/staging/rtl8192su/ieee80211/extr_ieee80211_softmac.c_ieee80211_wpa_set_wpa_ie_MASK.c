
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ len; int * data; } ;
struct TYPE_4__ {TYPE_1__ wpa_ie; } ;
struct ieee_param {TYPE_2__ u; } ;
struct ieee80211_device {scalar_t__ wpa_ie_len; int * wpa_ie; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ieee80211_device*,int *,scalar_t__) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int *,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_device *VAR_4,
         struct ieee_param *VAR_5, int VAR_6)
{
 u8 *VAR_7;

 if (VAR_5->u.wpa_ie.len > VAR_3 ||
     (VAR_5->u.wpa_ie.len && VAR_5->u.wpa_ie.data == ((void*)0)))
  return -VAR_0;

 if (VAR_5->u.wpa_ie.len) {
  VAR_7 = FUNC_2(VAR_5->u.wpa_ie.len, VAR_2);
  if (VAR_7 == ((void*)0))
   return -VAR_1;

  FUNC_3(VAR_7, VAR_5->u.wpa_ie.data, VAR_5->u.wpa_ie.len);
  FUNC_1(VAR_4->wpa_ie);
  VAR_4->wpa_ie = VAR_7;
  VAR_4->wpa_ie_len = VAR_5->u.wpa_ie.len;
 } else {
  FUNC_1(VAR_4->wpa_ie);
  VAR_4->wpa_ie = ((void*)0);
  VAR_4->wpa_ie_len = 0;
 }

 FUNC_0(VAR_4, VAR_4->wpa_ie, VAR_4->wpa_ie_len);
 return 0;
}
