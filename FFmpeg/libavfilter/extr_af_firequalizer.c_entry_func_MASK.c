
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* priv; } ;
struct TYPE_6__ {int nb_gain_entry; TYPE_1__* gain_entry_tbl; void* gain_entry_err; } ;
struct TYPE_5__ {double freq; double gain; } ;
typedef TYPE_2__ FIREqualizerContext ;
typedef TYPE_3__ AVFilterContext ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ,char*,...) ;
 scalar_t__ FUNC_2 (double) ;

__attribute__((used)) static double FUNC_3(void *VAR_3, double VAR_4, double VAR_5)
{
    AVFilterContext *VAR_6 = VAR_3;
    FIREqualizerContext *VAR_7 = VAR_6->priv;

    if (VAR_7->nb_gain_entry >= VAR_2) {
        FUNC_1(VAR_6, VAR_0, "entry table overflow.\n");
        VAR_7->gain_entry_err = FUNC_0(VAR_1);
        return 0;
    }

    if (FUNC_2(VAR_4)) {
        FUNC_1(VAR_6, VAR_0, "nan frequency (%g, %g).\n", VAR_4, VAR_5);
        VAR_7->gain_entry_err = FUNC_0(VAR_1);
        return 0;
    }

    if (VAR_7->nb_gain_entry > 0 && VAR_4 <= VAR_7->gain_entry_tbl[VAR_7->nb_gain_entry - 1].freq) {
        FUNC_1(VAR_6, VAR_0, "unsorted frequency (%g, %g).\n", VAR_4, VAR_5);
        VAR_7->gain_entry_err = FUNC_0(VAR_1);
        return 0;
    }

    VAR_7->gain_entry_tbl[VAR_7->nb_gain_entry].freq = VAR_4;
    VAR_7->gain_entry_tbl[VAR_7->nb_gain_entry].gain = VAR_5;
    VAR_7->nb_gain_entry++;
    return 0;
}
