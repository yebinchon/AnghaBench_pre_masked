
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int * esp_deep_sleep_wake_stub_fn_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 () ;

esp_deep_sleep_wake_stub_fn_t FUNC_6(void)
{
    FUNC_2(&VAR_2);
    uint32_t VAR_3 = FUNC_0(VAR_1);
    FUNC_5();
    uint32_t VAR_4 = FUNC_0(VAR_1);
    FUNC_1(VAR_1, VAR_3);
    FUNC_3(&VAR_2);

    if(VAR_3 != VAR_4) {
        return ((void*)0);
    }
    esp_deep_sleep_wake_stub_fn_t VAR_5 = (esp_deep_sleep_wake_stub_fn_t) FUNC_0(VAR_0);
    if (!FUNC_4(VAR_5)) {
        return ((void*)0);
    }
    return VAR_5;
}
