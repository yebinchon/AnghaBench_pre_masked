
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wpa_state_machine {scalar_t__ in_step_loop; int TimeoutEvt; scalar_t__ pending_1_of_4_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct wpa_state_machine* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct wpa_state_machine*) ;

int FUNC_3(void *VAR_4)
{
    u32 VAR_5 = (u32)VAR_4;
    struct wpa_state_machine *VAR_6 = FUNC_0(VAR_5);

    FUNC_1( VAR_1, "resend eapol1");

    if(VAR_6) {
        VAR_6->pending_1_of_4_timeout = 0;
        VAR_6->TimeoutEvt = VAR_3;
        VAR_6->in_step_loop = 0;
        FUNC_2(VAR_6);
    } else {
     FUNC_1( VAR_2, "Station left, stop send EAPOL frame");
    }

    return VAR_0;
}
