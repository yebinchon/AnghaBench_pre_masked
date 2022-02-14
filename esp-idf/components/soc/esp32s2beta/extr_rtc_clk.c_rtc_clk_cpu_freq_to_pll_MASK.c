
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtc_cpu_freq_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static void FUNC_5(rtc_cpu_freq_t VAR_15)
{
    int VAR_16 = 0;
    if ((VAR_14 == VAR_12) || ((VAR_14 == VAR_11) && (VAR_15 == VAR_9))) {




        FUNC_4(VAR_15);
        return;
    }

    if ((VAR_15 == VAR_10) || (VAR_15 == VAR_7)) {
        FUNC_1(VAR_5, VAR_4, VAR_1);
        FUNC_0(VAR_2, 0);
        VAR_16 = 80;
    } else if ((VAR_15 == VAR_8) || (VAR_15 == VAR_6)) {
        FUNC_1(VAR_5, VAR_4, VAR_1);
        FUNC_0(VAR_2, 1);
        VAR_16 = 160;
    } else if (VAR_15 == VAR_9) {
        FUNC_1(VAR_5, VAR_4, VAR_0);
        FUNC_0(VAR_2, 2);
        VAR_16 = 240;
    }

    FUNC_3(80 * VAR_3);
    FUNC_2(VAR_16);
    VAR_13 = VAR_15;
}
