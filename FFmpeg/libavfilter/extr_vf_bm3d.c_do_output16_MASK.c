
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {int* planeheight; int* planewidth; int depth; TYPE_1__* slices; } ;
struct TYPE_4__ {float* num; float* den; } ;
typedef TYPE_1__ SliceContext ;
typedef TYPE_2__ BM3DContext ;


 int FUNC_0 (int ,int const) ;
 int FUNC_1 (float) ;

__attribute__((used)) static void FUNC_2(BM3DContext *VAR_0, uint8_t *VAR_1, int VAR_2,
                        int VAR_3, int VAR_4)
{
    const int VAR_5 = VAR_0->planeheight[VAR_3];
    const int VAR_6 = VAR_0->planewidth[VAR_3];
    const int VAR_7 = VAR_0->depth;
    int VAR_8, VAR_9, VAR_10;

    for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
        for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
            uint16_t *VAR_11 = (uint16_t *)VAR_1 + VAR_8 * VAR_2 / 2;
            float VAR_12 = 0.f;
            float VAR_13 = 0.f;

            for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
                SliceContext *VAR_14 = &VAR_0->slices[VAR_10];
                float VAR_15 = VAR_14->num[VAR_8 * VAR_6 + VAR_9];
                float VAR_16 = VAR_14->den[VAR_8 * VAR_6 + VAR_9];

                VAR_13 += VAR_15;
                VAR_12 += VAR_16;
            }

            VAR_11[VAR_9] = FUNC_0(FUNC_1(VAR_13 / VAR_12), VAR_7);
        }
    }
}
