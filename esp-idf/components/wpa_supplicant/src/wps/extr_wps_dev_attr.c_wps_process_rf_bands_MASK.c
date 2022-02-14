
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_device_data {int rf_bands; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;

int FUNC_1(struct wps_device_data *VAR_1, const u8 *VAR_2)
{
 if (VAR_2 == ((void*)0)) {
  FUNC_0(VAR_0, "WPS: No RF Bands received");
  return -1;
 }

 VAR_1->rf_bands = *VAR_2;
 FUNC_0(VAR_0, "WPS: Enrollee RF Bands 0x%x", VAR_1->rf_bands);

 return 0;
}
