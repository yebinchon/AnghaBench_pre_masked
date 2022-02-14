
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_parse_attr {int network_key_shareable; int mac_addr; int encr_type; int network_key_len; int network_key; int network_key_idx; int auth_type; int ssid_len; int ssid; int network_idx; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct wps_parse_attr*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct wpabuf*,int const*,size_t) ;
 scalar_t__ FUNC_4 (struct wpabuf*,struct wps_parse_attr*) ;
 scalar_t__ FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (int ,int ,int ,int) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (int ,int ,int) ;

__attribute__((used)) static int FUNC_13(const u8 *VAR_1, size_t VAR_2)
{
 struct wps_parse_attr *VAR_3;
 struct wpabuf VAR_4;
 int VAR_5;

 VAR_3 = (struct wps_parse_attr *)FUNC_1(sizeof(struct wps_parse_attr));
 if (VAR_3 == ((void*)0)) {
  VAR_5 = -99;
  goto _out;
 }

 if (VAR_1 == ((void*)0)) {
  VAR_5 = -1;
  goto _out;
 }
 FUNC_3(&VAR_4, VAR_1, VAR_2);
 if (FUNC_4(&VAR_4, VAR_3) < 0) {
  FUNC_2(VAR_0, "WPS-STRICT: Failed to parse Credential");
  VAR_5 = -1;
  goto _out;
 }

 if (FUNC_8(VAR_3->network_idx, 1) ||
     FUNC_12(VAR_3->ssid, VAR_3->ssid_len, 1) ||
     FUNC_5(VAR_3->auth_type, 1) ||
     FUNC_6(VAR_3->encr_type, 1) ||
     FUNC_10(VAR_3->network_key_idx, 0) ||
     FUNC_9(VAR_3->network_key, VAR_3->network_key_len,
         VAR_3->encr_type, 1) ||
     FUNC_7(VAR_3->mac_addr, 1) ||
     FUNC_11(VAR_3->network_key_shareable, 0))
 {
  FUNC_2(VAR_0, "WPS-STRICT: Invalid Credential");
  VAR_5 = -1;
  goto _out;
 }

 VAR_5 = 0;
_out:
 if (VAR_3)
  FUNC_0(VAR_3);

 return VAR_5;
}
