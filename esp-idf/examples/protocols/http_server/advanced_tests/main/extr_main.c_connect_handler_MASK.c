
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int * httpd_handle_t ;
typedef int esp_event_base_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int * FUNC_1 () ;

__attribute__((used)) static void FUNC_2(void* VAR_1, esp_event_base_t VAR_2,
                            int32_t VAR_3, void* VAR_4)
{
    httpd_handle_t* VAR_5 = (httpd_handle_t*) VAR_1;
    if (*VAR_5 == ((void*)0)) {
        FUNC_0(VAR_0, "Starting webserver");
        *VAR_5 = FUNC_1();
    }
}
