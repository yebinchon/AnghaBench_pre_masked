
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int smooth_percent; } ;
struct TYPE_7__ {int start; int end; } ;
typedef TYPE_1__ IterIndices ;
typedef TYPE_2__ DeshakeOpenCLContext ;
typedef int AVFifoBuffer ;


 float FUNC_0 (float) ;
 int FUNC_1 (float*,int,float) ;
 float FUNC_2 (float,int) ;
 int FUNC_3 (TYPE_2__*,int *,float*,int) ;
 TYPE_1__ FUNC_4 (TYPE_2__*,int) ;

__attribute__((used)) static float FUNC_5(
    DeshakeOpenCLContext *VAR_0,
    float *VAR_1,
    int VAR_2,
    float VAR_3,
    AVFifoBuffer *VAR_4
) {
    float VAR_5 = 0, VAR_6 = 0, VAR_7 = 0, VAR_8, VAR_9,
          VAR_10, VAR_11;
    IterIndices VAR_12 = FUNC_4(VAR_0, VAR_2);
    float VAR_13 = 40.0f;
    float VAR_14 = 2.0f;
    float VAR_15;

    if (VAR_0->smooth_percent) {
        VAR_15 = (VAR_13 - 0.5f) * VAR_0->smooth_percent + 0.5f;
    } else {
        FUNC_1(VAR_1, VAR_2, VAR_13);
        for (int VAR_16 = VAR_12.start, VAR_17 = 0; VAR_16 < VAR_12.end; ++VAR_16, ++VAR_17) {
            FUNC_3(VAR_0, VAR_4, &VAR_8, VAR_16);
            VAR_5 += VAR_8 * VAR_1[VAR_17];
        }

        FUNC_1(VAR_1, VAR_2, VAR_14);
        for (int VAR_18 = VAR_12.start, VAR_19 = 0; VAR_18 < VAR_12.end; ++VAR_18, ++VAR_19) {
            FUNC_3(VAR_0, VAR_4, &VAR_8, VAR_18);
            VAR_6 += VAR_8 * VAR_1[VAR_19];
        }

        VAR_9 = FUNC_0(VAR_5 - VAR_6);
        VAR_10 = VAR_9 / VAR_3;
        VAR_11 = 1 - VAR_10;
        VAR_15 = VAR_13 * FUNC_2(VAR_11, 40);
    }

    FUNC_1(VAR_1, VAR_2, VAR_15);
    for (int VAR_20 = VAR_12.start, VAR_21 = 0; VAR_20 < VAR_12.end; ++VAR_20, ++VAR_21) {
        FUNC_3(VAR_0, VAR_4, &VAR_8, VAR_20);
        VAR_7 += VAR_8 * VAR_1[VAR_21];
    }

    return VAR_7;
}
