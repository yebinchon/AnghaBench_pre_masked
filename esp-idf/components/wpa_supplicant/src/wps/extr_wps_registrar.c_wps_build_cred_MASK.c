
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char u8 ;
struct wps_credential {int ssid_len; int auth_type; int encr_type; int key_len; struct wps_credential* mac_addr; struct wps_credential* key; struct wps_credential* ssid; } ;
struct wps_data {char* use_cred; int auth_type; int encr_type; char* mac_addr_e; char* new_psk; int new_psk_len; TYPE_2__* wps; struct wps_credential cred; scalar_t__ use_psk_key; } ;
struct wpabuf {int dummy; } ;
typedef int r ;
typedef int dummy ;
struct TYPE_4__ {char* ssid; int ssid_len; scalar_t__ wps_state; char* network_key; int network_key_len; TYPE_1__* registrar; scalar_t__ psk_set; scalar_t__ ap; } ;
struct TYPE_3__ {struct wpabuf* extra_cred; int disable_auto_conf; scalar_t__ skip_cred_build; } ;


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
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct wps_credential*,char*,int) ;
 int FUNC_3 (struct wps_credential*,int ,int) ;
 scalar_t__ FUNC_4 (char*,int) ;
 int FUNC_5 (int ,char*,char*,int) ;
 int FUNC_6 (int ,char*,struct wpabuf*) ;
 int FUNC_7 (int ,char*,char*,int) ;
 int FUNC_8 (int ,char*,...) ;
 struct wpabuf* FUNC_9 (int) ;
 int FUNC_10 (struct wpabuf*) ;
 int FUNC_11 (struct wpabuf*) ;
 int FUNC_12 (struct wpabuf*,int ) ;
 int FUNC_13 (struct wpabuf*,struct wpabuf*) ;
 scalar_t__ FUNC_14 (struct wpabuf*,struct wps_credential*) ;
 scalar_t__ VAR_12 ;

int FUNC_15(struct wps_data *VAR_13, struct wpabuf *VAR_14)
{
 struct wpabuf *VAR_15;

 if (VAR_13->wps->registrar->skip_cred_build)
  goto skip_cred_build;

 FUNC_8(VAR_2, "WPS:  * Credential");
 if (VAR_13->use_cred) {
  FUNC_2(&VAR_13->cred, VAR_13->use_cred, sizeof(VAR_13->cred));
  goto use_provided;
 }
 FUNC_3(&VAR_13->cred, 0, sizeof(VAR_13->cred));

 FUNC_2(VAR_13->cred.ssid, VAR_13->wps->ssid, VAR_13->wps->ssid_len);
 VAR_13->cred.ssid_len = VAR_13->wps->ssid_len;


 if (VAR_13->auth_type & VAR_4)
  VAR_13->auth_type = VAR_4;
 else if (VAR_13->auth_type & VAR_5)
  VAR_13->auth_type = VAR_5;
 else if (VAR_13->auth_type & VAR_11)
  VAR_13->auth_type = VAR_11;
 else if (VAR_13->auth_type & VAR_3)
  VAR_13->auth_type = VAR_3;
 else {
  FUNC_8(VAR_2, "WPS: Unsupported auth_type 0x%x",
      VAR_13->auth_type);
  return -1;
 }
 VAR_13->cred.auth_type = VAR_13->auth_type;

 if (VAR_13->auth_type == VAR_4 ||
     VAR_13->auth_type == VAR_5) {
  if (VAR_13->encr_type & VAR_6)
   VAR_13->encr_type = VAR_6;
  else if (VAR_13->encr_type & VAR_8)
   VAR_13->encr_type = VAR_8;
  else {
   FUNC_8(VAR_2, "WPS: No suitable encryption "
       "type for WPA/WPA2");
   return -1;
  }
 } else {
  if (VAR_13->encr_type & VAR_9)
   VAR_13->encr_type = VAR_9;
  else if (VAR_13->encr_type & VAR_7)
   VAR_13->encr_type = VAR_7;
  else {
   FUNC_8(VAR_2, "WPS: No suitable encryption "
       "type for non-WPA/WPA2 mode");
   return -1;
  }
 }
 VAR_13->cred.encr_type = VAR_13->encr_type;



 FUNC_2(VAR_13->cred.mac_addr, VAR_13->mac_addr_e, VAR_1);

 if (VAR_13->wps->wps_state == VAR_10 && VAR_13->wps->ap &&
     !VAR_13->wps->registrar->disable_auto_conf) {
  u8 VAR_16[16];

  if (FUNC_4(VAR_16, sizeof(VAR_16)) < 0)
   return -1;
  FUNC_0(VAR_13->new_psk);
  if (VAR_13->new_psk == ((void*)0))
   return -1;
  VAR_13->new_psk_len--;
  while (VAR_13->new_psk_len &&
         VAR_13->new_psk[VAR_13->new_psk_len - 1] == '=')
   VAR_13->new_psk_len--;
  FUNC_5(VAR_2, "WPS: Generated passphrase",
          VAR_13->new_psk, VAR_13->new_psk_len);
  FUNC_2(VAR_13->cred.key, VAR_13->new_psk, VAR_13->new_psk_len);
  VAR_13->cred.key_len = VAR_13->new_psk_len;
 } else if (VAR_13->use_psk_key && VAR_13->wps->psk_set) {
  char VAR_17[65];
  FUNC_8(VAR_2, "WPS: Use PSK format for Network Key");
  FUNC_2(VAR_13->cred.key, VAR_17, 32 * 2);
  VAR_13->cred.key_len = 32 * 2;
 } else if (VAR_13->wps->network_key) {
  FUNC_2(VAR_13->cred.key, VAR_13->wps->network_key,
     VAR_13->wps->network_key_len);
  VAR_13->cred.key_len = VAR_13->wps->network_key_len;
 } else if (VAR_13->auth_type & (VAR_5 | VAR_4)) {
  char VAR_18[65];

  FUNC_0(VAR_13->new_psk);
  VAR_13->new_psk_len = 32;
  VAR_13->new_psk = (u8 *)FUNC_1(VAR_13->new_psk_len);
  if (VAR_13->new_psk == ((void*)0))
   return -1;
  if (FUNC_4(VAR_13->new_psk, VAR_13->new_psk_len) < 0) {
   FUNC_0(VAR_13->new_psk);
   VAR_13->new_psk = ((void*)0);
   return -1;
  }
  FUNC_7(VAR_2, "WPS: Generated per-device PSK",
    VAR_13->new_psk, VAR_13->new_psk_len);
  FUNC_2(VAR_13->cred.key, VAR_18, VAR_13->new_psk_len * 2);
  VAR_13->cred.key_len = VAR_13->new_psk_len * 2;
 }

use_provided:
 VAR_15 = FUNC_9(200);
 if (VAR_15 == ((void*)0))
  return -1;

 if (FUNC_14(VAR_15, &VAR_13->cred)) {
  FUNC_10(VAR_15);
  return -1;
 }

 FUNC_12(VAR_14, VAR_0);
 FUNC_12(VAR_14, FUNC_11(VAR_15));
 FUNC_13(VAR_14, VAR_15);
 FUNC_10(VAR_15);

skip_cred_build:
 if (VAR_13->wps->registrar->extra_cred) {
  FUNC_8(VAR_2, "WPS:  * Credential (pre-configured)");
  FUNC_13(VAR_14, VAR_13->wps->registrar->extra_cred);
 }

 return 0;
}
