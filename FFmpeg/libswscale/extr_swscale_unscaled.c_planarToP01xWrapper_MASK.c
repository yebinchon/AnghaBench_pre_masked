
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_8__ {TYPE_1__* comp; } ;
struct TYPE_7__ {int srcW; int dstFormat; int srcFormat; } ;
struct TYPE_6__ {int const depth; int const shift; } ;
typedef TYPE_2__ SwsContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;


 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(SwsContext *VAR_0, const uint8_t *VAR_1[],
                               int VAR_2[], int VAR_3,
                               int VAR_4, uint8_t *VAR_5[],
                               int VAR_6[])
{
    const AVPixFmtDescriptor *VAR_7 = FUNC_1(VAR_0->srcFormat);
    const AVPixFmtDescriptor *VAR_8 = FUNC_1(VAR_0->dstFormat);
    const uint16_t **VAR_9 = (const uint16_t**)VAR_1;
    uint16_t *VAR_10 = (uint16_t*)(VAR_5[0] + VAR_6[0] * VAR_3);
    uint16_t *VAR_11 = (uint16_t*)(VAR_5[1] + VAR_6[1] * VAR_3 / 2);
    int VAR_12, VAR_13;


    const int VAR_14[3] = {
        VAR_8->comp[0].depth + VAR_8->comp[0].shift -
        VAR_7->comp[0].depth - VAR_7->comp[0].shift,
        VAR_8->comp[1].depth + VAR_8->comp[1].shift -
        VAR_7->comp[1].depth - VAR_7->comp[1].shift,
        VAR_8->comp[2].depth + VAR_8->comp[2].shift -
        VAR_7->comp[2].depth - VAR_7->comp[2].shift,
    };

    FUNC_0(!(VAR_2[0] % 2 || VAR_2[1] % 2 || VAR_2[2] % 2 ||
                 VAR_6[0] % 2 || VAR_6[1] % 2));

    for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
        uint16_t *VAR_15 = VAR_10;
        const uint16_t *VAR_16 = VAR_9[0];
        for (VAR_12 = VAR_0->srcW; VAR_12 > 0; VAR_12--) {
            *VAR_15++ = *VAR_16++ << VAR_14[0];
        }
        VAR_9[0] += VAR_2[0] / 2;
        VAR_10 += VAR_6[0] / 2;

        if (!(VAR_13 & 1)) {
            uint16_t *VAR_17 = VAR_11;
            const uint16_t *VAR_18 = VAR_9[1];
            const uint16_t *VAR_19 = VAR_9[2];
            for (VAR_12 = VAR_0->srcW / 2; VAR_12 > 0; VAR_12--) {
                *VAR_17++ = *VAR_18++ << VAR_14[1];
                *VAR_17++ = *VAR_19++ << VAR_14[2];
            }
            VAR_9[1] += VAR_2[1] / 2;
            VAR_9[2] += VAR_2[2] / 2;
            VAR_11 += VAR_6[1] / 2;
        }
    }

    return VAR_4;
}
