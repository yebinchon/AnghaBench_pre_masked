
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* area_q; size_t cno; int* bit_size; int* prev; int* next; int* mb; } ;
typedef TYPE_1__ EncBlockInfo ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int* VAR_0 ;
 scalar_t__** VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline void FUNC_2(EncBlockInfo *VAR_4, int *VAR_5)
{
    int VAR_6[5];
    int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    EncBlockInfo *VAR_13;

    VAR_6[0] =
    VAR_6[1] =
    VAR_6[2] =
    VAR_6[3] =
    VAR_6[4] = 1 << 24;
    do {
        VAR_13 = VAR_4;
        for (VAR_7 = 0; VAR_7 < 5; VAR_7++) {
            if (!VAR_5[VAR_7])
                continue;

            VAR_5[VAR_7]--;
            VAR_6[VAR_7] = 0;
            for (VAR_8 = 0; VAR_8 < 6; VAR_8++, VAR_13++) {
                for (VAR_10 = 0; VAR_10 < 4; VAR_10++) {
                    if (VAR_13->area_q[VAR_10] != VAR_1[VAR_5[VAR_7] + VAR_0[VAR_13->cno]][VAR_10]) {
                        VAR_13->bit_size[VAR_10] = 1;
                        VAR_13->area_q[VAR_10]++;
                        VAR_11 = VAR_13->prev[VAR_10];
                        FUNC_0(VAR_13->next[VAR_11] >= VAR_2[VAR_10 + 1] || VAR_13->mb[VAR_11]);
                        for (VAR_9 = VAR_13->next[VAR_11]; VAR_9 < VAR_2[VAR_10 + 1]; VAR_9 = VAR_13->next[VAR_9]) {
                            VAR_13->mb[VAR_9] >>= 1;
                            if (VAR_13->mb[VAR_9]) {
                                VAR_13->bit_size[VAR_10] += FUNC_1(VAR_9 - VAR_11 - 1, VAR_13->mb[VAR_9]);
                                VAR_11 = VAR_9;
                            } else {
                                if (VAR_13->next[VAR_9] >= VAR_2[VAR_10 + 1] && VAR_13->next[VAR_9] < 64) {
                                    for (VAR_12 = VAR_10 + 1; VAR_13->next[VAR_9] >= VAR_2[VAR_12 + 1]; VAR_12++)
                                        VAR_13->prev[VAR_12] = VAR_11;
                                    FUNC_0(VAR_12 < 4);
                                    FUNC_0(VAR_13->mb[VAR_13->next[VAR_9]]);
                                    VAR_13->bit_size[VAR_12] += FUNC_1(VAR_13->next[VAR_9] - VAR_11 - 1, VAR_13->mb[VAR_13->next[VAR_9]]) -
                                                       FUNC_1(VAR_13->next[VAR_9] - VAR_9 - 1, VAR_13->mb[VAR_13->next[VAR_9]]);
                                    FUNC_0(VAR_13->prev[VAR_12] == VAR_9 && (VAR_12 + 1 >= 4 || VAR_13->prev[VAR_12 + 1] != VAR_9));
                                    VAR_13->prev[VAR_12] = VAR_11;
                                }
                                VAR_13->next[VAR_11] = VAR_13->next[VAR_9];
                            }
                        }
                        VAR_13->prev[VAR_10 + 1] = VAR_11;
                    }
                    VAR_6[VAR_7] += VAR_13->bit_size[VAR_10];
                }
            }
            if (VAR_3 >= VAR_6[0] + VAR_6[1] + VAR_6[2] + VAR_6[3] + VAR_6[4])
                return;
        }
    } while (VAR_5[0] | VAR_5[1] | VAR_5[2] | VAR_5[3] | VAR_5[4]);

    for (VAR_10 = 2; VAR_10 == 2 || VAR_3 < VAR_6[0]; VAR_10 += VAR_10) {
        VAR_13 = VAR_4;
        VAR_6[0] = 5 * 6 * 4;
        for (VAR_8 = 0; VAR_8 < 6 * 5; VAR_8++, VAR_13++) {
            VAR_11 = VAR_13->prev[0];
            for (VAR_9 = VAR_13->next[VAR_11]; VAR_9 < 64; VAR_9 = VAR_13->next[VAR_9]) {
                if (VAR_13->mb[VAR_9] < VAR_10 && VAR_13->mb[VAR_9] > -VAR_10) {
                    VAR_13->next[VAR_11] = VAR_13->next[VAR_9];
                } else {
                    VAR_6[0] += FUNC_1(VAR_9 - VAR_11 - 1, VAR_13->mb[VAR_9]);
                    VAR_11 = VAR_9;
                }
            }
        }
    }
}
