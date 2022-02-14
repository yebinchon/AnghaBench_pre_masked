
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_5__ {int quality; scalar_t__** imgbuf; TYPE_1__* pic; scalar_t__** prev_vec; int * vec_entry_vlc; } ;
struct TYPE_4__ {int* linesize; } ;
typedef TYPE_2__ MSS4Context ;
typedef int GetBitContext ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 size_t FUNC_4 (int *,int ,int) ;
 void* FUNC_5 (int *,int,scalar_t__*,int,int,int const,int*) ;
 int FUNC_6 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_7 (int *,int*,int*,int*,int*) ;
 int** VAR_0 ;

__attribute__((used)) static int FUNC_8(MSS4Context *VAR_1, GetBitContext *VAR_2,
                                   uint8_t *VAR_3[3], int VAR_4, int VAR_5)
{
    uint8_t VAR_6[3][4];
    int VAR_7[3];
    int VAR_8[3], VAR_9[3];
    int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    int VAR_15 = 0, VAR_16 = 0;
    int VAR_17[3] = { 0 };
    int VAR_18[3] = { 0 };
    int VAR_19[16] = { 0 };
    uint8_t *VAR_20[3];

    const int VAR_21 = VAR_1->quality == 100 ? 0 : 2;

    for (VAR_10 = 0; VAR_10 < 3; VAR_10++)
        VAR_20[VAR_10] = VAR_1->imgbuf[VAR_10];

    for (VAR_10 = 0; VAR_10 < 3; VAR_10++) {
        VAR_7[VAR_10] = VAR_0[!!VAR_10][FUNC_4(VAR_2, 0, 3)];
        for (VAR_11 = 0; VAR_11 < VAR_7[VAR_10]; VAR_11++) {
            VAR_6[VAR_10][VAR_11] = FUNC_3(VAR_2, &VAR_1->vec_entry_vlc[!!VAR_10]);
            VAR_6[VAR_10][VAR_11] += VAR_1->prev_vec[VAR_10][VAR_11];
            VAR_1->prev_vec[VAR_10][VAR_11] = VAR_6[VAR_10][VAR_11];
        }
        VAR_9[VAR_10] = VAR_7[VAR_10] > 1;
        VAR_8[VAR_10] = VAR_7[VAR_10] > 2 ? VAR_7[VAR_10] - 2 : 0;
    }

    for (VAR_11 = 0; VAR_11 < 16; VAR_11++) {
        if (FUNC_2(VAR_2)) {
            VAR_14 = 0;
            if (FUNC_2(VAR_2)) {
                VAR_19[0] = 0;
                VAR_17[0] = VAR_17[1] = VAR_17[2] = 0;
                VAR_13 = 2;
            } else {
                VAR_13 = FUNC_2(VAR_2);
                if (VAR_13)
                    VAR_14 = FUNC_1(VAR_2, 4);
            }
            for (VAR_10 = 0; VAR_10 < 16; VAR_10++) {
                if (VAR_13 <= 1) {
                    VAR_17[0] = VAR_19[VAR_10] & 7;
                    VAR_17[1] = (VAR_19[VAR_10] >> 3) & 7;
                    VAR_17[2] = VAR_19[VAR_10] >> 6;
                    if (VAR_13 == 1 && VAR_10 == VAR_14) {
                        FUNC_7(VAR_2, VAR_17, VAR_9, VAR_8, VAR_17);
                    }
                } else if (VAR_13 == 2) {
                    if (FUNC_2(VAR_2))
                        FUNC_7(VAR_2, VAR_17, VAR_9, VAR_8, VAR_17);
                }
                for (VAR_12 = 0; VAR_12 < 3; VAR_12++)
                    *VAR_20[VAR_12]++ = FUNC_5(VAR_2, VAR_17[VAR_12], VAR_6[VAR_12],
                                                 VAR_7[VAR_12], VAR_12,
                                                 VAR_21, VAR_18);
                VAR_19[VAR_10] = FUNC_0(VAR_17);
            }
        } else {
            if (FUNC_2(VAR_2)) {
                VAR_14 = FUNC_1(VAR_2, 4);
                if (VAR_14 >= VAR_16)
                    VAR_14++;
                VAR_16 = VAR_14;
            } else {
                VAR_14 = VAR_16;
            }
            if (VAR_14) {
                VAR_17[0] = VAR_19[0] & 7;
                VAR_17[1] = (VAR_19[0] >> 3) & 7;
                VAR_17[2] = VAR_19[0] >> 6;
                for (VAR_10 = 0; VAR_10 < 3; VAR_10++) {
                    for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++) {
                        *VAR_20[VAR_10]++ = FUNC_5(VAR_2, VAR_17[VAR_10], VAR_6[VAR_10],
                                                     VAR_7[VAR_10], VAR_10, VAR_21,
                                                     VAR_18);
                        VAR_19[VAR_12] = FUNC_0(VAR_17);
                    }
                }
            }

            if (VAR_14 != 16) {
                VAR_17[0] = VAR_15 & 7;
                VAR_17[1] = (VAR_15 >> 3) & 7;
                VAR_17[2] = VAR_15 >> 6;
                if (FUNC_2(VAR_2)) {
                    FUNC_7(VAR_2, VAR_17, VAR_9, VAR_8, VAR_17);
                    VAR_15 = FUNC_0(VAR_17);
                }
                for (VAR_10 = 0; VAR_10 < 3; VAR_10++) {
                    for (VAR_12 = 0; VAR_12 < 16 - VAR_14; VAR_12++) {
                        *VAR_20[VAR_10]++ = FUNC_5(VAR_2, VAR_17[VAR_10], VAR_6[VAR_10],
                                                     VAR_7[VAR_10], VAR_10, VAR_21,
                                                     VAR_18);
                        VAR_19[VAR_14 + VAR_12] = FUNC_0(VAR_17);
                    }
                }
            }
        }
    }

    for (VAR_10 = 0; VAR_10 < 3; VAR_10++)
        for (VAR_11 = 0; VAR_11 < 16; VAR_11++)
            FUNC_6(VAR_3[VAR_10] + VAR_4 * 16 + VAR_11 * VAR_1->pic->linesize[VAR_10],
                   VAR_1->imgbuf[VAR_10] + VAR_11 * 16, 16);

    return 0;
}
