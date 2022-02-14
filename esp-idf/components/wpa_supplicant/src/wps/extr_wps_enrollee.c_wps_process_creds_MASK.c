
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wps_data {TYPE_1__* wps; } ;
struct TYPE_2__ {scalar_t__ ap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct wps_data*,int const*,size_t,int) ;

__attribute__((used)) static int FUNC_2(struct wps_data *VAR_1, const u8 *VAR_2[],
        size_t VAR_3[], size_t VAR_4, int VAR_5)
{
 size_t VAR_6;
 int VAR_7 = 0;

 if (VAR_1->wps->ap)
  return 0;

 if (VAR_4 == 0) {
  FUNC_0(VAR_0, "WPS: No Credential attributes "
      "received");
  return -1;
 }

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  int VAR_8;
  VAR_8 = FUNC_1(VAR_1, VAR_2[VAR_6], VAR_3[VAR_6], VAR_5);
  if (VAR_8 == 0)
   VAR_7++;
  else if (VAR_8 == -2) {
   FUNC_0(VAR_0, "WPS: WEP credential skipped");
  }
  else
   return -1;
 }

 if (VAR_7 == 0) {
  FUNC_0(VAR_0, "WPS: No valid Credential attribute "
      "received");
  return -1;
 }

 return 0;
}
