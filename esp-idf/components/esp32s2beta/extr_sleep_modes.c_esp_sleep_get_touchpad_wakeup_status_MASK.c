
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int touch_pad_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;

touch_pad_t FUNC_3(void)
{
    if (FUNC_1() != VAR_1) {
        return VAR_2;
    }
    touch_pad_t VAR_3;
    esp_err_t VAR_4 = FUNC_2(&VAR_3);
    FUNC_0(VAR_4 == VAR_0 && "wakeup reason is RTC_TOUCH_TRIG_EN but SENS_TOUCH_MEAS_EN is zero");
    return VAR_3;
}
