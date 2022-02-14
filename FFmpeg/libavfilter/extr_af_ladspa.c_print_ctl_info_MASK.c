
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* desc; } ;
struct TYPE_6__ {int HintDescriptor; scalar_t__ UpperBound; scalar_t__ LowerBound; } ;
struct TYPE_5__ {int * PortNames; TYPE_2__* PortRangeHints; } ;
typedef TYPE_2__ LADSPA_PortRangeHint ;
typedef scalar_t__ LADSPA_Data ;
typedef TYPE_3__ LADSPAContext ;
typedef int AVFilterContext ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,int,char*,...) ;

__attribute__((used)) static void FUNC_8(AVFilterContext *VAR_0, int VAR_1,
                           LADSPAContext *VAR_2, int VAR_3, unsigned long *VAR_4,
                           LADSPA_Data *VAR_5, int VAR_6)
{
    const LADSPA_PortRangeHint *VAR_7 = VAR_2->desc->PortRangeHints + VAR_4[VAR_3];

    FUNC_7(VAR_0, VAR_1, "c%i: %s [", VAR_3, VAR_2->desc->PortNames[VAR_4[VAR_3]]);

    if (FUNC_6(VAR_7->HintDescriptor)) {
        FUNC_7(VAR_0, VAR_1, "toggled (1 or 0)");

        if (FUNC_2(VAR_7->HintDescriptor))
            FUNC_7(VAR_0, VAR_1, " (default %i)", (int)VAR_5[VAR_3]);
    } else {
        if (FUNC_3(VAR_7->HintDescriptor)) {
            FUNC_7(VAR_0, VAR_1, "<int>");

            if (FUNC_1(VAR_7->HintDescriptor))
                FUNC_7(VAR_0, VAR_1, ", min: %i", (int)VAR_7->LowerBound);

            if (FUNC_0(VAR_7->HintDescriptor))
                FUNC_7(VAR_0, VAR_1, ", max: %i", (int)VAR_7->UpperBound);

            if (VAR_6)
                FUNC_7(VAR_0, VAR_1, " (value %d)", (int)VAR_5[VAR_3]);
            else if (FUNC_2(VAR_7->HintDescriptor))
                FUNC_7(VAR_0, VAR_1, " (default %d)", (int)VAR_5[VAR_3]);
        } else {
            FUNC_7(VAR_0, VAR_1, "<float>");

            if (FUNC_1(VAR_7->HintDescriptor))
                FUNC_7(VAR_0, VAR_1, ", min: %f", VAR_7->LowerBound);

            if (FUNC_0(VAR_7->HintDescriptor))
                FUNC_7(VAR_0, VAR_1, ", max: %f", VAR_7->UpperBound);

            if (VAR_6)
                FUNC_7(VAR_0, VAR_1, " (value %f)", VAR_5[VAR_3]);
            else if (FUNC_2(VAR_7->HintDescriptor))
                FUNC_7(VAR_0, VAR_1, " (default %f)", VAR_5[VAR_3]);
        }

        if (FUNC_5(VAR_7->HintDescriptor))
            FUNC_7(VAR_0, VAR_1, ", multiple of sample rate");

        if (FUNC_4(VAR_7->HintDescriptor))
            FUNC_7(VAR_0, VAR_1, ", logarithmic scale");
    }

    FUNC_7(VAR_0, VAR_1, "]\n");
}
