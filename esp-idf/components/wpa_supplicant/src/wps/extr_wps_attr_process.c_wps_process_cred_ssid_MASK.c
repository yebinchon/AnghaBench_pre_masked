
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wps_credential {size_t ssid_len; int ssid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__ const*,size_t) ;
 int FUNC_1 (int ,char*,scalar_t__ const*,size_t) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct wps_credential *VAR_1, const u8 *VAR_2,
     size_t VAR_3)
{
 if (VAR_2 == ((void*)0)) {
  FUNC_2(VAR_0, "WPS: Credential did not include SSID");
  return -1;
 }



 while (VAR_3 > 0 && VAR_2[VAR_3 - 1] == 0)
  VAR_3--;

 FUNC_1(VAR_0, "WPS: SSID", VAR_2, VAR_3);
 if (VAR_3 <= sizeof(VAR_1->ssid)) {
  FUNC_0(VAR_1->ssid, VAR_2, VAR_3);
  VAR_1->ssid_len = VAR_3;
 }

 return 0;
}
