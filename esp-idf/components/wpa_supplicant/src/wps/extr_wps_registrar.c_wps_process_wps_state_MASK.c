
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static int FUNC_1(struct wps_data *VAR_1, const u8 *VAR_2)
{
 if (VAR_2 == ((void*)0)) {
  FUNC_0(VAR_0, "WPS: No Wi-Fi Protected Setup State "
      "received");
  return -1;
 }

 FUNC_0(VAR_0, "WPS: Enrollee Wi-Fi Protected Setup State %d",
     *VAR_2);

 return 0;
}
