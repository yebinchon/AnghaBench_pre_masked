
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rgbvec {float r; float g; float b; } ;
typedef int line ;
struct TYPE_9__ {TYPE_2__* priv; } ;
struct TYPE_7__ {void* b; void* g; void* r; } ;
struct TYPE_8__ {TYPE_1__ scale; struct rgbvec* lut; } ;
typedef TYPE_2__ LUT3DContext ;
typedef int FILE ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int const) ;
 void* FUNC_2 (int,float,float) ;
 int FUNC_3 (TYPE_3__*,int ,char*,float,float,float,float,float,float) ;
 int FUNC_4 (char*,char*,float*,float*,float*) ;
 scalar_t__ FUNC_5 (char*,int,int *) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,int *,int ) ;

__attribute__((used)) static int FUNC_9(AVFilterContext *VAR_3, FILE *VAR_4)
{
    LUT3DContext *VAR_5 = VAR_3->priv;
    char VAR_6[VAR_2];
    float VAR_7[3] = {0.0, 0.0, 0.0};
    float VAR_8[3] = {1.0, 1.0, 1.0};

    while (FUNC_5(VAR_6, sizeof(VAR_6), VAR_4)) {
        if (!FUNC_7(VAR_6, "LUT_3D_SIZE", 11)) {
            int VAR_9, VAR_10, VAR_11, VAR_12;
            const int VAR_13 = FUNC_8(VAR_6 + 12, ((void*)0), 0);
            const int VAR_14 = VAR_13 * VAR_13;

            VAR_9 = FUNC_1(VAR_3, VAR_13);
            if (VAR_9 < 0)
                return VAR_9;

            for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
                for (VAR_11 = 0; VAR_11 < VAR_13; VAR_11++) {
                    for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10++) {
                        struct rgbvec *VAR_15 = &VAR_5->lut[VAR_10 * VAR_14 + VAR_11 * VAR_13 + VAR_12];

                        do {
try_again:
                            FUNC_0(0);
                            if (!FUNC_7(VAR_6, "DOMAIN_", 7)) {
                                float *VAR_16 = ((void*)0);
                                if (!FUNC_7(VAR_6 + 7, "MIN ", 4)) VAR_16 = VAR_7;
                                else if (!FUNC_7(VAR_6 + 7, "MAX ", 4)) VAR_16 = VAR_8;
                                if (!VAR_16)
                                    return VAR_0;
                                FUNC_4(VAR_6 + 11, "%f %f %f", VAR_16, VAR_16 + 1, VAR_16 + 2);
                                FUNC_3(VAR_3, VAR_1, "min: %f %f %f | max: %f %f %f\n",
                                       VAR_7[0], VAR_7[1], VAR_7[2], VAR_8[0], VAR_8[1], VAR_8[2]);
                                goto try_again;
                            } else if (!FUNC_7(VAR_6, "TITLE", 5)) {
                                goto try_again;
                            }
                        } while (FUNC_6(VAR_6));
                        if (FUNC_4(VAR_6, "%f %f %f", &VAR_15->r, &VAR_15->g, &VAR_15->b) != 3)
                            return VAR_0;
                    }
                }
            }
            break;
        }
    }

    VAR_5->scale.r = FUNC_2(1. / (VAR_8[0] - VAR_7[0]), 0.f, 1.f);
    VAR_5->scale.g = FUNC_2(1. / (VAR_8[1] - VAR_7[1]), 0.f, 1.f);
    VAR_5->scale.b = FUNC_2(1. / (VAR_8[2] - VAR_7[2]), 0.f, 1.f);

    return 0;
}
