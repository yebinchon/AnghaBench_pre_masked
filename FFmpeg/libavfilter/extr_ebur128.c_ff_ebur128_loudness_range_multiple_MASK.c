
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int mode; TYPE_1__* d; } ;
struct TYPE_4__ {unsigned long* short_term_block_energy_histogram; } ;
typedef TYPE_2__ FFEBUR128State ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 double FUNC_1 (double) ;
 size_t FUNC_2 (double) ;
 double* VAR_3 ;
 double* VAR_4 ;

int FUNC_3(FFEBUR128State ** VAR_5, size_t VAR_6,
                                       double *VAR_7)
{
    size_t VAR_8, VAR_9;
    size_t VAR_10;
    double VAR_11, VAR_12;

    double VAR_13, VAR_14;
    unsigned long VAR_15[1000] = { 0 };
    size_t VAR_16, VAR_17;
    size_t VAR_18;

    for (VAR_8 = 0; VAR_8 < VAR_6; ++VAR_8) {
        if (VAR_5[VAR_8]) {
            if ((VAR_5[VAR_8]->mode & VAR_1) !=
                VAR_1) {
                return FUNC_0(VAR_0);
            }
        }
    }

    VAR_10 = 0;
    VAR_11 = 0.0;
    for (VAR_8 = 0; VAR_8 < VAR_6; ++VAR_8) {
        if (!VAR_5[VAR_8])
            continue;
        for (VAR_9 = 0; VAR_9 < 1000; ++VAR_9) {
            VAR_15[VAR_9] += VAR_5[VAR_8]->d->short_term_block_energy_histogram[VAR_9];
            VAR_10 += VAR_5[VAR_8]->d->short_term_block_energy_histogram[VAR_9];
            VAR_11 += VAR_5[VAR_8]->d->short_term_block_energy_histogram[VAR_9]
                * VAR_3[VAR_9];
        }
    }
    if (!VAR_10) {
        *VAR_7 = 0.0;
        return 0;
    }

    VAR_11 /= VAR_10;
    VAR_12 = VAR_2 * VAR_11;

    if (VAR_12 < VAR_4[0]) {
        VAR_18 = 0;
    } else {
        VAR_18 = FUNC_2(VAR_12);
        if (VAR_12 > VAR_3[VAR_18]) {
            ++VAR_18;
        }
    }
    VAR_10 = 0;
    for (VAR_9 = VAR_18; VAR_9 < 1000; ++VAR_9) {
        VAR_10 += VAR_15[VAR_9];
    }
    if (!VAR_10) {
        *VAR_7 = 0.0;
        return 0;
    }

    VAR_16 = (size_t) ((VAR_10 - 1) * 0.1 + 0.5);
    VAR_17 = (size_t) ((VAR_10 - 1) * 0.95 + 0.5);

    VAR_10 = 0;
    VAR_9 = VAR_18;
    while (VAR_10 <= VAR_16) {
        VAR_10 += VAR_15[VAR_9++];
    }
    VAR_14 = VAR_3[VAR_9 - 1];
    while (VAR_10 <= VAR_17) {
        VAR_10 += VAR_15[VAR_9++];
    }
    VAR_13 = VAR_3[VAR_9 - 1];
    *VAR_7 =
        FUNC_1(VAR_13) -
        FUNC_1(VAR_14);
    return 0;
}
