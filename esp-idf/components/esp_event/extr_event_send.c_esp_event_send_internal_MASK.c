
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int event_info; int event_id; } ;
typedef TYPE_1__ system_event_t ;
typedef int int32_t ;
typedef int esp_event_base_t ;
typedef scalar_t__ esp_err_t ;
typedef int TickType_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,void*,size_t,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,void*,size_t) ;

esp_err_t FUNC_4(esp_event_base_t VAR_1,
                            int32_t VAR_2,
                            void* VAR_3,
                            size_t VAR_4,
                            TickType_t VAR_5)
{
    system_event_t VAR_6;


    esp_err_t VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
    if (VAR_7 != VAR_0) {
        return VAR_7;
    }

    VAR_6.event_id = FUNC_0(VAR_1, VAR_2);

    if (VAR_3) {
        FUNC_3(&VAR_6.event_info, VAR_3, VAR_4);
    }

    return FUNC_2(&VAR_6);
}
