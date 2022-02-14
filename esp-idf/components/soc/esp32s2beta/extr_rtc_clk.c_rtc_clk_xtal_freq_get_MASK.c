
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int rtc_xtal_freq_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

rtc_xtal_freq_t FUNC_4(void)
{

    uint32_t VAR_3 = FUNC_0(VAR_1);
    if (!FUNC_2(VAR_3)) {
        FUNC_1(VAR_2, "invalid RTC_XTAL_FREQ_REG value: 0x%08x", VAR_3);
        return VAR_0;
    }
    return FUNC_3(VAR_3);
}
