
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef double uint8_t ;
struct TYPE_6__ {int block_size; } ;
struct TYPE_5__ {int y; int x; } ;
typedef TYPE_1__ PosCode ;
typedef TYPE_2__ BM3DContext ;



__attribute__((used)) static double FUNC_0(BM3DContext *VAR_0, PosCode *VAR_1, const uint8_t *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    const uint8_t *VAR_6 = VAR_2 + VAR_1->y * VAR_3 + VAR_1->x;
    const uint8_t *VAR_7 = VAR_2 + VAR_4 * VAR_3 + VAR_5;
    const int VAR_8 = VAR_0->block_size;
    double VAR_9 = 0.;
    int VAR_10, VAR_11;

    for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
        for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
            double VAR_12 = VAR_7[VAR_10] - VAR_6[VAR_10];
            VAR_9 += VAR_12 * VAR_12;
        }

        VAR_6 += VAR_3;
        VAR_7 += VAR_3;
    }

    return VAR_9;
}
