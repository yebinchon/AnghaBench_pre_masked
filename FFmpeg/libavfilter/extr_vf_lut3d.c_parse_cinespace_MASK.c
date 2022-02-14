
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rgbvec {int r; int g; int b; } ;
struct TYPE_9__ {TYPE_2__* priv; } ;
struct TYPE_7__ {void* b; void* g; void* r; } ;
struct TYPE_8__ {TYPE_1__ scale; struct rgbvec* lut; } ;
typedef TYPE_2__ LUT3DContext ;
typedef int FILE ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int) ;
 void* FUNC_3 (int,float,float) ;
 int FUNC_4 (TYPE_3__*,int ,char*,...) ;
 int FUNC_5 (char*,char*,...) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,int *,int ) ;

__attribute__((used)) static int FUNC_9(AVFilterContext *VAR_5, FILE *VAR_6)
{
    LUT3DContext *VAR_7 = VAR_5->priv;
    char VAR_8[VAR_4];
    float VAR_9[3] = {0.0, 0.0, 0.0};
    float VAR_10[3] = {1.0, 1.0, 1.0};
    float VAR_11[3] = {0.0, 0.0, 0.0};
    float VAR_12[3] = {1.0, 1.0, 1.0};
    int VAR_13, VAR_14 = 0, VAR_15, VAR_16;

    FUNC_1(FUNC_6(VAR_8));
    if (FUNC_7(VAR_8, "CSPLUTV100", 10)) {
        FUNC_4(VAR_5, VAR_2, "Not cineSpace LUT format\n");
        return FUNC_0(VAR_3);
    }

    FUNC_1(FUNC_6(VAR_8));
    if (FUNC_7(VAR_8, "3D", 2)) {
        FUNC_4(VAR_5, VAR_2, "Not 3D LUT format\n");
        return FUNC_0(VAR_3);
    }

    while (1) {
        FUNC_1(FUNC_6(VAR_8));

        if (!FUNC_7(VAR_8, "BEGIN METADATA", 14)) {
            VAR_14 = 1;
            continue;
        }
        if (!FUNC_7(VAR_8, "END METADATA", 12)) {
            VAR_14 = 0;
            continue;
        }
        if (VAR_14 == 0) {
            int VAR_17, VAR_18, VAR_19;

            for (int VAR_20 = 0; VAR_20 < 3; VAR_20++) {
                int VAR_21 = FUNC_8(VAR_8, ((void*)0), 0);

                if (VAR_21 != 2) {
                    FUNC_4(VAR_5, VAR_2, "Unsupported number of pre-lut points.\n");
                    return VAR_1;
                }

                FUNC_1(FUNC_6(VAR_8));
                if (FUNC_5(VAR_8, "%f %f", &VAR_9[VAR_20], &VAR_10[VAR_20]) != 2)
                    return VAR_0;
                FUNC_1(FUNC_6(VAR_8));
                if (FUNC_5(VAR_8, "%f %f", &VAR_11[VAR_20], &VAR_12[VAR_20]) != 2)
                    return VAR_0;
                FUNC_1(FUNC_6(VAR_8));
            }

            if (FUNC_5(VAR_8, "%d %d %d", &VAR_17, &VAR_18, &VAR_19) != 3)
                return FUNC_0(VAR_3);
            if (VAR_17 != VAR_18 || VAR_17 != VAR_19) {
                FUNC_4(VAR_5, VAR_2, "Unsupported size combination: %dx%dx%d.\n", VAR_17, VAR_18, VAR_19);
                return VAR_1;
            }

            VAR_15 = VAR_17;
            VAR_16 = VAR_15 * VAR_15;

            VAR_13 = FUNC_2(VAR_5, VAR_15);
            if (VAR_13 < 0)
                return VAR_13;

            for (int VAR_22 = 0; VAR_22 < VAR_15; VAR_22++) {
                for (int VAR_23 = 0; VAR_23 < VAR_15; VAR_23++) {
                    for (int VAR_24 = 0; VAR_24 < VAR_15; VAR_24++) {
                        struct rgbvec *VAR_25 = &VAR_7->lut[VAR_24 * VAR_16 + VAR_23 * VAR_15 + VAR_22];
                        if (VAR_22 != 0 || VAR_23 != 0 || VAR_24 != 0)
                            FUNC_1(FUNC_6(VAR_8));
                        if (FUNC_5(VAR_8, "%f %f %f", &VAR_25->r, &VAR_25->g, &VAR_25->b) != 3)
                            return VAR_0;
                        VAR_25->r *= VAR_12[0] - VAR_11[0];
                        VAR_25->g *= VAR_12[1] - VAR_11[1];
                        VAR_25->b *= VAR_12[2] - VAR_11[2];
                    }
                }
            }

            break;
        }
    }

    VAR_7->scale.r = FUNC_3(1. / (VAR_10[0] - VAR_9[0]), 0.f, 1.f);
    VAR_7->scale.g = FUNC_3(1. / (VAR_10[1] - VAR_9[1]), 0.f, 1.f);
    VAR_7->scale.b = FUNC_3(1. / (VAR_10[2] - VAR_9[2]), 0.f, 1.f);

    return 0;
}
