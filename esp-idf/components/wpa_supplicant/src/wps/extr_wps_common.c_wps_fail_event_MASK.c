
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msg; void* error_indication; void* config_error; } ;
union wps_event_data {TYPE_1__ fail; } ;
typedef void* u16 ;
struct wps_context {int cb_ctx; int (* event_cb ) (int ,int ,union wps_event_data*) ;} ;
typedef enum wps_msg_type { ____Placeholder_wps_msg_type } wps_msg_type ;


 int VAR_0 ;
 int FUNC_0 (union wps_event_data*) ;
 int FUNC_1 (union wps_event_data*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ,union wps_event_data*) ;

void FUNC_4(struct wps_context *VAR_1, enum wps_msg_type VAR_2,
      u16 VAR_3, u16 VAR_4)
{
 union wps_event_data *VAR_5;

        VAR_5 = (union wps_event_data *)FUNC_2(sizeof(union wps_event_data));
 if (VAR_5 == ((void*)0))
  return;

 if (VAR_1->event_cb == ((void*)0)) {
  FUNC_0(VAR_5);
  return;
 }

 FUNC_1(VAR_5, 0, sizeof(union wps_event_data));
 VAR_5->fail.msg = VAR_2;
 VAR_5->fail.config_error = VAR_3;
 VAR_5->fail.error_indication = VAR_4;
 VAR_1->event_cb(VAR_1->cb_ctx, VAR_0, VAR_5);
 FUNC_0(VAR_5);
}
