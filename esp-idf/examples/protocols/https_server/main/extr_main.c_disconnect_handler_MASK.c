
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int * httpd_handle_t ;
typedef int esp_event_base_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(void* VAR_0, esp_event_base_t VAR_1,
                               int32_t VAR_2, void* VAR_3)
{
    httpd_handle_t* VAR_4 = (httpd_handle_t*) VAR_0;
    if (*VAR_4) {
        FUNC_0(*VAR_4);
        *VAR_4 = ((void*)0);
    }
}
