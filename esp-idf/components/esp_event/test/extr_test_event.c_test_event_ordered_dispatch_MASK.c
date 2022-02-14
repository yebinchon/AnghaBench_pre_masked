
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* arr; int index; } ;
typedef TYPE_1__ ordered_data_t ;
typedef int int32_t ;
typedef int esp_event_base_t ;



__attribute__((used)) static void FUNC_0(void* VAR_0, esp_event_base_t VAR_1, int32_t VAR_2, void* VAR_3)
{
    int *VAR_4 = (int*) VAR_0;
    ordered_data_t *VAR_5 = *((ordered_data_t**) (VAR_3));

    VAR_5->arr[VAR_5->index++] = *VAR_4;
}
