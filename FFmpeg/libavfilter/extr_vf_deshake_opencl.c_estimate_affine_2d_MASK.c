
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int num_model_matches; TYPE_1__* model_matches; } ;
struct TYPE_12__ {int ransac_err; int alfg; } ;
struct TYPE_11__ {int should_consider; } ;
typedef TYPE_1__ MotionVector ;
typedef TYPE_2__ DeshakeOpenCLContext ;
typedef TYPE_3__ DebugMatches ;


 int FUNC_0 (int const,int) ;
 int FUNC_1 (TYPE_1__*,int const,double*,int ,double const) ;
 int FUNC_2 (int *,TYPE_1__*,int const,TYPE_1__*,int) ;
 int FUNC_3 (double const,double,int) ;
 int FUNC_4 (TYPE_1__*,double*) ;

__attribute__((used)) static bool FUNC_5(
    DeshakeOpenCLContext *VAR_0,
    MotionVector *VAR_1,
    DebugMatches *VAR_2,
    const int VAR_3,
    double *VAR_4,
    const double VAR_5,
    const int VAR_6,
    const double VAR_7
) {
    bool VAR_8 = 0;
    double VAR_9[6], VAR_10[6];
    MotionVector VAR_11[3], VAR_12[3];

    int VAR_13, VAR_14 = FUNC_0(VAR_6, 1);
    int VAR_15, VAR_16 = 0;


    if (VAR_3 < 3) {
        return 0;
    } else if (VAR_3 == 3) {

        FUNC_4(VAR_1, VAR_4);

        for (int VAR_17 = 0; VAR_17 < 3; ++VAR_17) {
            VAR_1[VAR_17].should_consider = 1;
        }

        return 1;
    }

    for (VAR_13 = 0; VAR_13 < VAR_14; ++VAR_13) {
        bool VAR_18 = FUNC_2(&VAR_0->alfg, VAR_1, VAR_3, VAR_11, 10000);

        if (!VAR_18) {
            if (VAR_13 == 0) {
                return 0;
            }

            break;
        }

        FUNC_4(VAR_11, VAR_10);
        VAR_15 = FUNC_1(VAR_1, VAR_3, VAR_10, VAR_0->ransac_err, VAR_5);

        if (VAR_15 > FUNC_0(VAR_16, 2)) {
            for (int VAR_19 = 0; VAR_19 < 6; ++VAR_19) {
                VAR_9[VAR_19] = VAR_10[VAR_19];
            }

            for (int VAR_20 = 0; VAR_20 < 3; VAR_20++) {
                VAR_12[VAR_20] = VAR_11[VAR_20];
            }

            VAR_16 = VAR_15;
            VAR_14 = FUNC_3(
                VAR_7,
                (double)(VAR_3 - VAR_15) / VAR_3,
                VAR_14
            );
        }
    }

    if (VAR_16 > 0) {
        for (int VAR_21 = 0; VAR_21 < 6; ++VAR_21) {
            VAR_4[VAR_21] = VAR_9[VAR_21];
        }

        for (int VAR_22 = 0; VAR_22 < 3; ++VAR_22) {
            VAR_2->model_matches[VAR_22] = VAR_12[VAR_22];
        }
        VAR_2->num_model_matches = 3;


        FUNC_1(VAR_1, VAR_3, VAR_9, VAR_0->ransac_err, VAR_5);
        VAR_8 = 1;
    }

    return VAR_8;
}
