
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hybrid_synthesis_deint; int hybrid_analysis_ileave; int hybrid_analysis; int mul_pair_single; int add_squares; } ;
typedef TYPE_1__ PSDSPContext ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_1__*) ;

void FUNC_9(void)
{
    PSDSPContext VAR_0;

    FUNC_1(&VAR_0);

    if (FUNC_0(VAR_0.add_squares, "ps_add_squares"))
        FUNC_3();
    FUNC_2("add_squares");

    if (FUNC_0(VAR_0.mul_pair_single, "ps_mul_pair_single"))
        FUNC_7();
    FUNC_2("mul_pair_single");

    if (FUNC_0(VAR_0.hybrid_analysis, "ps_hybrid_analysis"))
        FUNC_4();
    FUNC_2("hybrid_analysis");

    if (FUNC_0(VAR_0.hybrid_analysis_ileave, "ps_hybrid_analysis_ileave"))
        FUNC_5();
    FUNC_2("hybrid_analysis_ileave");

    if (FUNC_0(VAR_0.hybrid_synthesis_deint, "ps_hybrid_synthesis_deint"))
        FUNC_6();
    FUNC_2("hybrid_synthesis_deint");

    FUNC_8(&VAR_0);
    FUNC_2("stereo_interpolate");
}
