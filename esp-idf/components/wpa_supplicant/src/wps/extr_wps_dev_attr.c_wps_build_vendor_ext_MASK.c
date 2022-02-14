
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_device_data {int ** vendor_ext; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wpabuf*,int ) ;
 int FUNC_4 (struct wpabuf*,int *) ;

int FUNC_5(struct wps_device_data *VAR_3, struct wpabuf *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_3->vendor_ext[VAR_5] == ((void*)0))
   continue;
  FUNC_0(VAR_2, "WPS:  * Vendor Extension",
       FUNC_1(VAR_3->vendor_ext[VAR_5]),
       FUNC_2(VAR_3->vendor_ext[VAR_5]));
  FUNC_3(VAR_4, VAR_0);
  FUNC_3(VAR_4, FUNC_2(VAR_3->vendor_ext[VAR_5]));
  FUNC_4(VAR_4, VAR_3->vendor_ext[VAR_5]);
 }

 return 0;
}
