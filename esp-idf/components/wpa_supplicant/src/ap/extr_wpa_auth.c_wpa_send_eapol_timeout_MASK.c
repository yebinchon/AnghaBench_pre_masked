
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_state_machine {int TimeoutEvt; scalar_t__ pending_1_of_4_timeout; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_state_machine*) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, void *VAR_2)
{
    struct wpa_state_machine *VAR_3 = VAR_2;

    VAR_3->pending_1_of_4_timeout = 0;
    VAR_3->TimeoutEvt = VAR_0;
    FUNC_0(VAR_3);
}
