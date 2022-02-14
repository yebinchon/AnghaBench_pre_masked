
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* desc; } ;
struct TYPE_6__ {double LowerBound; double UpperBound; int HintDescriptor; } ;
struct TYPE_5__ {TYPE_2__* PortRangeHints; } ;
typedef TYPE_2__ LADSPA_PortRangeHint ;
typedef double LADSPA_Data ;
typedef TYPE_3__ LADSPAContext ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 double FUNC_10 (double) ;
 double FUNC_11 (double const) ;

__attribute__((used)) static void FUNC_12(LADSPAContext *VAR_0, int VAR_1,
                                  unsigned long *VAR_2, LADSPA_Data *VAR_3)
{
    const LADSPA_PortRangeHint *VAR_4 = VAR_0->desc->PortRangeHints + VAR_2[VAR_1];
    const LADSPA_Data VAR_5 = VAR_4->LowerBound;
    const LADSPA_Data VAR_6 = VAR_4->UpperBound;

    if (FUNC_8(VAR_4->HintDescriptor)) {
        VAR_3[VAR_1] = VAR_5;
    } else if (FUNC_6(VAR_4->HintDescriptor)) {
        VAR_3[VAR_1] = VAR_6;
    } else if (FUNC_0(VAR_4->HintDescriptor)) {
        VAR_3[VAR_1] = 0.0;
    } else if (FUNC_1(VAR_4->HintDescriptor)) {
        VAR_3[VAR_1] = 1.0;
    } else if (FUNC_2(VAR_4->HintDescriptor)) {
        VAR_3[VAR_1] = 100.0;
    } else if (FUNC_3(VAR_4->HintDescriptor)) {
        VAR_3[VAR_1] = 440.0;
    } else if (FUNC_5(VAR_4->HintDescriptor)) {
        if (FUNC_9(VAR_4->HintDescriptor))
            VAR_3[VAR_1] = FUNC_10(FUNC_11(VAR_5) * 0.75 + FUNC_11(VAR_6) * 0.25);
        else
            VAR_3[VAR_1] = VAR_5 * 0.75 + VAR_6 * 0.25;
    } else if (FUNC_7(VAR_4->HintDescriptor)) {
        if (FUNC_9(VAR_4->HintDescriptor))
            VAR_3[VAR_1] = FUNC_10(FUNC_11(VAR_5) * 0.5 + FUNC_11(VAR_6) * 0.5);
        else
            VAR_3[VAR_1] = VAR_5 * 0.5 + VAR_6 * 0.5;
    } else if (FUNC_4(VAR_4->HintDescriptor)) {
        if (FUNC_9(VAR_4->HintDescriptor))
            VAR_3[VAR_1] = FUNC_10(FUNC_11(VAR_5) * 0.25 + FUNC_11(VAR_6) * 0.75);
        else
            VAR_3[VAR_1] = VAR_5 * 0.25 + VAR_6 * 0.75;
    }
}
