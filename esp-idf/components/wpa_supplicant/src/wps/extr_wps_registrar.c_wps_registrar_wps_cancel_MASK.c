
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_registrar {scalar_t__ selected_registrar; scalar_t__ pbc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct wps_registrar*,int *,int ) ;
 int FUNC_2 (struct wps_registrar*) ;
 int FUNC_3 (struct wps_registrar*) ;

int FUNC_4(struct wps_registrar *VAR_1)
{
 if (VAR_1->pbc) {
  FUNC_0(VAR_0, "WPS: PBC is set - cancelling it");
  FUNC_2(VAR_1);

  return 1;
 } else if (VAR_1->selected_registrar) {
 }
 return 0;
}
