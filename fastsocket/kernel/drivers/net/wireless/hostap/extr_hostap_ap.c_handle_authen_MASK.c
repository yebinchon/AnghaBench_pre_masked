
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_8__ {int * challenge; } ;
struct TYPE_7__ {scalar_t__ last_beacon; } ;
struct TYPE_9__ {TYPE_2__ sta; TYPE_1__ ap; } ;
struct sta_info {int listen_interval; int users; int last_rx; TYPE_3__ u; scalar_t__ flags; scalar_t__ ap; int addr; struct lib80211_crypt_data* crypt; } ;
struct sk_buff {int* data; int len; } ;
struct net_device {int name; int * dev_addr; } ;
struct lib80211_crypt_data {int dummy; } ;
struct ieee80211_hdr {char* addr2; int frame_control; } ;
struct hostap_80211_rx_status {int dummy; } ;
struct ap_data {scalar_t__ num_sta; int tx_callback_auth; int mac_restrictions; int sta_table_lock; } ;
struct TYPE_10__ {struct lib80211_crypt_data** crypt; } ;
struct TYPE_11__ {int auth_algs; struct ap_data* ap; TYPE_4__ crypt_info; struct net_device* dev; } ;
typedef TYPE_5__ local_info_t ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,int ,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;


 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_1 (int ) ;
 struct sta_info* FUNC_2 (struct ap_data*,char*) ;
 int * FUNC_3 (struct ap_data*) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 struct sta_info* FUNC_5 (struct ap_data*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 size_t FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_17 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int *,char*,int) ;
 int FUNC_14 (int *,int *,int) ;
 int FUNC_15 (struct net_device*,int,char*,int,char*,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_19(local_info_t *VAR_18, struct sk_buff *VAR_19,
     struct hostap_80211_rx_status *VAR_20)
{
 struct net_device *VAR_21 = VAR_18->dev;
 struct ieee80211_hdr *VAR_22 = (struct ieee80211_hdr *) VAR_19->data;
 size_t VAR_23;
 struct ap_data *VAR_24 = VAR_18->ap;
 char VAR_25[8 + VAR_9], *VAR_26 = ((void*)0);
 int VAR_27, VAR_28;
 u16 VAR_29, VAR_30, VAR_31;
 __le16 *VAR_32;
 u16 VAR_33 = VAR_13;
 struct sta_info *VAR_34 = ((void*)0);
 struct lib80211_crypt_data *VAR_35;
 char *VAR_36 = "";

 VAR_27 = VAR_19->len - VAR_4;

 VAR_23 = FUNC_9(VAR_22->frame_control);

 if (VAR_27 < 6) {
  FUNC_0(VAR_0, "%s: handle_authen - too short payload "
         "(len=%d) from %pM\n", VAR_21->name, VAR_27, VAR_22->addr2);
  return;
 }

 FUNC_16(&VAR_18->ap->sta_table_lock);
 VAR_34 = FUNC_5(VAR_18->ap, VAR_22->addr2);
 if (VAR_34)
  FUNC_7(&VAR_34->users);
 FUNC_17(&VAR_18->ap->sta_table_lock);

 if (VAR_34 && VAR_34->crypt)
  VAR_35 = VAR_34->crypt;
 else {
  int VAR_37 = 0;
  if (VAR_19->len >= VAR_23 + 3)
   VAR_37 = VAR_19->data[VAR_23 + 3] >> 6;
  VAR_35 = VAR_18->crypt_info.crypt[VAR_37];
 }

 VAR_32 = (__le16 *) (VAR_19->data + VAR_4);
 VAR_29 = FUNC_1(*VAR_32);
 VAR_32++;
 VAR_30 = FUNC_1(*VAR_32);
 VAR_32++;
 VAR_31 = FUNC_1(*VAR_32);
 VAR_32++;

 if (FUNC_13(VAR_21->dev_addr, VAR_22->addr2, VAR_1) == 0 ||
     FUNC_4(&VAR_24->mac_restrictions, VAR_22->addr2)) {
  VAR_36 = "authentication denied";
  VAR_33 = VAR_15;
  goto fail;
 }

 if (((VAR_18->auth_algs & VAR_7) &&
      VAR_29 == 129) ||
     ((VAR_18->auth_algs & VAR_8) &&
      VAR_35 && VAR_29 == 128)) {
 } else {
  VAR_36 = "unsupported algorithm";
  VAR_33 = VAR_12;
  goto fail;
 }

 if (VAR_27 >= 8) {
  u8 *VAR_38 = (u8 *) VAR_32;
  if (*VAR_38 == VAR_10) {
   if (*(VAR_38 + 1) != VAR_9) {
    VAR_36 = "invalid challenge len";
    VAR_33 = VAR_11;
    goto fail;
   }
   if (VAR_27 - 8 < VAR_9) {
    VAR_36 = "challenge underflow";
    VAR_33 = VAR_11;
    goto fail;
   }
   VAR_26 = (char *) (VAR_38 + 2);
  }
 }

 if (VAR_34 && VAR_34->ap) {
  if (FUNC_18(VAR_17, VAR_34->u.ap.last_beacon +
          (10 * VAR_34->listen_interval * VAR_2) / 1024)) {
   FUNC_0(VAR_0, "%s: no beacons received for a while,"
          " assuming AP %pM is now STA\n",
          VAR_21->name, VAR_34->addr);
   VAR_34->ap = 0;
   VAR_34->flags = 0;
   VAR_34->u.sta.challenge = ((void*)0);
  } else {
   VAR_36 = "AP trying to authenticate?";
   VAR_33 = VAR_15;
   goto fail;
  }
 }

 if ((VAR_29 == 129 && VAR_30 == 1) ||
     (VAR_29 == 128 &&
      (VAR_30 == 1 ||
       (VAR_30 == 3 && VAR_34 != ((void*)0) &&
        VAR_34->u.sta.challenge != ((void*)0))))) {
 } else {
  VAR_36 = "unknown authentication transaction number";
  VAR_33 = VAR_14;
  goto fail;
 }

 if (VAR_34 == ((void*)0)) {
  VAR_36 = "new STA";

  if (VAR_18->ap->num_sta >= VAR_6) {

   VAR_36 = "no more room for new STAs";
   VAR_33 = VAR_15;
   goto fail;
  }

  VAR_34 = FUNC_2(VAR_18->ap, VAR_22->addr2);
  if (VAR_34 == ((void*)0)) {
   VAR_36 = "ap_add_sta failed";
   VAR_33 = VAR_15;
   goto fail;
  }
 }

 switch (VAR_29) {
 case 129:
  VAR_36 = "authOK";





  VAR_34->flags |= VAR_16;
  break;

 case 128:
  if (VAR_30 == 1) {
   if (VAR_34->u.sta.challenge == ((void*)0)) {
    VAR_34->u.sta.challenge =
     FUNC_3(VAR_18->ap);
    if (VAR_34->u.sta.challenge == ((void*)0)) {
     VAR_33 = VAR_15;
     goto fail;
    }
   }
  } else {
   if (VAR_34->u.sta.challenge == ((void*)0) ||
       VAR_26 == ((void*)0) ||
       FUNC_13(VAR_34->u.sta.challenge, VAR_26,
       VAR_9) != 0 ||
       !FUNC_10(VAR_22->frame_control)) {
    VAR_36 = "challenge response incorrect";
    VAR_33 = VAR_11;
    goto fail;
   }

   VAR_36 = "challenge OK - authOK";





   VAR_34->flags |= VAR_16;
   FUNC_11(VAR_34->u.sta.challenge);
   VAR_34->u.sta.challenge = ((void*)0);
  }
  break;
 }

 fail:
 VAR_32 = (__le16 *) VAR_25;
 *VAR_32 = FUNC_8(VAR_29);
 VAR_32++;
 *VAR_32 = FUNC_8(VAR_30 + 1);
 VAR_32++;
 *VAR_32 = FUNC_8(VAR_33);
 VAR_32++;
 VAR_28 = 6;

 if (VAR_33 == VAR_13 && VAR_34 != ((void*)0) &&
     VAR_34->u.sta.challenge != ((void*)0) &&
     VAR_29 == 128 && VAR_30 == 1) {
  u8 *VAR_39 = (u8 *) VAR_32;
  *VAR_39++ = VAR_10;
  *VAR_39++ = VAR_9;
  VAR_32++;
  FUNC_14(VAR_32, VAR_34->u.sta.challenge, VAR_9);
  VAR_28 += 2 + VAR_9;
 }

 FUNC_15(VAR_21, VAR_3 | VAR_5,
    VAR_25, VAR_28, VAR_22->addr2, VAR_24->tx_callback_auth);

 if (VAR_34) {
  VAR_34->last_rx = VAR_17;
  FUNC_6(&VAR_34->users);
 }

 if (VAR_33) {
  FUNC_0(VAR_0, "%s: %pM auth (alg=%d "
         "trans#=%d stat=%d len=%d fc=%04x) ==> %d (%s)\n",
         VAR_21->name, VAR_22->addr2,
         VAR_29, VAR_30, VAR_31, VAR_27,
         FUNC_12(VAR_22->frame_control), VAR_33, VAR_36);
 }
}
