
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ rtc_xtal_freq_t ;
typedef int rtc_cal_sel_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 () ;

uint32_t FUNC_2(rtc_cal_sel_t VAR_2, uint32_t VAR_3)
{
    rtc_xtal_freq_t VAR_4 = FUNC_1();
    uint64_t VAR_5 = FUNC_0(VAR_2, VAR_3);
    uint64_t VAR_6 = ((uint64_t)VAR_4) * VAR_3;
    uint64_t VAR_7 = ((VAR_5 << VAR_0) + VAR_6 / 2 - 1) / VAR_6;
    uint32_t VAR_8 = (uint32_t)(VAR_7 & VAR_1);
    return VAR_8;
}
