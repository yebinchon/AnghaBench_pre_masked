
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_parse_attr {int key_wrap_auth; int r_snonce2; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct wps_parse_attr*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (struct wpabuf const*,struct wps_parse_attr*) ;
 scalar_t__ FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,int) ;

int FUNC_6(const struct wpabuf *VAR_1, int VAR_2)
{
 struct wps_parse_attr *VAR_3;
 int VAR_4;

 VAR_3 = (struct wps_parse_attr *)FUNC_1(sizeof(struct wps_parse_attr));
 if (VAR_3 == ((void*)0)) {
  VAR_4 = -99;
  goto _out;
 }

 if (VAR_1 == ((void*)0)) {
  FUNC_2(VAR_0, "WPS-STRICT: No TLVs in M6 encrypted "
      "settings");
  VAR_4 = -1;
  goto _out;
 }
 if (FUNC_3(VAR_1, VAR_3) < 0) {
  FUNC_2(VAR_0, "WPS-STRICT: Failed to parse attributes "
      "in M6 encrypted settings");
  VAR_4 = -1;
  goto _out;
 }

 if (FUNC_5(VAR_3->r_snonce2, 1) ||
     FUNC_4(VAR_3->key_wrap_auth, 1)) {
  FUNC_2(VAR_0, "WPS-STRICT: Invalid M6 encrypted "
      "settings");






  VAR_4 = -1;
  goto _out;

 }

 VAR_4 = 0;
_out:
 if (VAR_3)
  FUNC_0(VAR_3);

 return VAR_4;
}
