
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ length; } ;
union iwreq_data {TYPE_1__ data; } ;
typedef int u8 ;
struct net_device {int dummy; } ;
struct libipw_device {scalar_t__ wpa_ie_len; int * wpa_ie; int wpa_enabled; } ;
struct iw_request_info {int dummy; } ;
struct ipw2100_priv {struct libipw_device* ieee; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct ipw2100_priv*,int *,scalar_t__) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,scalar_t__,int ) ;
 struct ipw2100_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_5,
    struct iw_request_info *VAR_6,
    union iwreq_data *VAR_7, char *VAR_8)
{

 struct ipw2100_priv *VAR_9 = FUNC_3(VAR_5);
 struct libipw_device *VAR_10 = VAR_9->ieee;
 u8 *VAR_11;

 if (!VAR_10->wpa_enabled)
  return -VAR_2;

 if (VAR_7->data.length > VAR_4 ||
     (VAR_7->data.length && VAR_8 == ((void*)0)))
  return -VAR_0;

 if (VAR_7->data.length) {
  VAR_11 = FUNC_2(VAR_8, VAR_7->data.length, VAR_3);
  if (VAR_11 == ((void*)0))
   return -VAR_1;

  FUNC_1(VAR_10->wpa_ie);
  VAR_10->wpa_ie = VAR_11;
  VAR_10->wpa_ie_len = VAR_7->data.length;
 } else {
  FUNC_1(VAR_10->wpa_ie);
  VAR_10->wpa_ie = ((void*)0);
  VAR_10->wpa_ie_len = 0;
 }

 FUNC_0(VAR_9, VAR_10->wpa_ie, VAR_10->wpa_ie_len);

 return 0;
}
