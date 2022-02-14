
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* priv; } ;
struct TYPE_8__ {int nb_gain_entry; TYPE_1__* gain_entry_tbl; } ;
struct TYPE_7__ {double freq; double gain; } ;
typedef TYPE_1__ GainEntry ;
typedef TYPE_2__ FIREqualizerContext ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (double*,TYPE_1__**,int,int,int ) ;
 double FUNC_2 (double) ;
 int VAR_0 ;

__attribute__((used)) static double FUNC_3(void *VAR_1, double VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1;
    FIREqualizerContext *VAR_4 = VAR_3->priv;
    GainEntry *VAR_5;
    double VAR_6, VAR_7, VAR_8;
    double VAR_9, VAR_10, VAR_11, VAR_12;
    double VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;

    if (!VAR_4->nb_gain_entry)
        return 0;

    if (VAR_2 <= VAR_4->gain_entry_tbl[0].freq)
        return VAR_4->gain_entry_tbl[0].gain;

    if (VAR_2 >= VAR_4->gain_entry_tbl[VAR_4->nb_gain_entry-1].freq)
        return VAR_4->gain_entry_tbl[VAR_4->nb_gain_entry-1].gain;

    VAR_5 = FUNC_1(&VAR_2, &VAR_4->gain_entry_tbl, VAR_4->nb_gain_entry - 1, sizeof(*VAR_5), VAR_0);
    FUNC_0(VAR_5);

    VAR_17 = VAR_5[1].freq - VAR_5[0].freq;
    VAR_13 = VAR_5 != VAR_4->gain_entry_tbl ?
         VAR_17 * (VAR_5[0].gain - VAR_5[-1].gain) / (VAR_5[0].freq - VAR_5[-1].freq) : 0;
    VAR_14 = VAR_5[1].gain - VAR_5[0].gain;
    VAR_15 = VAR_5 != VAR_4->gain_entry_tbl + VAR_4->nb_gain_entry - 2 ?
         VAR_17 * (VAR_5[2].gain - VAR_5[1].gain) / (VAR_5[2].freq - VAR_5[1].freq) : 0;

    VAR_16 = FUNC_2(VAR_13) + FUNC_2(VAR_14);
    VAR_13 = VAR_16 > 0 ? (FUNC_2(VAR_13) * VAR_14 + FUNC_2(VAR_14) * VAR_13) / VAR_16 : 0;
    VAR_16 = FUNC_2(VAR_14) + FUNC_2(VAR_15);
    VAR_14 = VAR_16 > 0 ? (FUNC_2(VAR_14) * VAR_15 + FUNC_2(VAR_15) * VAR_14) / VAR_16 : 0;

    VAR_12 = VAR_5[0].gain;
    VAR_11 = VAR_13;
    VAR_10 = 3 * VAR_5[1].gain - VAR_14 - 2 * VAR_11 - 3 * VAR_12;
    VAR_9 = VAR_5[1].gain - VAR_10 - VAR_11 - VAR_12;

    VAR_6 = (VAR_2 - VAR_5[0].freq) / VAR_17;
    VAR_7 = VAR_6 * VAR_6;
    VAR_8 = VAR_7 * VAR_6;

    return VAR_9 * VAR_8 + VAR_10 * VAR_7 + VAR_11 * VAR_6 + VAR_12;
}
