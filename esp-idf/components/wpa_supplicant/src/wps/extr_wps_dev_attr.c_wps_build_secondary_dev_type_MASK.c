
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_device_data {int num_sec_dev_types; int sec_dev_type; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct wpabuf*,int) ;
 int FUNC_2 (struct wpabuf*,int ,int) ;

int FUNC_3(struct wps_device_data *VAR_3,
      struct wpabuf *VAR_4)
{
 if (!VAR_3->num_sec_dev_types)
  return 0;

 FUNC_0(VAR_1, "WPS:  * Secondary Device Type");
 FUNC_1(VAR_4, VAR_0);
 FUNC_1(VAR_4, VAR_2 * VAR_3->num_sec_dev_types);
 FUNC_2(VAR_4, VAR_3->sec_dev_type,
   VAR_2 * VAR_3->num_sec_dev_types);

 return 0;
}
