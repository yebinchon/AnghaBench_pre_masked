
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_data {int authkey; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int const*,size_t,int *) ;
 scalar_t__ FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (int ,char*) ;
 int * FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (struct wpabuf*) ;

int FUNC_5(struct wps_data *VAR_4, struct wpabuf *VAR_5,
         const u8 *VAR_6)
{
 u8 VAR_7[VAR_1];
 const u8 *VAR_8;
 size_t VAR_9;

 if (VAR_6 == ((void*)0)) {
  FUNC_2(VAR_0, "WPS: No KWA in decrypted attribute");
  return -1;
 }

 VAR_8 = FUNC_3(VAR_5);
 VAR_9 = FUNC_4(VAR_5) - 4 - VAR_3;
 if (VAR_8 + VAR_9 != VAR_6 - 4) {
  FUNC_2(VAR_0, "WPS: KWA not in the end of the "
      "decrypted attribute");
  return -1;
 }

 FUNC_0(VAR_4->authkey, VAR_2, VAR_8, VAR_9, VAR_7);
 if (FUNC_1(VAR_7, VAR_6, VAR_3) != 0) {
  FUNC_2(VAR_0, "WPS: Invalid KWA");
  return -1;
 }

 return 0;
}
