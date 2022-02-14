
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_credential {scalar_t__ key_len; int key; } ;
struct wpabuf {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,scalar_t__) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct wpabuf*,scalar_t__) ;
 int FUNC_3 (struct wpabuf*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct wpabuf *VAR_2,
          const struct wps_credential *VAR_3)
{
 FUNC_1(VAR_1, "WPS:  * Network Key (len=%d)",
     (int) VAR_3->key_len);
 FUNC_0(VAR_1, "WPS: Network Key",
   VAR_3->key, VAR_3->key_len);
 FUNC_2(VAR_2, VAR_0);
 FUNC_2(VAR_2, VAR_3->key_len);
 FUNC_3(VAR_2, VAR_3->key, VAR_3->key_len);
 return 0;
}
