
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int rtc_cal_sel_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int const) ;

__attribute__((used)) static uint32_t FUNC_2(rtc_cal_sel_t VAR_0, const char* VAR_1)
{
    const uint32_t VAR_2 = 1000;
    const float VAR_3 = (1 << 19) * 1000.0f;
    uint32_t VAR_4;
    FUNC_0("%s:\n", VAR_1);
    for (int VAR_5 = 0; VAR_5 < 5; ++VAR_5) {
        FUNC_0("calibrate (%d): ", VAR_5);
        VAR_4 = FUNC_1(VAR_0, VAR_2);
        FUNC_0("%.3f kHz\n", VAR_3 / (float) VAR_4);
    }
    return VAR_4;
}
