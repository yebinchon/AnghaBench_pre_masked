
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct wpa_state_machine {int dummy; } ;
struct hostapd_data {TYPE_2__* wpa_auth; } ;
struct TYPE_5__ {scalar_t__ wpa; } ;
struct TYPE_6__ {TYPE_1__ conf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,struct wpa_state_machine*) ;
 int FUNC_2 (struct wpa_state_machine*) ;
 struct wpa_state_machine* FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (int ,char*,struct wpa_state_machine*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,struct wpa_state_machine*,int *,int ) ;

bool FUNC_6(void** VAR_1, uint8_t *VAR_2, uint8_t *VAR_3, uint8_t VAR_4)
{
    struct hostapd_data *VAR_5 = (struct hostapd_data*)FUNC_0();
    struct wpa_state_machine **VAR_6;

    if (!VAR_1 || !VAR_2 || !VAR_3){
        return 0;
    }


    VAR_6 = (struct wpa_state_machine **)VAR_1;

    if (VAR_5) {
        if (VAR_5->wpa_auth->conf.wpa) {
            if (*VAR_6){
                FUNC_2(*VAR_6);
            }

            *VAR_6 = FUNC_3(VAR_5->wpa_auth, VAR_2);
            FUNC_4( VAR_0, "init wpa sm=%p\n", *VAR_6);

            if (*VAR_6 == ((void*)0)) {
                return 0;
            }

            if (FUNC_5(VAR_5->wpa_auth, *VAR_6, VAR_3, VAR_4)) {
                return 0;
            }
        }

        FUNC_1(VAR_5->wpa_auth, *VAR_6);
    }

    return 1;
}
