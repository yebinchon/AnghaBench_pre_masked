
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_parse_attr {scalar_t__* selected_registrar; int uuid_r; int authorized_macs_len; int authorized_macs; int * version2; int sel_reg_config_methods; int dev_password_id; int version; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct wps_parse_attr*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (struct wpabuf const*,struct wps_parse_attr*) ;
 scalar_t__ FUNC_4 (int ,int ,int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,int,int) ;
 scalar_t__ FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (int *,int) ;

int FUNC_10(const struct wpabuf *VAR_1)
{
 struct wps_parse_attr *VAR_2;
 int VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_2 = (struct wps_parse_attr *)FUNC_1(sizeof(struct wps_parse_attr));
 if (VAR_2 == ((void*)0)) {
  VAR_5 = -99;
  goto _out;
 }

 if (VAR_1 == ((void*)0)) {
  FUNC_2(VAR_0, "WPS-STRICT: No TLVs in "
      "SetSelectedRegistrar");
  VAR_5 = -1;
  goto _out;
 }
 if (FUNC_3(VAR_1, VAR_2) < 0) {
  FUNC_2(VAR_0, "WPS-STRICT: Failed to parse attributes "
      "in SetSelectedRegistrar");
  VAR_5 = -1;
  goto _out;
 }

 VAR_3 = VAR_2->version2 != ((void*)0);
 VAR_4 = VAR_2->selected_registrar != ((void*)0) &&
  *VAR_2->selected_registrar != 0;
 if (FUNC_8(VAR_2->version, 1) ||
     FUNC_5(VAR_2->dev_password_id, VAR_4) ||
     FUNC_6(VAR_2->sel_reg_config_methods,
      VAR_3, VAR_4) ||
     FUNC_9(VAR_2->version2, VAR_3) ||
     FUNC_4(VAR_2->authorized_macs,
      VAR_2->authorized_macs_len, VAR_3) ||
     FUNC_7(VAR_2->uuid_r, VAR_3)) {
  FUNC_2(VAR_0, "WPS-STRICT: Invalid "
      "SetSelectedRegistrar");






  VAR_5 -1;
  goto _out;

 }

 VAR_5 = 0;
_out:
 if (VAR_2)
  FUNC_0(VAR_2);

 return VAR_5;
}
