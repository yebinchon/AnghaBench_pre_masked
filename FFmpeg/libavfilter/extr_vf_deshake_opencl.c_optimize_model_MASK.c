
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__* ransac_err; } ;
struct TYPE_10__ {float* s; } ;
struct TYPE_11__ {TYPE_1__ p2; } ;
struct TYPE_12__ {TYPE_2__ p; } ;
typedef TYPE_3__ MotionVector ;
typedef TYPE_4__ DeshakeOpenCLContext ;


 int FUNC_0 (TYPE_3__*,int const,double*,scalar_t__*) ;
 int FUNC_1 (TYPE_3__*,double*) ;

__attribute__((used)) static void FUNC_2(
    DeshakeOpenCLContext *VAR_0,
    MotionVector *VAR_1,
    MotionVector *VAR_2,
    const int VAR_3,
    float VAR_4,
    double *VAR_5
) {
    float VAR_6 = 0.01;
    float VAR_7 = 0.01;
    bool VAR_8 = 1;
    float VAR_9 = 0;
    double VAR_10[6];
    int VAR_11 = 0;

    for (int VAR_12 = 0; VAR_12 < 200; VAR_12++) {
        float VAR_13 = 0;

        if (VAR_8) {
            VAR_1[0].p.p2.s[0] += VAR_6;
        } else {
            VAR_1[0].p.p2.s[0] += VAR_7;
        }

        FUNC_1(VAR_1, VAR_10);
        FUNC_0(VAR_2, VAR_3, VAR_10, VAR_0->ransac_err);

        for (int VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) {
            VAR_13 += VAR_0->ransac_err[VAR_14];
        }

        if (VAR_13 < VAR_4) {
            for (int VAR_15 = 0; VAR_15 < 6; ++VAR_15) {
                VAR_5[VAR_15] = VAR_10[VAR_15];
            }

            VAR_4 = VAR_13;
            VAR_11 = VAR_12;
        } else {

            if (VAR_8) {
                VAR_1[0].p.p2.s[0] -= VAR_6;
            } else {
                VAR_1[0].p.p2.s[0] -= VAR_7;
            }

            if (VAR_12 - VAR_11 > 4) {

                break;
            }

            VAR_9 = VAR_6;

            if (VAR_8) {
                VAR_6 *= -1;
            } else {
                VAR_7 *= -1;
            }

            if (VAR_9 < 0) {
                VAR_8 = 0;
            } else {
                VAR_8 = 1;
            }
        }
    }
}
