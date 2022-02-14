
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int system_event_cb_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_2 () ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

esp_err_t FUNC_3(system_event_cb_t VAR_9, void *VAR_10)
{
    if (VAR_8) {
        FUNC_0(VAR_4, "system event loop already initialized");
        return VAR_0;
    }

    esp_err_t VAR_11 = FUNC_2();
    if (VAR_11 != VAR_2 && VAR_11 != VAR_0) {
        return VAR_11;
    }

    VAR_11 = FUNC_1(VAR_3, VAR_1, VAR_5, ((void*)0));
    if (VAR_11 != VAR_2) {
        return VAR_11;
    }

    VAR_8 = 1;
    VAR_7 = VAR_9;
    VAR_6 = VAR_10;
    return VAR_2;
}
