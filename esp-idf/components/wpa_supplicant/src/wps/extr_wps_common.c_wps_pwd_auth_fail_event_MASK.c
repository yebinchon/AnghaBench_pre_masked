
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enrollee; int part; } ;
union wps_event_data {TYPE_1__ pwd_auth_fail; } ;
struct wps_context {int cb_ctx; int (* event_cb ) (int ,int ,union wps_event_data*) ;} ;


 int VAR_0 ;
 int FUNC_0 (union wps_event_data*) ;
 int FUNC_1 (union wps_event_data*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ,union wps_event_data*) ;

void FUNC_4(struct wps_context *VAR_1, int VAR_2, int VAR_3)
{
 union wps_event_data *VAR_4;

        VAR_4 = (union wps_event_data *)FUNC_2(sizeof(union wps_event_data));
 if (VAR_4 == ((void*)0))
  return;

 if (VAR_1->event_cb == ((void*)0)) {
  FUNC_0(VAR_4);
  return;
 }

 FUNC_1(VAR_4, 0, sizeof(union wps_event_data));
 VAR_4->pwd_auth_fail.enrollee = VAR_2;
 VAR_4->pwd_auth_fail.part = VAR_3;
 VAR_1->event_cb(VAR_1->cb_ctx, VAR_0, VAR_4);
 FUNC_0(VAR_4);
}
