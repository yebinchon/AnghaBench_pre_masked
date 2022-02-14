
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int** linelen; int ndeclevels; int* i_linebuf; int** mod; } ;
typedef TYPE_1__ DWTContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int,int) ;

__attribute__((used)) static void FUNC_1(DWTContext *VAR_2, int *VAR_3)
{
    int VAR_4;
    int VAR_5 = VAR_2->linelen[VAR_2->ndeclevels-1][0];
    int VAR_6 = VAR_2->linelen[VAR_2->ndeclevels-1][1];
    int VAR_7;
    int *VAR_8 = VAR_2->i_linebuf;
    VAR_8 += 5;

    for (VAR_7 = 0; VAR_7 < VAR_5 * VAR_6; VAR_7++)
        VAR_3[VAR_7] *= 1 << VAR_1;

    for (VAR_4 = VAR_2->ndeclevels-1; VAR_4 >= 0; VAR_4--){
        int VAR_9 = VAR_2->linelen[VAR_4][0],
            VAR_10 = VAR_2->linelen[VAR_4][1],
            VAR_11 = VAR_2->mod[VAR_4][0],
            VAR_12 = VAR_2->mod[VAR_4][1],
            VAR_13;
        int *VAR_14;


        VAR_14 = VAR_8 + VAR_12;
        for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
            int VAR_15, VAR_16 = 0;

            for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++)
                VAR_14[VAR_15] = VAR_3[VAR_5*VAR_15 + VAR_13];

            FUNC_0(VAR_8, VAR_12, VAR_12 + VAR_10);


            for (VAR_15 = VAR_12; VAR_15 < VAR_10; VAR_15+=2, VAR_16++)
                VAR_3[VAR_5*VAR_16 + VAR_13] = ((VAR_14[VAR_15] * VAR_0) + (1 << 15)) >> 16;
            for (VAR_15 = 1-VAR_12; VAR_15 < VAR_10; VAR_15+=2, VAR_16++)
                VAR_3[VAR_5*VAR_16 + VAR_13] = VAR_14[VAR_15];
        }


        VAR_14 = VAR_8 + VAR_11;
        for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++){
            int VAR_17, VAR_18 = 0;

            for (VAR_17 = 0; VAR_17 < VAR_9; VAR_17++)
                VAR_14[VAR_17] = VAR_3[VAR_5*VAR_13 + VAR_17];

            FUNC_0(VAR_8, VAR_11, VAR_11 + VAR_9);


            for (VAR_17 = VAR_11; VAR_17 < VAR_9; VAR_17+=2, VAR_18++)
                VAR_3[VAR_5*VAR_13 + VAR_18] = ((VAR_14[VAR_17] * VAR_0) + (1 << 15)) >> 16;
            for (VAR_17 = 1-VAR_11; VAR_17 < VAR_9; VAR_17+=2, VAR_18++)
                VAR_3[VAR_5*VAR_13 + VAR_18] = VAR_14[VAR_17];
        }

    }

    for (VAR_7 = 0; VAR_7 < VAR_5 * VAR_6; VAR_7++)
        VAR_3[VAR_7] = (VAR_3[VAR_7] + ((1<<VAR_1)>>1)) >> VAR_1;
}
