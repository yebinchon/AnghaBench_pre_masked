
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {int* q_intra_matrix; int pb; } ;
typedef TYPE_1__ ASV1Context ;


 int FUNC_0 (int *,int) ;
 int** VAR_0 ;
 int* VAR_1 ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static inline void FUNC_2(ASV1Context *VAR_2, int16_t VAR_3[64])
{
    int VAR_4;
    int VAR_5 = 0;

    FUNC_1(&VAR_2->pb, 8, (VAR_3[0] + 32) >> 6);
    VAR_3[0] = 0;

    for (VAR_4 = 0; VAR_4 < 10; VAR_4++) {
        const int VAR_6 = VAR_1[4 * VAR_4];
        int VAR_7 = 0;

        if ((VAR_3[VAR_6 + 0] = (VAR_3[VAR_6 + 0] *
                                 VAR_2->q_intra_matrix[VAR_6 + 0] + (1 << 15)) >> 16))
            VAR_7 |= 8;
        if ((VAR_3[VAR_6 + 8] = (VAR_3[VAR_6 + 8] *
                                 VAR_2->q_intra_matrix[VAR_6 + 8] + (1 << 15)) >> 16))
            VAR_7 |= 4;
        if ((VAR_3[VAR_6 + 1] = (VAR_3[VAR_6 + 1] *
                                 VAR_2->q_intra_matrix[VAR_6 + 1] + (1 << 15)) >> 16))
            VAR_7 |= 2;
        if ((VAR_3[VAR_6 + 9] = (VAR_3[VAR_6 + 9] *
                                 VAR_2->q_intra_matrix[VAR_6 + 9] + (1 << 15)) >> 16))
            VAR_7 |= 1;

        if (VAR_7) {
            for (; VAR_5; VAR_5--)
                FUNC_1(&VAR_2->pb, VAR_0[0][1], VAR_0[0][0]);

            FUNC_1(&VAR_2->pb, VAR_0[VAR_7][1], VAR_0[VAR_7][0]);

            if (VAR_7 & 8)
                FUNC_0(&VAR_2->pb, VAR_3[VAR_6 + 0]);
            if (VAR_7 & 4)
                FUNC_0(&VAR_2->pb, VAR_3[VAR_6 + 8]);
            if (VAR_7 & 2)
                FUNC_0(&VAR_2->pb, VAR_3[VAR_6 + 1]);
            if (VAR_7 & 1)
                FUNC_0(&VAR_2->pb, VAR_3[VAR_6 + 9]);
        } else {
            VAR_5++;
        }
    }
    FUNC_1(&VAR_2->pb, VAR_0[16][1], VAR_0[16][0]);
}
