
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double param; int type; } ;
typedef TYPE_1__ ASoftClipContext ;
 double FUNC_0 (double const) ;
 double FUNC_1 (double const) ;
 int VAR_0 ;
 double VAR_1 ;
 int FUNC_2 (double const) ;
 int FUNC_3 (int) ;
 double FUNC_4 (double const,int) ;
 double FUNC_5 (double const) ;
 double const FUNC_6 (double) ;
 double FUNC_7 (double const) ;

__attribute__((used)) static void FUNC_8(ASoftClipContext *VAR_2,
                       void **VAR_3, const void **VAR_4,
                       int VAR_5, int VAR_6)
{
    double VAR_7 = VAR_2->param;

    for (int VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
        const double *VAR_9 = VAR_4[VAR_8];
        double *VAR_10 = VAR_3[VAR_8];

        switch (VAR_2->type) {
        case 128:
            for (int VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
                VAR_10[VAR_11] = FUNC_7(VAR_9[VAR_11] * VAR_7);
            }
            break;
        case 133:
            for (int VAR_12 = 0; VAR_12 < VAR_5; VAR_12++)
                VAR_10[VAR_12] = 2. / VAR_0 * FUNC_2(VAR_9[VAR_12] * VAR_7);
            break;
        case 132:
            for (int VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
                if (FUNC_0(VAR_9[VAR_13]) >= 1.5)
                    VAR_10[VAR_13] = FUNC_1(VAR_9[VAR_13]);
                else
                    VAR_10[VAR_13] = VAR_9[VAR_13] - 0.1481 * FUNC_4(VAR_9[VAR_13], 3.);
            }
            break;
        case 131:
            for (int VAR_14 = 0; VAR_14 < VAR_5; VAR_14++)
                VAR_10[VAR_14] = 2. / (1. + FUNC_3(-2. * VAR_9[VAR_14])) - 1.;
            break;
        case 134:
            for (int VAR_15 = 0; VAR_15 < VAR_5; VAR_15++)
                VAR_10[VAR_15] = VAR_9[VAR_15] / (FUNC_6(VAR_7 + VAR_9[VAR_15] * VAR_9[VAR_15]));
            break;
        case 130:
            for (int VAR_16 = 0; VAR_16 < VAR_5; VAR_16++) {
                if (FUNC_0(VAR_9[VAR_16]) >= 1.25)
                    VAR_10[VAR_16] = FUNC_1(VAR_9[VAR_16]);
                else
                    VAR_10[VAR_16] = VAR_9[VAR_16] - 0.08192 * FUNC_4(VAR_9[VAR_16], 5.);
            }
            break;
        case 129:
            for (int VAR_17 = 0; VAR_17 < VAR_5; VAR_17++) {
                if (FUNC_0(VAR_9[VAR_17]) >= VAR_1)
                    VAR_10[VAR_17] = FUNC_1(VAR_9[VAR_17]);
                else
                    VAR_10[VAR_17] = FUNC_5(VAR_9[VAR_17]);
            }
            break;
        }
    }
}
