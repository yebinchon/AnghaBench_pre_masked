
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int frame_bits; int frame_size; int nb_channels; int subframe_size; } ;
typedef TYPE_1__ QDMCContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int,int,int,int,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int) ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_3(QDMCContext *VAR_2, GetBitContext *VAR_3)
{
    int VAR_4, VAR_5, VAR_6 = 0, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    int VAR_12, VAR_13, VAR_14, VAR_15;

    for (VAR_8 = 0; VAR_8 < 5; VAR_8++) {
        VAR_10 = 1 << (VAR_2->frame_bits - VAR_8 - 1);
        VAR_11 = 4 - VAR_8;
        VAR_14 = 0;
        VAR_15 = 0;

        for (VAR_7 = 1; ; VAR_7 = VAR_9 + 1) {
            int VAR_16;

            VAR_16 = FUNC_2(VAR_3, &VAR_1[3], 1);
            if (VAR_16 < 0)
                return VAR_0;

            VAR_9 = VAR_7 + VAR_16;
            while (VAR_9 >= VAR_10 - 1) {
                VAR_9 += 2 - VAR_10;
                VAR_14 += VAR_10;
                VAR_15 += 1 << VAR_11;
            }

            if (VAR_14 >= VAR_2->frame_size)
                break;

            if (VAR_2->nb_channels > 1)
                VAR_6 = FUNC_1(VAR_3, 2);

            VAR_4 = FUNC_2(VAR_3, &VAR_1[2], 0);
            if (VAR_4 < 0)
                return VAR_0;
            VAR_5 = FUNC_1(VAR_3, 3);

            if (VAR_6 > 1) {
                VAR_12 = FUNC_2(VAR_3, &VAR_1[4], 0);
                if (VAR_12 < 0)
                    return VAR_0;
                VAR_12 = VAR_4 - VAR_12;

                VAR_13 = FUNC_2(VAR_3, &VAR_1[5], 0);
                if (VAR_13 < 0)
                    return VAR_0;
                VAR_13 = VAR_5 - VAR_13;

                if (VAR_13 < 0)
                    VAR_13 += 8;
            }

            if ((VAR_9 >> VAR_11) + 1 < VAR_2->subframe_size) {
                FUNC_0(VAR_2, VAR_8, VAR_15, VAR_9, VAR_6 & 1, VAR_4, VAR_5);
                if (VAR_6 > 1)
                    FUNC_0(VAR_2, VAR_8, VAR_15, VAR_9, ~VAR_6 & 1, VAR_12, VAR_13);
            }
        }
    }

    return 0;
}
