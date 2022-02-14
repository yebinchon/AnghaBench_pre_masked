
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int num_model_matches; int * model_matches; } ;
struct TYPE_6__ {scalar_t__* ransac_err; int alfg; } ;
typedef int MotionVector ;
typedef TYPE_1__ DeshakeOpenCLContext ;
typedef TYPE_2__ DebugMatches ;


 float VAR_0 ;
 int FUNC_0 (int *,int const,double*,scalar_t__*) ;
 int FUNC_1 (int *,int *,int const,int *,int) ;
 int FUNC_2 (TYPE_1__*,int *,int *,int const,float,double*) ;
 int FUNC_3 (int *,double*) ;

__attribute__((used)) static bool FUNC_4(
    DeshakeOpenCLContext *VAR_1,
    MotionVector *VAR_2,
    DebugMatches *VAR_3,
    const int VAR_4,
    double *VAR_5,
    const int VAR_6
) {
    bool VAR_7 = 0;
    float VAR_8 = VAR_0;
    double VAR_9[6], VAR_10[6];
    MotionVector VAR_11[3], VAR_12[3];

    for (int VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
        float VAR_14 = 0;
        bool VAR_15 = FUNC_1(&VAR_1->alfg, VAR_2, VAR_4, VAR_11, 10000);

        if (!VAR_15) {
            if (VAR_13 == 0) {
                return 0;
            }

            break;
        }

        FUNC_3(VAR_11, VAR_10);
        FUNC_0(VAR_2, VAR_4, VAR_10, VAR_1->ransac_err);

        for (int VAR_16 = 0; VAR_16 < VAR_4; VAR_16++) {
            VAR_14 += VAR_1->ransac_err[VAR_16];
        }

        if (VAR_14 < VAR_8) {
            for (int VAR_17 = 0; VAR_17 < 6; ++VAR_17) {
                VAR_9[VAR_17] = VAR_10[VAR_17];
            }

            for (int VAR_18 = 0; VAR_18 < 3; VAR_18++) {
                VAR_12[VAR_18] = VAR_11[VAR_18];
            }

            VAR_8 = VAR_14;
        }
    }

    for (int VAR_19 = 0; VAR_19 < 6; ++VAR_19) {
        VAR_5[VAR_19] = VAR_9[VAR_19];
    }

    for (int VAR_20 = 0; VAR_20 < 3; ++VAR_20) {
        VAR_3->model_matches[VAR_20] = VAR_12[VAR_20];
    }
    VAR_3->num_model_matches = 3;
    VAR_7 = 1;

    FUNC_2(VAR_1, VAR_12, VAR_2, VAR_4, VAR_8, VAR_5);
    return VAR_7;
}
