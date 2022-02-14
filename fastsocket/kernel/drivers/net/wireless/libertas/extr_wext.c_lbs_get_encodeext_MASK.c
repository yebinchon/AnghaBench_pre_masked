
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_device {struct lbs_private* ml_priv; } ;
struct enc_key {int len; int flags; scalar_t__ type; int * key; } ;
struct TYPE_4__ {scalar_t__ WPA2enabled; scalar_t__ WPAenabled; scalar_t__ wep_enabled; } ;
struct lbs_private {int wep_tx_keyidx; scalar_t__ mode; struct enc_key wpa_unicast_key; struct enc_key wpa_mcast_key; TYPE_2__ secinfo; TYPE_1__* wep_keys; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; int flags; } ;
struct iw_encode_ext {int ext_flags; scalar_t__ alg; int key_len; int key; } ;
struct TYPE_3__ {int len; int * key; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (struct iw_encode_ext*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_15,
         struct iw_request_info *VAR_16,
         struct iw_point *VAR_17,
         char *VAR_18)
{
 int VAR_19 = -VAR_1;
 struct lbs_private *VAR_20 = VAR_15->ml_priv;
 struct iw_encode_ext *VAR_21 = (struct iw_encode_ext *)VAR_18;
 int VAR_22, VAR_23;

 FUNC_0(VAR_14);

 VAR_23 = VAR_17->length - sizeof(*VAR_21);
 if (VAR_23 < 0)
  goto out;

 VAR_22 = VAR_17->flags & VAR_9;
 if (VAR_22) {
  if (VAR_22 < 1 || VAR_22 > 4)
   goto out;
  VAR_22--;
 } else {
  VAR_22 = VAR_20->wep_tx_keyidx;
 }

 if (!(VAR_21->ext_flags & VAR_8) &&
     VAR_21->alg != VAR_5) {
  if (VAR_22 != 0 || VAR_20->mode != VAR_11)
   goto out;
 }

 VAR_17->flags = VAR_22 + 1;
 FUNC_3(VAR_21, 0, sizeof(*VAR_21));

 if ( !VAR_20->secinfo.wep_enabled
     && !VAR_20->secinfo.WPAenabled
     && !VAR_20->secinfo.WPA2enabled) {
  VAR_21->alg = VAR_3;
  VAR_21->key_len = 0;
  VAR_17->flags |= VAR_6;
 } else {
  u8 *VAR_24 = ((void*)0);

  if ( VAR_20->secinfo.wep_enabled
      && !VAR_20->secinfo.WPAenabled
      && !VAR_20->secinfo.WPA2enabled) {

   VAR_21->alg = VAR_5;
   VAR_21->key_len = VAR_20->wep_keys[VAR_22].len;
   VAR_24 = &VAR_20->wep_keys[VAR_22].key[0];
  } else if ( !VAR_20->secinfo.wep_enabled
             && (VAR_20->secinfo.WPAenabled ||
                 VAR_20->secinfo.WPA2enabled)) {

   struct enc_key * VAR_25 = ((void*)0);

   if ( VAR_20->wpa_mcast_key.len
       && (VAR_20->wpa_mcast_key.flags & VAR_12))
    VAR_25 = &VAR_20->wpa_mcast_key;
   else if ( VAR_20->wpa_unicast_key.len
            && (VAR_20->wpa_unicast_key.flags & VAR_12))
    VAR_25 = &VAR_20->wpa_unicast_key;

   if (VAR_25) {
    if (VAR_25->type == VAR_13) {
     VAR_21->alg = VAR_2;
    } else {
     VAR_21->alg = VAR_4;
    }
    VAR_21->key_len = VAR_25->len;
    VAR_24 = &VAR_25->key[0];
   } else {
    VAR_21->alg = VAR_4;
    VAR_21->key_len = 0;
   }
  } else {
   goto out;
  }

  if (VAR_21->key_len > VAR_23) {
   VAR_19 = -VAR_0;
   goto out;
  }

  if (VAR_21->key_len)
   FUNC_2(VAR_21->key, VAR_24, VAR_21->key_len);
  else
   VAR_17->flags |= VAR_10;
  VAR_17->flags |= VAR_7;
 }
 VAR_19 = 0;

out:
 FUNC_1(VAR_14, "ret %d", VAR_19);
 return VAR_19;
}
