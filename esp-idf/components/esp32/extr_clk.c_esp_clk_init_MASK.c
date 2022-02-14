
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int const uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ rtc_xtal_freq_t ;
struct TYPE_5__ {int freq_mhz; } ;
typedef TYPE_1__ rtc_cpu_freq_config_t ;
typedef int rtc_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int const,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;

void FUNC_18(void)
{
    rtc_config_t VAR_11 = FUNC_1();
    FUNC_11(VAR_11);
    FUNC_4(FUNC_10() != VAR_6);


    FUNC_9(VAR_3);
    FUNC_16(VAR_4);
    rtc_cpu_freq_config_t VAR_12, VAR_13;
    FUNC_6(&VAR_12);
    const uint32_t VAR_14 = VAR_12.freq_mhz;
    const uint32_t VAR_15 = VAR_1;

    bool VAR_16 = FUNC_7(VAR_15, &VAR_13);
    FUNC_4(VAR_16);



    FUNC_17(VAR_2);

    FUNC_8(&VAR_13);


    FUNC_3( (uint64_t)FUNC_2() * VAR_15 / VAR_14 );
}
