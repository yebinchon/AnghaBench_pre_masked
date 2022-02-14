
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int esp_event_loop_handle_t ;
typedef int esp_event_base_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,void (*) (void*,int ,int ,void*)) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(void* VAR_2, esp_event_base_t VAR_3, int32_t VAR_4, void* VAR_5)
{
    esp_event_loop_handle_t* VAR_6 = (esp_event_loop_handle_t*) VAR_5;
    int* VAR_7 = (int*) VAR_2;

    (*VAR_7) += (VAR_3 == VAR_1 ? 0 : 10) + VAR_4 + 1;


    FUNC_0(VAR_0, FUNC_1(*VAR_6, VAR_3, VAR_4, FUNC_2));
}
