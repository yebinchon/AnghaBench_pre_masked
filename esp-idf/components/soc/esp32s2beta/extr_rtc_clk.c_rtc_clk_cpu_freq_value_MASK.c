
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int rtc_cpu_freq_t ;


 int VAR_0 ;







 int FUNC_0 (int ) ;
 int FUNC_1 () ;

uint32_t FUNC_2(rtc_cpu_freq_t VAR_1)
{
    switch (VAR_1) {
        case 128:
            return ((uint32_t) FUNC_1()) * VAR_0;
        case 130:
            return 2 * VAR_0;
        case 129:
            return 80 * VAR_0;
        case 132:
            return 160 * VAR_0;
        case 131:
            return 240 * VAR_0;
        case 133:
            return 80 * VAR_0;
        case 134:
            return 160 * VAR_0;
        default:
            FUNC_0(0 && "invalid rtc_cpu_freq_t value");
            return 0;
    }
}
