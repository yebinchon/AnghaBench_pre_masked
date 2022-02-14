
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nb_channels; size_t band_index; int*** noise; } ;
typedef TYPE_1__ QDMCContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_1(QDMCContext *VAR_3, GetBitContext *VAR_4)
{
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

    for (VAR_5 = 0; VAR_5 < VAR_3->nb_channels; VAR_5++) {
        for (VAR_10 = 0; VAR_10 < VAR_1[VAR_3->band_index]; VAR_10++) {
            VAR_8 = FUNC_0(VAR_4, &VAR_2[0], 0);
            if (VAR_8 < 0)
                return VAR_0;

            if (VAR_8 & 1)
                VAR_8 = VAR_8 + 1;
            else
                VAR_8 = -VAR_8;

            VAR_11 = VAR_8 / 2;
            VAR_3->noise[VAR_5][VAR_10][0] = VAR_11 - 1;
            for (VAR_6 = 0; VAR_6 < 15;) {
                VAR_13 = FUNC_0(VAR_4, &VAR_2[1], 1);
                if (VAR_13 < 0)
                    return VAR_0;
                VAR_13 += 1;

                VAR_8 = FUNC_0(VAR_4, &VAR_2[0], 0);
                if (VAR_8 < 0)
                    return VAR_0;

                if (VAR_8 & 1)
                    VAR_12 = VAR_11 + (VAR_8 + 1) / 2;
                else
                    VAR_12 = VAR_11 - VAR_8 / 2;

                VAR_9 = VAR_6 + 1;
                if (VAR_13 + VAR_9 > 16)
                    return VAR_0;

                for (VAR_7 = 1; VAR_9 <= VAR_6 + VAR_13; VAR_7++, VAR_9++)
                    VAR_3->noise[VAR_5][VAR_10][VAR_9] = VAR_11 + VAR_7 * (VAR_12 - VAR_11) / VAR_13 - 1;

                VAR_11 = VAR_12;
                VAR_6 += VAR_13;
            }
        }
    }

    return 0;
}
