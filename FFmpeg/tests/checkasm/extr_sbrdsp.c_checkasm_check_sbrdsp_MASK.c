
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hf_g_filt; int hf_gen; int autocorrelate; int qmf_deint_bfly; int qmf_deint_neg; int qmf_post_shuffle; int qmf_pre_shuffle; int neg_odd_64; int sum_square; int sum64x5; } ;
typedef TYPE_1__ SBRDSPContext ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;

void FUNC_14(void)
{
    SBRDSPContext VAR_0;

    FUNC_1(&VAR_0);

    if (FUNC_0(VAR_0.sum64x5, "sum64x5"))
        FUNC_12();
    FUNC_2("sum64x5");

    if (FUNC_0(VAR_0.sum_square, "sum_square"))
        FUNC_13();
    FUNC_2("sum_square");

    if (FUNC_0(VAR_0.neg_odd_64, "neg_odd_64"))
        FUNC_7();
    FUNC_2("neg_odd_64");

    if (FUNC_0(VAR_0.qmf_pre_shuffle, "qmf_pre_shuffle"))
        FUNC_11();
    FUNC_2("qmf_pre_shuffle");

    if (FUNC_0(VAR_0.qmf_post_shuffle, "qmf_post_shuffle"))
        FUNC_10();
    FUNC_2("qmf_post_shuffle");

    if (FUNC_0(VAR_0.qmf_deint_neg, "qmf_deint_neg"))
        FUNC_9();
    FUNC_2("qmf_deint_neg");

    if (FUNC_0(VAR_0.qmf_deint_bfly, "qmf_deint_bfly"))
        FUNC_8();
    FUNC_2("qmf_deint_bfly");

    if (FUNC_0(VAR_0.autocorrelate, "autocorrelate"))
        FUNC_3();
    FUNC_2("autocorrelate");

    if (FUNC_0(VAR_0.hf_gen, "hf_gen"))
        FUNC_6();
    FUNC_2("hf_gen");

    if (FUNC_0(VAR_0.hf_g_filt, "hf_g_filt"))
        FUNC_5();
    FUNC_2("hf_g_filt");

    FUNC_4(&VAR_0);
    FUNC_2("hf_apply_noise");
}
