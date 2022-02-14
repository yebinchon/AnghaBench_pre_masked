
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_event_loop_handle_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void* VAR_3)
{
    esp_err_t VAR_4;
    esp_event_loop_handle_t VAR_5 = (esp_event_loop_handle_t) VAR_3;

    FUNC_0(VAR_1, "running task for loop %p", VAR_5);

    while(1) {
        VAR_4 = FUNC_2(VAR_5, VAR_2);
        if (VAR_4 != VAR_0) {
            break;
        }
    }

    FUNC_1(VAR_1, "suspended task for loop %p", VAR_5);
    FUNC_3(((void*)0));
}
