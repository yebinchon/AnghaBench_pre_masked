
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int event_id; } ;
typedef TYPE_1__ system_event_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,TYPE_1__*,int,int ) ;
 int VAR_3 ;

esp_err_t FUNC_2(system_event_t *VAR_4)
{
    if (!VAR_3) {
        FUNC_0(VAR_2, "system event loop not initialized via esp_event_loop_init");
        return VAR_0;
    }

    return FUNC_1(VAR_1, VAR_4->event_id, VAR_4, sizeof(*VAR_4), 0);
}
