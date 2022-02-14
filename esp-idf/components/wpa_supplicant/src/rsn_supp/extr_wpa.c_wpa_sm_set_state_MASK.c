
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_sm {int wpa_state; int cm_timer; } ;
typedef enum wpa_states { ____Placeholder_wpa_states } wpa_states ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct wpa_sm*) ;
 int FUNC_1 (int *) ;
 struct wpa_sm VAR_1 ;

void FUNC_2(enum wpa_states VAR_2)
{
       struct wpa_sm *VAR_3 = &VAR_1;
    if(VAR_0==FUNC_0(VAR_3))
        FUNC_1(&(VAR_3->cm_timer));
    VAR_3->wpa_state= VAR_2;
}
