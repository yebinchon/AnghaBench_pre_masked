
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ trax_downcount_unit_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

int FUNC_4(trax_downcount_unit_t VAR_15)
{

    FUNC_0(VAR_6, "Trax_start_trace called, but trax is disabled in menuconfig!");
    return VAR_4;

    uint32_t VAR_16;
    if (FUNC_2(VAR_3)&VAR_13) {
        FUNC_1(VAR_6, "Stopping active trace first.");

        FUNC_3(VAR_0, 0);
        FUNC_3(VAR_2, FUNC_2(VAR_2)|VAR_12);

        FUNC_3(VAR_2, 0);
    }
    FUNC_3(VAR_1, 31);
    VAR_16=VAR_11 | VAR_10 | VAR_8 | (1<<VAR_9);
    if (VAR_15 == VAR_14) VAR_16|=VAR_7;

    FUNC_3(VAR_2, VAR_16);
    return VAR_5;
}
