
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_parse_attr {int * version2; int registrar_nonce; int enrollee_nonce; int msg_type; int version; } ;
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
 scalar_t__ FUNC_8 (int *,int) ;

int FUNC_9(const struct wpabuf *VAR_1)
{
 struct wps_parse_attr *VAR_2;
 int VAR_3;
 int VAR_4;

 VAR_2 = (struct wps_parse_attr *)FUNC_1(sizeof(struct wps_parse_attr));
 if (VAR_2 == ((void*)0)) {
  VAR_4 = -99;
  goto _out;
 }

 if (VAR_1 == ((void*)0)) {
  FUNC_2(VAR_0, "WPS-STRICT: No TLVs in WSC_Done");
  VAR_4 = -1;
  goto _out;
 }
 if (FUNC_3(VAR_1, VAR_2) < 0) {
  FUNC_2(VAR_0, "WPS-STRICT: Failed to parse attributes "
      "in WSC_Done");
  VAR_4 = -1;
  goto _out;
 }

 VAR_3 = VAR_2->version2 != ((void*)0);
 if (FUNC_7(VAR_2->version, 1) ||
     FUNC_5(VAR_2->msg_type, 1) ||
     FUNC_4(VAR_2->enrollee_nonce, 1) ||
     FUNC_6(VAR_2->registrar_nonce, 1) ||
     FUNC_8(VAR_2->version2, VAR_3)) {
  FUNC_2(VAR_0, "WPS-STRICT: Invalid WSC_Done");






  VAR_4 = -1;
  goto _out;

 }

 VAR_4 = 0;
_out:
 if (VAR_2)
  FUNC_0(VAR_2);

 return VAR_4;
}
