
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* d; } ;
struct TYPE_4__ {unsigned long* block_energy_histogram; } ;
typedef TYPE_2__ FFEBUR128State ;


 double VAR_0 ;
 unsigned long* VAR_1 ;

__attribute__((used)) static int FUNC_0(FFEBUR128State **VAR_2, size_t VAR_3,
                                           double *VAR_4)
{
    size_t VAR_5, VAR_6;
    int VAR_7 = 0;
    *VAR_4 = 0.0;

    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
        unsigned long *VAR_8 = VAR_2[VAR_5]->d->block_energy_histogram;
        for (VAR_6 = 0; VAR_6 < 1000; ++VAR_6) {
            *VAR_4 += VAR_8[VAR_6] * VAR_1[VAR_6];
            VAR_7 += VAR_8[VAR_6];
        }
    }

    if (VAR_7 != 0) {
        *VAR_4 /= (double)VAR_7;
        *VAR_4 *= VAR_0;
    }

    return VAR_7;
}
