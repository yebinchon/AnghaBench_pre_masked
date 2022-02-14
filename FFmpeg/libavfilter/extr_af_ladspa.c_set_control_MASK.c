
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* priv; } ;
struct TYPE_9__ {int* icmap; unsigned long nb_inputcontrols; scalar_t__* ictlv; TYPE_1__* desc; } ;
struct TYPE_8__ {scalar_t__ LowerBound; scalar_t__ UpperBound; int HintDescriptor; } ;
struct TYPE_7__ {char* Label; scalar_t__ PortRangeHints; } ;
typedef TYPE_2__ LADSPA_PortRangeHint ;
typedef scalar_t__ LADSPA_Data ;
typedef TYPE_3__ LADSPAContext ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,int ,char*,...) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_2, unsigned long VAR_3, LADSPA_Data VAR_4)
{
    LADSPAContext *VAR_5 = VAR_2->priv;
    const char *VAR_6 = VAR_5->desc->Label;
    LADSPA_PortRangeHint *VAR_7 = (LADSPA_PortRangeHint *)VAR_5->desc->PortRangeHints +
                              VAR_5->icmap[VAR_3];

    if (VAR_3 >= VAR_5->nb_inputcontrols) {
        FUNC_3(VAR_2, VAR_0, "Control c%ld is out of range [0 - %lu].\n",
               VAR_3, VAR_5->nb_inputcontrols);
        return FUNC_0(VAR_1);
    }

    if (FUNC_2(VAR_7->HintDescriptor) &&
            VAR_4 < VAR_7->LowerBound) {
        FUNC_3(VAR_2, VAR_0,
                "%s: input control c%ld is below lower boundary of %0.4f.\n",
                VAR_6, VAR_3, VAR_7->LowerBound);
        return FUNC_0(VAR_1);
    }

    if (FUNC_1(VAR_7->HintDescriptor) &&
            VAR_4 > VAR_7->UpperBound) {
        FUNC_3(VAR_2, VAR_0,
                "%s: input control c%ld is above upper boundary of %0.4f.\n",
                VAR_6, VAR_3, VAR_7->UpperBound);
        return FUNC_0(VAR_1);
    }

    VAR_5->ictlv[VAR_3] = VAR_4;

    return 0;
}
