
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_context {int ap_setup_locked; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct wpabuf*,int) ;
 int FUNC_2 (struct wpabuf*,int) ;

__attribute__((used)) static int FUNC_3(struct wps_context *VAR_2,
         struct wpabuf *VAR_3)
{
 if (VAR_2->ap_setup_locked && VAR_2->ap_setup_locked != 2) {
  FUNC_0(VAR_1, "WPS:  * AP Setup Locked");
  FUNC_1(VAR_3, VAR_0);
  FUNC_1(VAR_3, 1);
  FUNC_2(VAR_3, 1);
 }
 return 0;
}
