
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_state_machine {int started; void* AuthenticationRequest; void* Init; void* ReAuthenticationRequest; int key_replay; int addr; scalar_t__ ft_completed; } ;
struct TYPE_2__ {int wpa; } ;
struct wpa_authenticator {TYPE_1__ conf; } ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct wpa_authenticator*,int ,int ,char*) ;
 int FUNC_2 (struct wpa_state_machine*) ;

int FUNC_3(struct wpa_authenticator *VAR_3,
                struct wpa_state_machine *VAR_4)
{
    if (VAR_3 == ((void*)0) || !VAR_3->conf.wpa || VAR_4 == ((void*)0))
        return -1;
    if (VAR_4->started) {
        FUNC_0(&VAR_4->key_replay, 0, sizeof(VAR_4->key_replay));
        VAR_4->ReAuthenticationRequest = VAR_2;
        return FUNC_2(VAR_4);
    }

    VAR_4->started = 1;

    VAR_4->Init = VAR_2;
    if (FUNC_2(VAR_4) == 1)
        return 1;
    VAR_4->Init = VAR_0;
    VAR_4->AuthenticationRequest = VAR_2;
    return FUNC_2(VAR_4);
}
