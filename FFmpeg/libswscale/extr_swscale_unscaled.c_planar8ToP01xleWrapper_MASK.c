
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int srcW; } ;
typedef TYPE_1__ SwsContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(SwsContext *VAR_0, const uint8_t *VAR_1[],
                                  int VAR_2[], int VAR_3,
                                  int VAR_4, uint8_t *VAR_5[],
                                  int VAR_6[])
{
    uint16_t *VAR_7 = (uint16_t*)(VAR_5[0] + VAR_6[0] * VAR_3);
    uint16_t *VAR_8 = (uint16_t*)(VAR_5[1] + VAR_6[1] * VAR_3 / 2);
    int VAR_9, VAR_10, VAR_11;

    FUNC_0(!(VAR_6[0] % 2 || VAR_6[1] % 2));

    for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
        uint16_t *VAR_12 = VAR_7;
        const uint8_t *VAR_13 = VAR_1[0];
        for (VAR_9 = VAR_0->srcW; VAR_9 > 0; VAR_9--) {
            VAR_11 = *VAR_13++;
            FUNC_1(VAR_12++, VAR_11 | (VAR_11 << 8));
        }
        VAR_1[0] += VAR_2[0];
        VAR_7 += VAR_6[0] / 2;

        if (!(VAR_10 & 1)) {
            uint16_t *VAR_14 = VAR_8;
            const uint8_t *VAR_15 = VAR_1[1];
            const uint8_t *VAR_16 = VAR_1[2];
            for (VAR_9 = VAR_0->srcW / 2; VAR_9 > 0; VAR_9--) {
                VAR_11 = *VAR_15++;
                FUNC_1(VAR_14++, VAR_11 | (VAR_11 << 8));
                VAR_11 = *VAR_16++;
                FUNC_1(VAR_14++, VAR_11 | (VAR_11 << 8));
            }
            VAR_1[1] += VAR_2[1];
            VAR_1[2] += VAR_2[2];
            VAR_8 += VAR_6[1] / 2;
        }
    }

    return VAR_4;
}
