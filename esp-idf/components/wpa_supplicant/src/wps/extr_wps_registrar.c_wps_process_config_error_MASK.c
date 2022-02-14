
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wps_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static int FUNC_2(struct wps_data *VAR_1, const u8 *VAR_2)
{
 u16 VAR_3;

 if (VAR_2 == ((void*)0)) {
  FUNC_1(VAR_0, "WPS: No Configuration Error received");
  return -1;
 }

 VAR_3 = FUNC_0(VAR_2);
 FUNC_1(VAR_0, "WPS: Enrollee Configuration Error %d", VAR_3);

 return 0;
}
