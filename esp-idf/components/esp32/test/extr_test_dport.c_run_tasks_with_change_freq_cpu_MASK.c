
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int freq_mhz; } ;
typedef TYPE_1__ rtc_cpu_freq_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char*,int ,char*,int ,int) ;
 int FUNC_7 (int const,int) ;
 int FUNC_8 (int const) ;
 int FUNC_9 (int) ;

void FUNC_10(int VAR_8)
{
    const int VAR_9 = VAR_1;
    const int VAR_10 = VAR_0;
    VAR_7 = 0;
    VAR_6 = 0;
    rtc_cpu_freq_config_t VAR_11;
    FUNC_3(&VAR_11);

    FUNC_1("CPU_FREQ = %d MHz\n", VAR_11.freq_mhz);

    if (VAR_8 != VAR_11.freq_mhz) {
        rtc_cpu_freq_config_t VAR_12;
        bool VAR_13 = FUNC_4(VAR_8, &VAR_12);
        FUNC_0(VAR_13 && "invalid frequency value");

        FUNC_8(VAR_9);
        FUNC_5(&VAR_12);
        FUNC_7(VAR_9, (FUNC_2() << 4) / VAR_10);

        VAR_3 = VAR_8 * 1000000 / VAR_2;
        FUNC_9(2);

        FUNC_1("CPU_FREQ switched to %d MHz\n", VAR_8);
    }
    FUNC_6("accessDPORT", VAR_5, "accessAPB", VAR_4, 10000);


    FUNC_8(VAR_9);
    FUNC_5(&VAR_11);
    FUNC_7(VAR_9, (FUNC_2() << 4) / VAR_10);
    VAR_3 = VAR_11.freq_mhz * 1000000 / VAR_2;
}
