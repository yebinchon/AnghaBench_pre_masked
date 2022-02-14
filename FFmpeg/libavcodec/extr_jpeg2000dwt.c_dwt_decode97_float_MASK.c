
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int** linelen; int ndeclevels; float* f_linebuf; int** mod; } ;
typedef TYPE_1__ DWTContext ;


 int FUNC_0 (float*,int,int) ;

__attribute__((used)) static void FUNC_1(DWTContext *VAR_0, float *VAR_1)
{
    int VAR_2;
    int VAR_3 = VAR_0->linelen[VAR_0->ndeclevels - 1][0];
    float *VAR_4 = VAR_0->f_linebuf;
    float *VAR_5 = VAR_1;

    VAR_4 += 5;

    for (VAR_2 = 0; VAR_2 < VAR_0->ndeclevels; VAR_2++) {
        int VAR_6 = VAR_0->linelen[VAR_2][0],
            VAR_7 = VAR_0->linelen[VAR_2][1],
            VAR_8 = VAR_0->mod[VAR_2][0],
            VAR_9 = VAR_0->mod[VAR_2][1],
            VAR_10;
        float *VAR_11;

        VAR_11 = VAR_4 + VAR_8;
        for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
            int VAR_12, VAR_13 = 0;

            for (VAR_12 = VAR_8; VAR_12 < VAR_6; VAR_12 += 2, VAR_13++)
                VAR_11[VAR_12] = VAR_5[VAR_3 * VAR_10 + VAR_13];
            for (VAR_12 = 1 - VAR_8; VAR_12 < VAR_6; VAR_12 += 2, VAR_13++)
                VAR_11[VAR_12] = VAR_5[VAR_3 * VAR_10 + VAR_13];

            FUNC_0(VAR_4, VAR_8, VAR_8 + VAR_6);

            for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++)
                VAR_5[VAR_3 * VAR_10 + VAR_12] = VAR_11[VAR_12];
        }


        VAR_11 = VAR_4 + VAR_9;
        for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
            int VAR_14, VAR_15 = 0;

            for (VAR_14 = VAR_9; VAR_14 < VAR_7; VAR_14 += 2, VAR_15++)
                VAR_11[VAR_14] = VAR_5[VAR_3 * VAR_15 + VAR_10];
            for (VAR_14 = 1 - VAR_9; VAR_14 < VAR_7; VAR_14 += 2, VAR_15++)
                VAR_11[VAR_14] = VAR_5[VAR_3 * VAR_15 + VAR_10];

            FUNC_0(VAR_4, VAR_9, VAR_9 + VAR_7);

            for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++)
                VAR_5[VAR_3 * VAR_14 + VAR_10] = VAR_11[VAR_14];
        }
    }
}
