
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {int mac_control; int lock; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int flags; scalar_t__ length; } ;
struct iw_encode_ext {int alg; int ext_flags; scalar_t__ key_len; int key; } ;
struct enc_key {int type; int flags; scalar_t__ len; int key; } ;
struct TYPE_2__ {int WPAenabled; int WPA2enabled; int key_mgmt; int auth_mode; int wep_enabled; } ;
struct assoc_request {scalar_t__ mode; TYPE_1__ secinfo; int flags; struct enc_key wpa_unicast_key; struct enc_key wpa_mcast_key; int wep_tx_keyidx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (struct assoc_request*) ;
 int FUNC_1 (struct assoc_request*) ;
 int FUNC_2 (struct lbs_private*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char*,scalar_t__,int) ;
 int FUNC_6 (struct lbs_private*) ;
 struct assoc_request* FUNC_7 (struct lbs_private*) ;
 int FUNC_8 (struct lbs_private*) ;
 int FUNC_9 (struct assoc_request*,int ,scalar_t__,int,int) ;
 int FUNC_10 (int ,int ,scalar_t__) ;
 int FUNC_11 (struct enc_key*,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int ,int,int*,int*) ;

__attribute__((used)) static int FUNC_16(struct net_device *VAR_31,
         struct iw_request_info *VAR_32,
         struct iw_point *VAR_33,
         char *VAR_34)
{
 int VAR_35 = 0;
 struct lbs_private *VAR_36 = VAR_31->ml_priv;
 struct iw_encode_ext *VAR_37 = (struct iw_encode_ext *)VAR_34;
 int VAR_38 = VAR_37->alg;
 struct assoc_request * VAR_39;

 FUNC_3(VAR_30);

 FUNC_12(&VAR_36->lock);
 VAR_39 = FUNC_7(VAR_36);
 if (!VAR_39) {
  VAR_35 = -VAR_7;
  goto out;
 }

 if ((VAR_38 == VAR_13) || (VAR_33->flags & VAR_16)) {
  FUNC_0 (VAR_39);
  FUNC_1 (VAR_39);
 } else if (VAR_38 == VAR_15) {
  u16 VAR_40 = 0, VAR_41, VAR_42 = 0;

  VAR_35 = FUNC_15(VAR_39->wep_tx_keyidx,
                           (VAR_33->flags & VAR_19),
                           &VAR_41, &VAR_40);
  if (VAR_35)
   goto out;




  if ( !VAR_39->secinfo.wep_enabled
      || (VAR_33->length == 0 && !VAR_40)
      || (VAR_37->ext_flags & VAR_18))
   VAR_42 = 1;


  VAR_35 = FUNC_9(VAR_39, VAR_37->key, VAR_37->key_len, VAR_41,
     VAR_42);
  if (VAR_35)
   goto out;

  if (VAR_33->flags & VAR_21) {
   VAR_39->secinfo.auth_mode = VAR_9;
  } else if (VAR_33->flags & VAR_20) {
   VAR_39->secinfo.auth_mode = VAR_8;
  }


  FUNC_14(VAR_0, &VAR_39->flags);
  if (VAR_33->length)
   FUNC_14(VAR_1, &VAR_39->flags);
  if (VAR_42)
   FUNC_14(VAR_2, &VAR_39->flags);
 } else if ((VAR_38 == VAR_14) || (VAR_38 == VAR_12)) {
  struct enc_key * VAR_43;


  if (((VAR_38 == VAR_14)
   && (VAR_37->key_len != VAR_27))
      || ((VAR_38 == VAR_12)
          && (VAR_37->key_len != VAR_26))) {
    FUNC_5("invalid size %d for key of alg "
           "type %d\n",
           VAR_37->key_len,
           VAR_38);
    VAR_35 = -VAR_6;
    goto out;
  }

  if (VAR_37->ext_flags & VAR_17) {
   VAR_43 = &VAR_39->wpa_mcast_key;
   FUNC_14(VAR_3, &VAR_39->flags);
  } else {
   VAR_43 = &VAR_39->wpa_unicast_key;
   FUNC_14(VAR_4, &VAR_39->flags);
  }

  FUNC_11(VAR_43, 0, sizeof (struct enc_key));
  FUNC_10(VAR_43->key, VAR_37->key, VAR_37->key_len);
  VAR_43->len = VAR_37->key_len;
  if (VAR_43->len)
   VAR_43->flags |= VAR_23;


  if (VAR_37->ext_flags & VAR_17) {
   VAR_43->flags |= VAR_24;
  } else {
   VAR_43->flags |= VAR_25;
  }

  if (VAR_38 == VAR_14) {
   VAR_43->type = VAR_29;
  } else if (VAR_38 == VAR_12) {
   VAR_43->type = VAR_28;
  }


  if ( VAR_39->secinfo.WPAenabled == 0
      && VAR_39->secinfo.WPA2enabled == 0) {
   VAR_39->secinfo.WPAenabled = 1;
   VAR_39->secinfo.WPA2enabled = 1;
   FUNC_14(VAR_0, &VAR_39->flags);
  }


  if (VAR_36->mac_control & VAR_5)
   FUNC_0(VAR_39);
 }

out:
 if (VAR_35 == 0) {





  if (VAR_39->mode == VAR_22 &&
      ((VAR_39->secinfo.key_mgmt & VAR_10) ||
       (VAR_39->secinfo.key_mgmt & VAR_11) ||
        VAR_39->secinfo.WPAenabled ||
        VAR_39->secinfo.WPA2enabled)) {
   FUNC_6(VAR_36);
  } else
   FUNC_8(VAR_36);
 } else {
  FUNC_2(VAR_36);
 }
 FUNC_13(&VAR_36->lock);

 FUNC_4(VAR_30, "ret %d", VAR_35);
 return VAR_35;
}
