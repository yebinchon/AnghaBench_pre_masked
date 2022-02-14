
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * bssid; int band; int channel; int ssid_len; int ssid; } ;
struct lbs_private {int wpa_ie_len; int wpa_ie; int secinfo; int wpa_unicast_key; int wpa_mcast_key; int wep_tx_keyidx; int * wep_keys; TYPE_1__ curbssparams; int mode; struct assoc_request* pending_assoc_req; } ;
struct lbs_802_11_security {int dummy; } ;
struct enc_key {int dummy; } ;
struct assoc_request {int wpa_ie_len; int wpa_ie; int flags; int secinfo; int wpa_unicast_key; int wpa_mcast_key; int wep_tx_keyidx; int * wep_keys; int bssid; int mode; int band; int channel; int ssid_len; int ssid; } ;


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
 struct assoc_request* FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int ,int *) ;

struct assoc_request *FUNC_6(struct lbs_private *VAR_16)
{
 struct assoc_request * VAR_17;

 FUNC_1(VAR_14);
 if (!VAR_16->pending_assoc_req) {
  VAR_16->pending_assoc_req = FUNC_0(sizeof(struct assoc_request),
                                       VAR_12);
  if (!VAR_16->pending_assoc_req) {
   FUNC_3("Not enough memory to allocate association"
    " request!\n");
   return ((void*)0);
  }
 }




 VAR_17 = VAR_16->pending_assoc_req;
 if (!FUNC_5(VAR_5, &VAR_17->flags)) {
  FUNC_4(&VAR_17->ssid, &VAR_16->curbssparams.ssid,
         VAR_13);
  VAR_17->ssid_len = VAR_16->curbssparams.ssid_len;
 }

 if (!FUNC_5(VAR_2, &VAR_17->flags))
  VAR_17->channel = VAR_16->curbssparams.channel;

 if (!FUNC_5(VAR_0, &VAR_17->flags))
  VAR_17->band = VAR_16->curbssparams.band;

 if (!FUNC_5(VAR_3, &VAR_17->flags))
  VAR_17->mode = VAR_16->mode;

 if (!FUNC_5(VAR_1, &VAR_17->flags)) {
  FUNC_4(&VAR_17->bssid, VAR_16->curbssparams.bssid,
   VAR_11);
 }

 if (!FUNC_5(VAR_6, &VAR_17->flags)) {
  int VAR_18;
  for (VAR_18 = 0; VAR_18 < 4; VAR_18++) {
   FUNC_4(&VAR_17->wep_keys[VAR_18], &VAR_16->wep_keys[VAR_18],
    sizeof(struct enc_key));
  }
 }

 if (!FUNC_5(VAR_7, &VAR_17->flags))
  VAR_17->wep_tx_keyidx = VAR_16->wep_tx_keyidx;

 if (!FUNC_5(VAR_9, &VAR_17->flags)) {
  FUNC_4(&VAR_17->wpa_mcast_key, &VAR_16->wpa_mcast_key,
   sizeof(struct enc_key));
 }

 if (!FUNC_5(VAR_10, &VAR_17->flags)) {
  FUNC_4(&VAR_17->wpa_unicast_key, &VAR_16->wpa_unicast_key,
   sizeof(struct enc_key));
 }

 if (!FUNC_5(VAR_4, &VAR_17->flags)) {
  FUNC_4(&VAR_17->secinfo, &VAR_16->secinfo,
   sizeof(struct lbs_802_11_security));
 }

 if (!FUNC_5(VAR_8, &VAR_17->flags)) {
  FUNC_4(&VAR_17->wpa_ie, &VAR_16->wpa_ie,
   VAR_15);
  VAR_17->wpa_ie_len = VAR_16->wpa_ie_len;
 }

 FUNC_2(VAR_14);
 return VAR_17;
}
