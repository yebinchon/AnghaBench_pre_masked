
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef long long int32_t ;
struct TYPE_3__ {int** linelen; int ndeclevels; long long* i_linebuf; int** mod; } ;
typedef TYPE_1__ DWTContext ;


 long long VAR_0 ;
 long long VAR_1 ;
 int FUNC_0 (long long*,int,int) ;

__attribute__((used)) static void FUNC_1(DWTContext *VAR_2, int32_t *VAR_3)
{
    int VAR_4;
    int VAR_5 = VAR_2->linelen[VAR_2->ndeclevels - 1][0];
    int VAR_6 = VAR_2->linelen[VAR_2->ndeclevels - 1][1];
    int VAR_7;
    int32_t *VAR_8 = VAR_2->i_linebuf;
    int32_t *VAR_9 = VAR_3;

    VAR_8 += 5;

    for (VAR_7 = 0; VAR_7 < VAR_5 * VAR_6; VAR_7++)
        VAR_9[VAR_7] *= 1LL << VAR_1;

    for (VAR_4 = 0; VAR_4 < VAR_2->ndeclevels; VAR_4++) {
        int VAR_10 = VAR_2->linelen[VAR_4][0],
            VAR_11 = VAR_2->linelen[VAR_4][1],
            VAR_12 = VAR_2->mod[VAR_4][0],
            VAR_13 = VAR_2->mod[VAR_4][1],
            VAR_14;
        int32_t *VAR_15;

        VAR_15 = VAR_8 + VAR_12;
        for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
            int VAR_16, VAR_17 = 0;

            for (VAR_16 = VAR_12; VAR_16 < VAR_10; VAR_16 += 2, VAR_17++)
                VAR_15[VAR_16] = ((VAR_9[VAR_5 * VAR_14 + VAR_17] * VAR_0) + (1 << 15)) >> 16;
            for (VAR_16 = 1 - VAR_12; VAR_16 < VAR_10; VAR_16 += 2, VAR_17++)
                VAR_15[VAR_16] = VAR_9[VAR_5 * VAR_14 + VAR_17];

            FUNC_0(VAR_8, VAR_12, VAR_12 + VAR_10);

            for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++)
                VAR_9[VAR_5 * VAR_14 + VAR_16] = VAR_15[VAR_16];
        }


        VAR_15 = VAR_8 + VAR_13;
        for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++) {
            int VAR_18, VAR_19 = 0;

            for (VAR_18 = VAR_13; VAR_18 < VAR_11; VAR_18 += 2, VAR_19++)
                VAR_15[VAR_18] = ((VAR_9[VAR_5 * VAR_19 + VAR_14] * VAR_0) + (1 << 15)) >> 16;
            for (VAR_18 = 1 - VAR_13; VAR_18 < VAR_11; VAR_18 += 2, VAR_19++)
                VAR_15[VAR_18] = VAR_9[VAR_5 * VAR_19 + VAR_14];

            FUNC_0(VAR_8, VAR_13, VAR_13 + VAR_11);

            for (VAR_18 = 0; VAR_18 < VAR_11; VAR_18++)
                VAR_9[VAR_5 * VAR_18 + VAR_14] = VAR_15[VAR_18];
        }
    }

    for (VAR_7 = 0; VAR_7 < VAR_5 * VAR_6; VAR_7++)
        VAR_9[VAR_7] = (VAR_9[VAR_7] + ((1LL<<VAR_1)>>1)) >> VAR_1;
}
