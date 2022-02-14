
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {int filtersize; int difford; double sigma; int** gauss; } ;
typedef TYPE_1__ ColorConstancyContext ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 double FUNC_1 (int,int) ;
 int VAR_3 ;
 int FUNC_2 (int**) ;
 int FUNC_3 (TYPE_2__*,int ,char*,...) ;
 int* FUNC_4 (int,int) ;
 double FUNC_5 (int) ;
 int FUNC_6 (double,int) ;
 double FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(AVFilterContext *VAR_4)
{
    ColorConstancyContext *VAR_5 = VAR_4->priv;
    int VAR_6 = VAR_5->filtersize;
    int VAR_7 = VAR_5->difford;
    double VAR_8 = VAR_5->sigma;
    double VAR_9, VAR_10;
    int VAR_11;

    for (VAR_11 = 0; VAR_11 <= VAR_7; ++VAR_11) {
        VAR_5->gauss[VAR_11] = FUNC_4(VAR_6, sizeof(*VAR_5->gauss[VAR_11]));
        if (!VAR_5->gauss[VAR_11]) {
            for (; VAR_11 >= 0; --VAR_11) {
                FUNC_2(&VAR_5->gauss[VAR_11]);
            }
            FUNC_3(VAR_4, VAR_0, "Out of memory while allocating gauss buffers.\n");
            return FUNC_0(VAR_2);
        }
    }


    FUNC_3(VAR_4, VAR_1, "Setting 0-d gauss with filtersize = %d.\n", VAR_6);
    VAR_9 = 0.0;
    if (!VAR_8) {
        VAR_5->gauss[0][0] = 1;
    } else {
        for (VAR_11 = 0; VAR_11 < VAR_6; ++VAR_11) {
            VAR_5->gauss[0][VAR_11] = FUNC_5(- FUNC_6(FUNC_1(VAR_6, VAR_11), 2.) / (2 * VAR_8 * VAR_8)) / ( FUNC_7(2 * VAR_3) * VAR_8 );
            VAR_9 += VAR_5->gauss[0][VAR_11];
        }
        for (VAR_11 = 0; VAR_11 < VAR_6; ++VAR_11) {
            VAR_5->gauss[0][VAR_11] /= VAR_9;
        }
    }

    if (VAR_7 > 0) {
        FUNC_3(VAR_4, VAR_1, "Setting 1-d gauss with filtersize = %d.\n", VAR_6);
        VAR_9 = 0.0;
        for (VAR_11 = 0; VAR_11 < VAR_6; ++VAR_11) {
            VAR_5->gauss[1][VAR_11] = - (FUNC_1(VAR_6, VAR_11) / FUNC_6(VAR_8, 2)) * VAR_5->gauss[0][VAR_11];
            VAR_9 += VAR_5->gauss[1][VAR_11] * FUNC_1(VAR_6, VAR_11);
        }

        for (VAR_11 = 0; VAR_11 < VAR_6; ++VAR_11) {
            VAR_5->gauss[1][VAR_11] /= VAR_9;
        }


        if (VAR_7 > 1) {
            FUNC_3(VAR_4, VAR_1, "Setting 2-d gauss with filtersize = %d.\n", VAR_6);
            VAR_9 = 0.0;
            for (VAR_11 = 0; VAR_11 < VAR_6; ++VAR_11) {
                VAR_5->gauss[2][VAR_11] = ( FUNC_6(FUNC_1(VAR_6, VAR_11), 2) / FUNC_6(VAR_8, 4) - 1/FUNC_6(VAR_8, 2) )
                                 * VAR_5->gauss[0][VAR_11];
                VAR_9 += VAR_5->gauss[2][VAR_11];
            }

            VAR_10 = 0.0;
            for (VAR_11 = 0; VAR_11 < VAR_6; ++VAR_11) {
                VAR_5->gauss[2][VAR_11] -= VAR_9 / (VAR_6);
                VAR_10 += (0.5 * FUNC_1(VAR_6, VAR_11) * FUNC_1(VAR_6, VAR_11) * VAR_5->gauss[2][VAR_11]);
            }
            for (VAR_11 = 0; VAR_11 < VAR_6 ; ++VAR_11) {
                VAR_5->gauss[2][VAR_11] /= VAR_10;
            }
        }
    }
    return 0;
}
