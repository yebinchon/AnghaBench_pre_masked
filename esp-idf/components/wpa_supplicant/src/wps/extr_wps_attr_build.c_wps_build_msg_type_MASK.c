
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
typedef enum wps_msg_type { ____Placeholder_wps_msg_type } wps_msg_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct wpabuf*,int) ;
 int FUNC_2 (struct wpabuf*,int) ;

int FUNC_3(struct wpabuf *VAR_2, enum wps_msg_type VAR_3)
{
 FUNC_0(VAR_1, "WPS:  * Message Type (%d)", VAR_3);
 FUNC_1(VAR_2, VAR_0);
 FUNC_1(VAR_2, 1);
 FUNC_2(VAR_2, VAR_3);
 return 0;
}
