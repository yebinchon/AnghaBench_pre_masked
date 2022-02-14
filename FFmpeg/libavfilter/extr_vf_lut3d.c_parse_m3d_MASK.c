
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct rgbvec {float r; float g; float b; } ;
typedef int line ;
struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int lutsize; struct rgbvec* lut; } ;
typedef TYPE_1__ LUT3DContext ;
typedef int FILE ;
typedef TYPE_2__ AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int ,char*,...) ;
 int FUNC_4 (char*,char*,float*,float*,float*) ;
 scalar_t__ FUNC_5 (char*,int,int *) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,int *,int ) ;

__attribute__((used)) static int FUNC_8(AVFilterContext *VAR_4, FILE *VAR_5)
{
    LUT3DContext *VAR_6 = VAR_4->priv;
    float VAR_7;
    int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14 = -1, VAR_15 = -1;
    char VAR_16[VAR_3];
    uint8_t VAR_17[3] = {0, 1, 2};

    while (FUNC_5(VAR_16, sizeof(VAR_16), VAR_5)) {
        if (!FUNC_6(VAR_16, "in", 2)) VAR_14 = FUNC_7(VAR_16 + 2, ((void*)0), 0);
        else if (!FUNC_6(VAR_16, "out", 3)) VAR_15 = FUNC_7(VAR_16 + 3, ((void*)0), 0);
        else if (!FUNC_6(VAR_16, "values", 6)) {
            const char *VAR_18 = VAR_16 + 6;
            do { while (FUNC_0(*VAR_18)) VAR_18++; switch (*VAR_18) { case 'r': VAR_17[0] = 0; break; case 'g': VAR_17[0] = 1; break; case 'b': VAR_17[0] = 2; break; } while (*VAR_18 && !FUNC_0(*VAR_18)) VAR_18++; } while (0);
            do { while (FUNC_0(*VAR_18)) VAR_18++; switch (*VAR_18) { case 'r': VAR_17[1] = 0; break; case 'g': VAR_17[1] = 1; break; case 'b': VAR_17[1] = 2; break; } while (*VAR_18 && !FUNC_0(*VAR_18)) VAR_18++; } while (0);
            do { while (FUNC_0(*VAR_18)) VAR_18++; switch (*VAR_18) { case 'r': VAR_17[2] = 0; break; case 'g': VAR_17[2] = 1; break; case 'b': VAR_17[2] = 2; break; } while (*VAR_18 && !FUNC_0(*VAR_18)) VAR_18++; } while (0);
            break;
        }
    }

    if (VAR_14 == -1 || VAR_15 == -1) {
        FUNC_3(VAR_4, VAR_1, "in and out must be defined\n");
        return VAR_0;
    }
    if (VAR_14 < 2 || VAR_15 < 2 ||
        VAR_14 > VAR_2*VAR_2*VAR_2 ||
        VAR_15 > VAR_2*VAR_2*VAR_2) {
        FUNC_3(VAR_4, VAR_1, "invalid in (%d) or out (%d)\n", VAR_14, VAR_15);
        return VAR_0;
    }
    for (VAR_12 = 1; VAR_12*VAR_12*VAR_12 < VAR_14; VAR_12++);
    VAR_6->lutsize = VAR_12;
    VAR_13 = VAR_12 * VAR_12;

    VAR_8 = FUNC_2(VAR_4, VAR_12);
    if (VAR_8 < 0)
        return VAR_8;

    VAR_7 = 1. / (VAR_15 - 1);

    for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
        for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
            for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9++) {
                struct rgbvec *VAR_19 = &VAR_6->lut[VAR_11 * VAR_13 + VAR_10 * VAR_12 + VAR_9];
                float VAR_20[3];

                FUNC_0(0);
                if (FUNC_4(VAR_16, "%f %f %f", VAR_20, VAR_20 + 1, VAR_20 + 2) != 3)
                    return VAR_0;
                VAR_19->r = VAR_20[VAR_17[0]] * VAR_7;
                VAR_19->g = VAR_20[VAR_17[1]] * VAR_7;
                VAR_19->b = VAR_20[VAR_17[2]] * VAR_7;
            }
        }
    }
    return 0;
}
