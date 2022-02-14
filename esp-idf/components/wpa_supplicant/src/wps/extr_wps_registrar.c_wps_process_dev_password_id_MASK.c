
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_data {int dev_pw_id; } ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static int FUNC_2(struct wps_data *VAR_1, const u8 *VAR_2)
{
 if (VAR_2 == ((void*)0)) {
  FUNC_1(VAR_0, "WPS: No Device Password ID received");
  return -1;
 }

 VAR_1->dev_pw_id = FUNC_0(VAR_2);
 FUNC_1(VAR_0, "WPS: Device Password ID %d", VAR_1->dev_pw_id);

 return 0;
}
