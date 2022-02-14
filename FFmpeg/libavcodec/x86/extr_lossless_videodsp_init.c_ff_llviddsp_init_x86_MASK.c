
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int add_gradient_pred; int add_left_pred; int add_bytes; int add_left_pred_int16; int add_median_pred; } ;
typedef TYPE_1__ LLVidDSPContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_3 ;
 int FUNC_6 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

void FUNC_7(LLVidDSPContext *VAR_16)
{
    int VAR_17 = FUNC_6();






    if (VAR_0 && FUNC_1(VAR_17)) {
        VAR_16->add_bytes = VAR_5;
    }

    if (VAR_0 && FUNC_2(VAR_17)) {

        if (!(VAR_17 & VAR_1))
            VAR_16->add_median_pred = VAR_14;
    }

    if (FUNC_3(VAR_17)) {
        VAR_16->add_bytes = VAR_6;
        VAR_16->add_median_pred = VAR_15;
    }

    if (FUNC_4(VAR_17)) {
        VAR_16->add_left_pred = VAR_11;
        VAR_16->add_left_pred_int16 = VAR_9;
        VAR_16->add_gradient_pred = VAR_8;
    }

    if (FUNC_5(VAR_17)) {
        VAR_16->add_left_pred = VAR_13;
        VAR_16->add_left_pred_int16 = VAR_10;
    }

    if (FUNC_0(VAR_17)) {
        VAR_16->add_bytes = VAR_4;
        VAR_16->add_left_pred = VAR_12;
        VAR_16->add_gradient_pred = VAR_7;
    }
}
