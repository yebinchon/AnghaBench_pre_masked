
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_parse_attr {int key_wrap_auth; int encr_type; int network_key_len; int network_key; int network_key_idx; int auth_type; int mac_addr; int ssid_len; int ssid; int e_snonce2; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct wps_parse_attr*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (struct wpabuf const*,struct wps_parse_attr*) ;
 scalar_t__ FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (int ,int ,int ,int) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ,int ,int) ;

int FUNC_12(const struct wpabuf *VAR_1, int VAR_2, int VAR_3)
{
 struct wps_parse_attr *VAR_4;
 int VAR_5;

 VAR_4 = (struct wps_parse_attr *)FUNC_1(sizeof(struct wps_parse_attr));
 if (VAR_4 == ((void*)0)) {
  VAR_5 = -99;
  goto _out;
 }

 if (VAR_1 == ((void*)0)) {
  FUNC_2(VAR_0, "WPS-STRICT: No TLVs in M7 encrypted "
      "settings");
  VAR_5 = -1;
  goto _out;
 }
 if (FUNC_3(VAR_1, VAR_4) < 0) {
  FUNC_2(VAR_0, "WPS-STRICT: Failed to parse attributes "
      "in M7 encrypted settings");
  VAR_5 = -1;
  goto _out;
 }

 if (FUNC_5(VAR_4->e_snonce2, 1) ||
     FUNC_11(VAR_4->ssid, VAR_4->ssid_len, !VAR_2) ||
     FUNC_8(VAR_4->mac_addr, !VAR_2) ||
     FUNC_4(VAR_4->auth_type, !VAR_2) ||
     FUNC_6(VAR_4->encr_type, !VAR_2) ||
     FUNC_10(VAR_4->network_key_idx, 0) ||
     FUNC_9(VAR_4->network_key, VAR_4->network_key_len,
         VAR_4->encr_type, !VAR_2) ||
     FUNC_7(VAR_4->key_wrap_auth, 1)) {
  FUNC_2(VAR_0, "WPS-STRICT: Invalid M7 encrypted "
      "settings");






  VAR_5 = -1;
  goto _out;

 }

 VAR_5 = 0;
_out:
 if (VAR_4)
  FUNC_0(VAR_4);

 return VAR_5;
}
