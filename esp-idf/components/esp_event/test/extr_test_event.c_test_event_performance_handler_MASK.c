
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ performed; scalar_t__ expected; int done; } ;
typedef TYPE_1__ performance_data_t ;
typedef int int32_t ;
typedef int esp_event_base_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void* VAR_0, esp_event_base_t VAR_1, int32_t VAR_2, void* VAR_3)
{
    performance_data_t* VAR_4 = (performance_data_t*) VAR_0;

    VAR_4->performed++;

    if (VAR_4->performed >= VAR_4->expected) {
        FUNC_0(VAR_4->done);
    }
}
