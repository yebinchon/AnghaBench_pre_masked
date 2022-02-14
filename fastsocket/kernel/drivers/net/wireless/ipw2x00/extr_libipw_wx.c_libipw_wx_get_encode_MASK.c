
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iw_point {int flags; int length; } ;
union iwreq_data {struct iw_point encoding; } ;
struct libipw_security {int* key_sizes; int * keys; int enabled; } ;
struct TYPE_2__ {int tx_keyidx; struct lib80211_crypt_data** crypt; } ;
struct libipw_device {scalar_t__ open_wep; TYPE_1__ crypt_info; struct libipw_security sec; } ;
struct lib80211_crypt_data {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int VAR_6 ;
 int FUNC_1 (char*,int ,int) ;

int FUNC_2(struct libipw_device *VAR_7,
       struct iw_request_info *VAR_8,
       union iwreq_data *VAR_9, char *VAR_10)
{
 struct iw_point *VAR_11 = &(VAR_9->encoding);
 int VAR_12, VAR_13;
 struct lib80211_crypt_data *VAR_14;
 struct libipw_security *VAR_15 = &VAR_7->sec;

 FUNC_0("GET_ENCODE\n");

 VAR_13 = VAR_11->flags & VAR_3;
 if (VAR_13) {
  if (VAR_13 > VAR_6)
   return -VAR_0;
  VAR_13--;
 } else
  VAR_13 = VAR_7->crypt_info.tx_keyidx;

 VAR_14 = VAR_7->crypt_info.crypt[VAR_13];
 VAR_11->flags = VAR_13 + 1;

 if (!VAR_15->enabled) {
  VAR_11->length = 0;
  VAR_11->flags |= VAR_1;
  return 0;
 }

 VAR_12 = VAR_15->key_sizes[VAR_13];
 FUNC_1(VAR_10, VAR_15->keys[VAR_13], VAR_12);

 VAR_11->length = VAR_12;
 VAR_11->flags |= VAR_2;

 if (VAR_7->open_wep)
  VAR_11->flags |= VAR_4;
 else
  VAR_11->flags |= VAR_5;

 return 0;
}
