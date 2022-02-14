
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int rtc_cpu_freq_t ;
typedef int rtc_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

void FUNC_16(void)
{
    rtc_config_t VAR_12 = FUNC_0();
    FUNC_9(VAR_12);

    FUNC_3(FUNC_8() != VAR_11);

    FUNC_7(VAR_7);
    FUNC_14(VAR_9);
    uint32_t VAR_13 = VAR_1;
    rtc_cpu_freq_t VAR_14 = VAR_6;
    switch(VAR_13) {
        case 240:
            VAR_14 = VAR_5;
            break;
        case 160:
            VAR_14 = VAR_4;
            break;
        case 80:
            VAR_14 = VAR_6;
            break;
        default:
            VAR_13 = 80;
            VAR_14 = VAR_6;
            break;
    }



    FUNC_15(VAR_2);

    uint32_t VAR_15 = FUNC_6(FUNC_4()) / VAR_3 ;

    FUNC_5(VAR_14);


    uint32_t VAR_16 = VAR_1;
    FUNC_2( FUNC_1() * VAR_16 / VAR_15 );
}
