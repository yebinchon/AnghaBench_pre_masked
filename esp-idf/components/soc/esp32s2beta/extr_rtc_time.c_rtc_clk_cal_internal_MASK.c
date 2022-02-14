
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int rtc_cal_sel_t ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_8 (int) ;

uint32_t FUNC_9(rtc_cal_sel_t VAR_15, uint32_t VAR_16)
{

    int VAR_17 = FUNC_2(VAR_3, VAR_5);
    if (VAR_15 == VAR_1 && !VAR_17) {
        FUNC_3(VAR_3, VAR_5, 1);
    }

    if (VAR_15 == VAR_2) {
        FUNC_4(VAR_3, VAR_4);
    }

    FUNC_3(FUNC_7(0), VAR_7, VAR_15);



    if (!FUNC_1(FUNC_6(0), VAR_12)) {
        if (FUNC_1(FUNC_7(0), VAR_11)) {
            while(!FUNC_1(FUNC_7(0), VAR_9));
        }
    }
    FUNC_0(FUNC_7(0), VAR_11);
    FUNC_3(FUNC_7(0), VAR_8, VAR_16);



    uint32_t VAR_18;
    if (VAR_15 == VAR_1) {
        FUNC_3(FUNC_6(0), VAR_13, (VAR_16 << 13));
        VAR_18 = 32768;
    } else if (VAR_15 == VAR_2) {
        FUNC_3(FUNC_6(0), VAR_13, (VAR_16 << 13));
        VAR_18 = VAR_6 / 256;
    } else {
        FUNC_3(FUNC_6(0), VAR_13, (VAR_16 << 11));
        VAR_18 = 90000;
    }
    uint32_t VAR_19 = (uint32_t) (((uint64_t) VAR_16) * VAR_0 / VAR_18);

    FUNC_0(FUNC_7(0), VAR_10);
    FUNC_4(FUNC_7(0), VAR_10);


    FUNC_8(VAR_19);
    uint32_t VAR_20;
    while (1) {
        if (FUNC_1(FUNC_7(0), VAR_9)) {
            VAR_20 = FUNC_2(FUNC_5(0), VAR_14);
            break;
        }
        if (FUNC_1(FUNC_6(0), VAR_12)) {
            VAR_20 = 0;
            break;
        }
    }
    FUNC_0(FUNC_7(0), VAR_10);

    FUNC_3(VAR_3, VAR_5, VAR_17);

    if (VAR_15 == VAR_2) {
        FUNC_0(VAR_3, VAR_4);
    }

    return VAR_20;
}
