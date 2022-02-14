
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_device_data {scalar_t__ serial_number; } ;
struct wpabuf {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct wpabuf*,size_t) ;
 int FUNC_3 (struct wpabuf*,scalar_t__,size_t) ;
 int FUNC_4 (struct wpabuf*,char) ;

__attribute__((used)) static int FUNC_5(struct wps_device_data *VAR_2,
       struct wpabuf *VAR_3)
{
 size_t VAR_4;
 FUNC_1(VAR_1, "WPS:  * Serial Number");
 FUNC_2(VAR_3, VAR_0);
 VAR_4 = VAR_2->serial_number ? FUNC_0(VAR_2->serial_number) : 0;

 if (VAR_4 == 0) {





  FUNC_2(VAR_3, 1);
  FUNC_4(VAR_3, ' ');
  return 0;
 }

 FUNC_2(VAR_3, VAR_4);
 FUNC_3(VAR_3, VAR_2->serial_number, VAR_4);
 return 0;
}
