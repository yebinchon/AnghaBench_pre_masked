
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int bssid; } ;
struct wps_sm {TYPE_2__ config; TYPE_1__* wps; } ;
struct TYPE_3__ {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct wps_sm* VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

void
FUNC_4(void)
{
    struct wps_sm *VAR_5 = VAR_4;

    if (!VAR_5) {
        return;
    }

    if (VAR_5->wps->state == VAR_3) {
        FUNC_0(VAR_0, "wps msg timeout WPS_FINISHED");
        FUNC_2();
    } else if (VAR_5->wps->state == VAR_1) {
        FUNC_0(VAR_0, "wps msg timeout RECV_M2");
        FUNC_0(VAR_0, "wps recev m2/m2d timeout------>");
        FUNC_1(VAR_5->config.bssid);
        FUNC_3(VAR_2);
    }
}
