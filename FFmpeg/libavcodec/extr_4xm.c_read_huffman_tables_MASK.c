
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int up ;
typedef int uint8_t ;
struct TYPE_3__ {int pre_vlc; int avctx; } ;
typedef TYPE_1__ FourXContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,int,int*,int,int,int*,int,int,int ) ;
 int FUNC_4 (int*,int,int) ;

__attribute__((used)) static const uint8_t *FUNC_5(FourXContext *VAR_2,
                                          const uint8_t * const VAR_3,
                                          int VAR_4)
{
    int VAR_5[512] = { 0 };
    uint8_t VAR_6[512];
    int VAR_7[512];
    uint8_t VAR_8[257];
    int VAR_9[257];
    int VAR_10, VAR_11;
    const uint8_t *VAR_12 = VAR_3;
    const uint8_t *VAR_13 = VAR_3 + VAR_4;
    int VAR_14;

    FUNC_4(VAR_7, -1, sizeof(VAR_7));

    VAR_10 = *VAR_12++;
    VAR_11 = *VAR_12++;
    for (;;) {
        int VAR_15;

        if (VAR_13 - VAR_12 < FUNC_0(VAR_11 - VAR_10 + 1, 0) + 1) {
            FUNC_1(VAR_2->avctx, VAR_1, "invalid data in read_huffman_tables\n");
            return ((void*)0);
        }

        for (VAR_15 = VAR_10; VAR_15 <= VAR_11; VAR_15++)
            VAR_5[VAR_15] = *VAR_12++;
        VAR_10 = *VAR_12++;
        if (VAR_10 == 0)
            break;

        VAR_11 = *VAR_12++;
    }
    VAR_5[256] = 1;

    while ((VAR_12 - VAR_3) & 3)
        VAR_12++;

    if (VAR_12 > VAR_13) {
        FUNC_1(VAR_2->avctx, VAR_1, "ptr overflow in read_huffman_tables\n");
        return ((void*)0);
    }

    for (VAR_14 = 257; VAR_14 < 512; VAR_14++) {
        int VAR_16[2] = { 256 * 256, 256 * 256 };
        int VAR_17[2] = { 0, 0 };
        int VAR_18;
        for (VAR_18 = 0; VAR_18 < VAR_14; VAR_18++) {
            if (VAR_5[VAR_18] == 0)
                continue;
            if (VAR_5[VAR_18] < VAR_16[1]) {
                if (VAR_5[VAR_18] < VAR_16[0]) {
                    VAR_16[1] = VAR_16[0];
                    VAR_17[1] = VAR_17[0];
                    VAR_16[0] = VAR_5[VAR_18];
                    VAR_17[0] = VAR_18;
                } else {
                    VAR_16[1] = VAR_5[VAR_18];
                    VAR_17[1] = VAR_18;
                }
            }
        }
        if (VAR_16[1] == 256 * 256)
            break;

        VAR_5[VAR_14] = VAR_16[0] + VAR_16[1];
        VAR_6[VAR_17[0]] = 0;
        VAR_6[VAR_17[1]] = 1;
        VAR_7[VAR_17[0]] =
        VAR_7[VAR_17[1]] = VAR_14;
        VAR_5[VAR_17[0]] = VAR_5[VAR_17[1]] = 0;
    }

    for (VAR_14 = 0; VAR_14 < 257; VAR_14++) {
        int VAR_19, VAR_20 = 0, VAR_21 = 0;

        for (VAR_19 = VAR_14; VAR_7[VAR_19] != -1; VAR_19 = VAR_7[VAR_19]) {
            VAR_21 += VAR_6[VAR_19] << VAR_20;
            VAR_20++;
            if (VAR_20 > 31)

                FUNC_1(VAR_2->avctx, VAR_1,
                       "vlc length overflow\n");
        }

        VAR_9[VAR_14] = VAR_21;
        VAR_8[VAR_14] = VAR_20;
    }

    FUNC_2(&VAR_2->pre_vlc);
    if (FUNC_3(&VAR_2->pre_vlc, VAR_0, 257, VAR_8, 1, 1,
                 VAR_9, 4, 4, 0))
        return ((void*)0);

    return VAR_12;
}
