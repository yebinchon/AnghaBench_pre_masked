
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int mode; TYPE_1__* d; } ;
struct TYPE_5__ {double* block_energy_histogram; } ;
typedef TYPE_2__ FFEBUR128State ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 int FUNC_1 (TYPE_2__**,size_t,double*) ;
 double FUNC_2 (double) ;
 size_t FUNC_3 (double) ;
 double* VAR_3 ;
 double* VAR_4 ;

__attribute__((used)) static int FUNC_4(FFEBUR128State ** VAR_5, size_t VAR_6,
                                  double *VAR_7)
{
    double VAR_8 = 0.0;
    double VAR_9;
    size_t VAR_10;
    size_t VAR_11, VAR_12, VAR_13;

    for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
        if ((VAR_5[VAR_11]->mode & VAR_1) != VAR_1)
            return FUNC_0(VAR_0);

    if (!FUNC_1(VAR_5, VAR_6, &VAR_9)) {
        *VAR_7 = -VAR_2;
        return 0;
    }

    VAR_10 = 0;
    if (VAR_9 < VAR_4[0]) {
        VAR_13 = 0;
    } else {
        VAR_13 = FUNC_3(VAR_9);
        if (VAR_9 > VAR_3[VAR_13]) {
            ++VAR_13;
        }
    }
    for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
        for (VAR_12 = VAR_13; VAR_12 < 1000; ++VAR_12) {
            VAR_8 += VAR_5[VAR_11]->d->block_energy_histogram[VAR_12] *
                VAR_3[VAR_12];
            VAR_10 += VAR_5[VAR_11]->d->block_energy_histogram[VAR_12];
        }
    }
    if (!VAR_10) {
        *VAR_7 = -VAR_2;
        return 0;
    }
    VAR_8 /= (double) VAR_10;
    *VAR_7 = FUNC_2(VAR_8);
    return 0;
}
