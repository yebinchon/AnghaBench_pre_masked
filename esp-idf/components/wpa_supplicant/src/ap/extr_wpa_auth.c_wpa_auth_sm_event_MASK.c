
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wpa_event ;
struct wpa_state_machine {int started; int ft_completed; int PTK; void* PTK_valid; scalar_t__ mgmt_frame_prot; void* ReAuthenticationRequest; void* PtkGroupInit; void* GUpdateStationKeys; TYPE_1__* group; void* AuthenticationRequest; void* Init; void* DeauthenticationRequest; } ;
struct TYPE_2__ {int GKeyDoneStations; } ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;







 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct wpa_state_machine*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct wpa_state_machine*) ;
 int FUNC_4 (struct wpa_state_machine*) ;

int FUNC_5(struct wpa_state_machine *VAR_3, wpa_event VAR_4)
{
    int VAR_5 = 1;

    if (VAR_3 == ((void*)0))
        return -1;

    switch (VAR_4) {
    case 132:
    case 134:
        break;
    case 131:
    case 130:
        VAR_3->DeauthenticationRequest = VAR_2;
        break;
    case 129:
    case 128:
        if (!VAR_3->started) {







            FUNC_2( VAR_1, "WPA state machine had not been "
                   "started - initialize now");
            VAR_3->started = 1;
            VAR_3->Init = VAR_2;
            if (FUNC_4(VAR_3) == 1)
                return 1;
            VAR_3->Init = VAR_0;
            VAR_3->AuthenticationRequest = VAR_2;
            break;
        }
        if (VAR_3->GUpdateStationKeys) {




            VAR_3->group->GKeyDoneStations--;
            VAR_3->GUpdateStationKeys = VAR_0;
            VAR_3->PtkGroupInit = VAR_2;
        }
        VAR_3->ReAuthenticationRequest = VAR_2;
        break;
    case 133:
        break;

    }
    if (VAR_5) {
        VAR_3->PTK_valid = VAR_0;
        FUNC_0(&VAR_3->PTK, 0, sizeof(VAR_3->PTK));

        if (VAR_4 != 128)
            FUNC_3(VAR_3);
    }

    return FUNC_4(VAR_3);
}
