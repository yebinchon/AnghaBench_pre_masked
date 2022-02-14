
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mutex; scalar_t__ data; } ;
typedef TYPE_1__ simple_arg_t ;
typedef scalar_t__ int32_t ;
typedef int esp_event_loop_handle_t ;
typedef scalar_t__ esp_event_base_t ;
typedef int SemaphoreHandle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,scalar_t__,int ,int *,int ,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(void* VAR_6, esp_event_base_t VAR_7, int32_t VAR_8, void* VAR_9)
{
    simple_arg_t* VAR_10 = (simple_arg_t*) VAR_6;

    esp_event_loop_handle_t* VAR_11 = (esp_event_loop_handle_t*) VAR_9;
    int* VAR_12 = (int*) VAR_10->data;

    (*VAR_12)++;

    if (*VAR_12 <= 2) {
        if (VAR_7 == VAR_5 && VAR_8 == VAR_2) {
            FUNC_0(VAR_1, FUNC_1(*VAR_11, VAR_5, VAR_3, ((void*)0), 0, VAR_4));
        } else{
            FUNC_2((SemaphoreHandle_t) VAR_10->mutex);
        }
    } else {


        if (VAR_7 == VAR_5 && VAR_8 == VAR_2) {
            FUNC_3((SemaphoreHandle_t) VAR_10->mutex, VAR_4);
            FUNC_0(VAR_1, FUNC_1(*VAR_11, VAR_5, VAR_3, ((void*)0), 0, VAR_4));
            FUNC_0(VAR_0, FUNC_1(*VAR_11, VAR_5, VAR_3, ((void*)0), 0, VAR_4));
        }
    }
}
