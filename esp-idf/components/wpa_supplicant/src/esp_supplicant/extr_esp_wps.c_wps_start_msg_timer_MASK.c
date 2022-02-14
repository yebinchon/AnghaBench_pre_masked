
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct wps_sm {int wps_msg_timeout_timer; TYPE_1__* wps; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *) ;
 struct wps_sm* VAR_4 ;
 int FUNC_2 (int ,char*,int) ;

int FUNC_3(void)
{
    struct wps_sm *VAR_5 = VAR_4;
    uint32_t VAR_6;
    int VAR_7 = VAR_0;

    if (!VAR_4) {
        return VAR_0;
    }

    if (VAR_5->wps->state == VAR_3) {
        VAR_6 = 100;
        FUNC_2(VAR_1, "start msg timer WPS_FINISHED %d ms", VAR_6);
        FUNC_1(&VAR_5->wps_msg_timeout_timer);
        FUNC_0(&VAR_5->wps_msg_timeout_timer, VAR_6, 0);
        VAR_7 = 0;
    } else if (VAR_5->wps->state == VAR_2) {
        VAR_6 = 5000;
        FUNC_2(VAR_1, "start msg timer RECV_M2 %d ms", VAR_6);
        FUNC_1(&VAR_5->wps_msg_timeout_timer);
        FUNC_0(&VAR_5->wps_msg_timeout_timer, VAR_6, 0);
        VAR_7 = 0;
    }
    return VAR_7;
}
