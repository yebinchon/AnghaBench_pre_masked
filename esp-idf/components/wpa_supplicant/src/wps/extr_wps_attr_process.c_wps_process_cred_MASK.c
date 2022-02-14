
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_parse_attr {int ap_channel; int dot1x_enabled; int key_prov_auto; int eap_identity_len; int eap_identity; int eap_type_len; int eap_type; int mac_addr; int network_key_len; int network_key; int network_key_idx; int encr_type; int auth_type; int ssid_len; int ssid; int network_idx; } ;
struct wps_credential {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct wps_credential*,int ) ;
 scalar_t__ FUNC_2 (struct wps_credential*,int ) ;
 scalar_t__ FUNC_3 (struct wps_credential*,int ) ;
 scalar_t__ FUNC_4 (struct wps_credential*,int ,int ) ;
 scalar_t__ FUNC_5 (struct wps_credential*,int ,int ) ;
 scalar_t__ FUNC_6 (struct wps_credential*,int ) ;
 scalar_t__ FUNC_7 (struct wps_credential*,int ) ;
 scalar_t__ FUNC_8 (struct wps_credential*,int ) ;
 scalar_t__ FUNC_9 (struct wps_credential*,int ) ;
 scalar_t__ FUNC_10 (struct wps_credential*,int ,int ) ;
 scalar_t__ FUNC_11 (struct wps_credential*,int ) ;
 scalar_t__ FUNC_12 (struct wps_credential*,int ,int ) ;
 int FUNC_13 (struct wps_credential*) ;

int FUNC_14(struct wps_parse_attr *VAR_1,
       struct wps_credential *VAR_2)
{
 FUNC_0(VAR_0, "WPS: Process Credential");


 if (FUNC_9(VAR_2, VAR_1->network_idx) ||
     FUNC_12(VAR_2, VAR_1->ssid, VAR_1->ssid_len) ||
     FUNC_3(VAR_2, VAR_1->auth_type) ||
     FUNC_6(VAR_2, VAR_1->encr_type) ||
     FUNC_11(VAR_2, VAR_1->network_key_idx) ||
     FUNC_10(VAR_2, VAR_1->network_key,
      VAR_1->network_key_len) ||
     FUNC_8(VAR_2, VAR_1->mac_addr) ||
     FUNC_5(VAR_2, VAR_1->eap_type,
          VAR_1->eap_type_len) ||
     FUNC_4(VAR_2, VAR_1->eap_identity,
       VAR_1->eap_identity_len) ||
     FUNC_7(VAR_2, VAR_1->key_prov_auto) ||
     FUNC_1(VAR_2, VAR_1->dot1x_enabled) ||
     FUNC_2(VAR_2, VAR_1->ap_channel))
  return -1;

 return FUNC_13(VAR_2);
}
