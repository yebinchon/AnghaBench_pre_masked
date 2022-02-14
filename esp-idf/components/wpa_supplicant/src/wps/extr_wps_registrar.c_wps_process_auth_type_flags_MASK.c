
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wps_data {int auth_type; TYPE_1__* wps; } ;
struct TYPE_2__ {int auth_types; } ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static int FUNC_2(struct wps_data *VAR_1, const u8 *VAR_2)
{
 u16 VAR_3;

 if (VAR_2 == ((void*)0)) {
  FUNC_1(VAR_0, "WPS: No Authentication Type flags "
      "received");
  return -1;
 }

 VAR_3 = FUNC_0(VAR_2);

 FUNC_1(VAR_0, "WPS: Enrollee Authentication Type flags 0x%x",
     VAR_3);
 VAR_1->auth_type = VAR_1->wps->auth_types & VAR_3;
 if (VAR_1->auth_type == 0) {
  FUNC_1(VAR_0, "WPS: No match in supported "
      "authentication types (own 0x%x Enrollee 0x%x)",
      VAR_1->wps->auth_types, VAR_3);
  return -1;

 }

 return 0;
}
