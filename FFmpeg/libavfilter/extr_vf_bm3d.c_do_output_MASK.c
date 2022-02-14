
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int* planeheight; int* planewidth; TYPE_1__* slices; } ;
struct TYPE_4__ {float* num; float* den; } ;
typedef TYPE_1__ SliceContext ;
typedef TYPE_2__ BM3DContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (float) ;

__attribute__((used)) static void FUNC_2(BM3DContext *VAR_0, uint8_t *VAR_1, int VAR_2,
                      int VAR_3, int VAR_4)
{
    const int VAR_5 = VAR_0->planeheight[VAR_3];
    const int VAR_6 = VAR_0->planewidth[VAR_3];
    int VAR_7, VAR_8, VAR_9;

    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
        for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
            uint8_t *VAR_10 = VAR_1 + VAR_7 * VAR_2;
            float VAR_11 = 0.f;
            float VAR_12 = 0.f;

            for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
                SliceContext *VAR_13 = &VAR_0->slices[VAR_9];
                float VAR_14 = VAR_13->num[VAR_7 * VAR_6 + VAR_8];
                float VAR_15 = VAR_13->den[VAR_7 * VAR_6 + VAR_8];

                VAR_12 += VAR_14;
                VAR_11 += VAR_15;
            }

            VAR_10[VAR_8] = FUNC_0(FUNC_1(VAR_12 / VAR_11));
        }
    }
}
