
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_4__ {int* q_intra_matrix; int pb; } ;
typedef TYPE_1__ ASV1Context ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;
 int FUNC_2 (int) ;
 int ** VAR_0 ;
 int ** VAR_1 ;
 int* VAR_2 ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static inline void FUNC_4(ASV1Context *VAR_3, int16_t VAR_4[64])
{
    int VAR_5;
    int VAR_6 = 0;

    for (VAR_6 = 63; VAR_6 > 3; VAR_6--) {
        const int VAR_7 = VAR_2[VAR_6];
        if ((VAR_4[VAR_7] * VAR_3->q_intra_matrix[VAR_7] + (1 << 15)) >> 16)
            break;
    }

    VAR_6 >>= 2;

    FUNC_0(&VAR_3->pb, 4, VAR_6);
    FUNC_0(&VAR_3->pb, 8, (VAR_4[0] + 32) >> 6);
    VAR_4[0] = 0;

    for (VAR_5 = 0; VAR_5 <= VAR_6; VAR_5++) {
        const int VAR_8 = VAR_2[4 * VAR_5];
        int VAR_9 = 0;

        if ((VAR_4[VAR_8 + 0] = (VAR_4[VAR_8 + 0] *
                                 VAR_3->q_intra_matrix[VAR_8 + 0] + (1 << 15)) >> 16))
            VAR_9 |= 8;
        if ((VAR_4[VAR_8 + 8] = (VAR_4[VAR_8 + 8] *
                                 VAR_3->q_intra_matrix[VAR_8 + 8] + (1 << 15)) >> 16))
            VAR_9 |= 4;
        if ((VAR_4[VAR_8 + 1] = (VAR_4[VAR_8 + 1] *
                                 VAR_3->q_intra_matrix[VAR_8 + 1] + (1 << 15)) >> 16))
            VAR_9 |= 2;
        if ((VAR_4[VAR_8 + 9] = (VAR_4[VAR_8 + 9] *
                                 VAR_3->q_intra_matrix[VAR_8 + 9] + (1 << 15)) >> 16))
            VAR_9 |= 1;

        FUNC_2(VAR_5 || VAR_9 < 8);
        if (VAR_5)
            FUNC_3(&VAR_3->pb, VAR_0[VAR_9][1], VAR_0[VAR_9][0]);
        else
            FUNC_3(&VAR_3->pb, VAR_1[VAR_9][1], VAR_1[VAR_9][0]);

        if (VAR_9) {
            if (VAR_9 & 8)
                FUNC_1(VAR_3, &VAR_3->pb, VAR_4[VAR_8 + 0]);
            if (VAR_9 & 4)
                FUNC_1(VAR_3, &VAR_3->pb, VAR_4[VAR_8 + 8]);
            if (VAR_9 & 2)
                FUNC_1(VAR_3, &VAR_3->pb, VAR_4[VAR_8 + 1]);
            if (VAR_9 & 1)
                FUNC_1(VAR_3, &VAR_3->pb, VAR_4[VAR_8 + 9]);
        }
    }
}
