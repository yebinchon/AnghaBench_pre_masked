
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; scalar_t__ data; } ;
typedef TYPE_1__ simple_arg_t ;
typedef int int32_t ;
typedef int esp_event_base_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(void* VAR_1, esp_event_base_t VAR_2, int32_t VAR_3, void* VAR_4)
{
    if (!VAR_1) {
        return;
    }
    simple_arg_t* VAR_5 = (simple_arg_t*) VAR_1;
    FUNC_1(VAR_5->mutex, VAR_0);

    int* VAR_6 = (int*) VAR_5->data;

    if (VAR_4 == ((void*)0)) {
        (*VAR_6)++;
    } else {
        (*VAR_6) += *((int*) VAR_4);
    }

    FUNC_0(VAR_5->mutex);
}
