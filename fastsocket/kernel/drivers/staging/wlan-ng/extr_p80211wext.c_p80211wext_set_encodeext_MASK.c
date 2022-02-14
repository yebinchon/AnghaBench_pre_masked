
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int * wep_keys; scalar_t__* wep_keylens; } ;
typedef TYPE_3__ wlandevice_t ;
struct iw_point {int flags; } ;
union iwreq_data {struct iw_point encoding; } ;
typedef int u8 ;
struct net_device {TYPE_3__* ml_priv; } ;
struct iw_request_info {int dummy; } ;
struct iw_encode_ext {int ext_flags; scalar_t__ alg; scalar_t__ key_len; int key; } ;
struct TYPE_9__ {int data; } ;
struct TYPE_12__ {int msgcode; TYPE_1__ mibattribute; } ;
typedef TYPE_4__ p80211msg_dot11req_mibset_t ;
struct TYPE_10__ {scalar_t__ len; int data; } ;
struct TYPE_13__ {int did; TYPE_2__ data; } ;
typedef TYPE_5__ p80211item_pstr32_t ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_13,
        struct iw_request_info *VAR_14,
        union iwreq_data *VAR_15, char *VAR_16)
{
 wlandevice_t *VAR_17 = VAR_13->ml_priv;
 struct iw_encode_ext *VAR_18 = (struct iw_encode_ext *)VAR_16;
 p80211msg_dot11req_mibset_t VAR_19;
 p80211item_pstr32_t *VAR_20;

 int VAR_21 = 0;
 struct iw_point *VAR_22 = &VAR_15->encoding;
 int VAR_23 = VAR_22->flags & VAR_11;

 FUNC_4("set_encode_ext flags[%d] alg[%d] keylen[%d]\n",
   VAR_18->ext_flags, (int)VAR_18->alg, (int)VAR_18->key_len);

 if (VAR_18->ext_flags & VAR_9) {


  if (VAR_23) {
   if (VAR_23 < 1 || VAR_23 > VAR_12)
    return -VAR_7;
   else
    VAR_23--;
  }
  FUNC_4("setting default key (%d)\n", VAR_23);
  VAR_21 =
      FUNC_3(VAR_17,
      VAR_0,
      VAR_23);
  if (VAR_21)
   return -VAR_6;
 }

 if (VAR_18->ext_flags & VAR_10) {
  if (VAR_18->alg != VAR_8) {
   FUNC_4("asked to set a non wep key :(\n");
   return -VAR_7;
  }
  if (VAR_23) {
   if (VAR_23 < 1 || VAR_23 > VAR_12)
    return -VAR_7;
   else
    VAR_23--;
  }
  FUNC_4("Set WEP key (%d)\n", VAR_23);
  VAR_17->wep_keylens[VAR_23] = VAR_18->key_len;
  FUNC_0(VAR_17->wep_keys[VAR_23], VAR_18->key, VAR_18->key_len);

  FUNC_1(&VAR_19, 0, sizeof(VAR_19));
  VAR_20 = (p80211item_pstr32_t *) & VAR_19.mibattribute.data;
  FUNC_0(VAR_20->data.data, VAR_18->key, VAR_18->key_len);
  VAR_20->data.len = VAR_18->key_len;
  switch (VAR_23) {
  case 0:
   VAR_20->did =
       VAR_1;
   break;
  case 1:
   VAR_20->did =
       VAR_2;
   break;
  case 2:
   VAR_20->did =
       VAR_3;
   break;
  case 3:
   VAR_20->did =
       VAR_4;
   break;
  default:
   break;
  }
  VAR_19.msgcode = VAR_5;
  VAR_21 = FUNC_2(VAR_17, (u8 *) & VAR_19);
  FUNC_4("result (%d)\n", VAR_21);
 }
 return VAR_21;
}
