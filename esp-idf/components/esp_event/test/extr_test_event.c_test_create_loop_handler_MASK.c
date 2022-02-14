
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32_t ;
typedef int esp_event_loop_handle_t ;
typedef int esp_event_loop_args_t ;
typedef int esp_event_base_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void* VAR_2, esp_event_base_t VAR_3, int32_t VAR_4, void* VAR_5)
{
    esp_event_loop_args_t VAR_6 = FUNC_3();

    if (VAR_4 == VAR_1) {
        FUNC_0(VAR_0, FUNC_1(&VAR_6, (esp_event_loop_handle_t*) VAR_2));
    } else {
        FUNC_0(VAR_0, FUNC_2(*((esp_event_loop_handle_t*) VAR_2)));
    }
}
