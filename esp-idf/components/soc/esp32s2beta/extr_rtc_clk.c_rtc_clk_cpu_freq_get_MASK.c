
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int const rtc_cpu_freq_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

rtc_cpu_freq_t FUNC_4(void)
{
    uint32_t VAR_10 = FUNC_1(VAR_9, VAR_8);
    switch (VAR_10) {
        case 128: {
            uint32_t VAR_11 = FUNC_1(VAR_9, VAR_7);
            if (VAR_11 == 0) {
                return VAR_6;
            } else if (VAR_11 == FUNC_3() / 2 - 1) {
                return VAR_4;
            } else {
                FUNC_2(0 && "unsupported frequency");
            }
            break;
        }
        case 129: {
            uint32_t VAR_12 = FUNC_0(VAR_1, VAR_0);
            if (VAR_12 == 0) {
                return VAR_5;
            } else if (VAR_12 == 1) {
                return VAR_2;
            } else if (VAR_12 == 2) {
                return VAR_3;
            } else {
                FUNC_2(0 && "unsupported frequency");
            }
            break;
        }
        case 130:
        case 131:
        default:
            FUNC_2(0 && "unsupported frequency");
    }
    return 128;
}
