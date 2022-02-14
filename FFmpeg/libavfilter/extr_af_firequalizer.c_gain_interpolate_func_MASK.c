
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {double freq; double gain; } ;
struct TYPE_9__ {TYPE_2__* priv; } ;
struct TYPE_8__ {int nb_gain_entry; TYPE_5__* gain_entry_tbl; } ;
struct TYPE_7__ {double freq; double gain; } ;
typedef TYPE_1__ GainEntry ;
typedef TYPE_2__ FIREqualizerContext ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (double*,TYPE_5__**,int,int,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (double) ;

__attribute__((used)) static double FUNC_3(void *VAR_1, double VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1;
    FIREqualizerContext *VAR_4 = VAR_3->priv;
    GainEntry *VAR_5;
    double VAR_6, VAR_7, VAR_8;

    if (FUNC_2(VAR_2))
        return VAR_2;

    if (!VAR_4->nb_gain_entry)
        return 0;

    if (VAR_2 <= VAR_4->gain_entry_tbl[0].freq)
        return VAR_4->gain_entry_tbl[0].gain;

    if (VAR_2 >= VAR_4->gain_entry_tbl[VAR_4->nb_gain_entry-1].freq)
        return VAR_4->gain_entry_tbl[VAR_4->nb_gain_entry-1].gain;

    VAR_5 = FUNC_1(&VAR_2, &VAR_4->gain_entry_tbl, VAR_4->nb_gain_entry - 1, sizeof(*VAR_5), VAR_0);
    FUNC_0(VAR_5);

    VAR_8 = VAR_5[1].freq - VAR_5[0].freq;
    VAR_6 = VAR_2 - VAR_5[0].freq;
    VAR_7 = VAR_5[1].freq - VAR_2;

    if (VAR_6 && VAR_7)
        return (VAR_6 * VAR_5[1].gain + VAR_7 * VAR_5[0].gain) / VAR_8;

    if (VAR_6)
        return VAR_5[1].gain;

    return VAR_5[0].gain;
}
