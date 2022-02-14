
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
typedef int int16_t ;
struct TYPE_4__ {int* fir_mem; int* iir_mem; int reflection_coef; } ;
typedef TYPE_1__ G723_1_ChannelContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (TYPE_1__*,int*,int) ;
 int FUNC_5 (int*,int*,int*,int*,int) ;
 int FUNC_6 (int*,int*,int) ;
 int** VAR_4 ;

__attribute__((used)) static void FUNC_7(G723_1_ChannelContext *VAR_5, int16_t *VAR_6,
                               int16_t *VAR_7, int16_t *VAR_8)
{
    int16_t VAR_9[2][VAR_1];
    int VAR_10[VAR_1 + VAR_0], *VAR_11;
    int VAR_12, VAR_13, VAR_14;

    FUNC_6(VAR_7, VAR_5->fir_mem, VAR_1 * sizeof(*VAR_7));
    FUNC_6(VAR_10, VAR_5->iir_mem, VAR_1 * sizeof(*VAR_10));

    for (VAR_12 = VAR_1, VAR_13 = 0; VAR_13 < VAR_2; VAR_12 += VAR_3, VAR_13++) {
        for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {
            VAR_9[0][VAR_14] = (-VAR_6[VAR_14] * VAR_4[0][VAR_14] +
                                 (1 << 14)) >> 15;
            VAR_9[1][VAR_14] = (-VAR_6[VAR_14] * VAR_4[1][VAR_14] +
                                 (1 << 14)) >> 15;
        }
        FUNC_5(VAR_9[0], VAR_9[1], VAR_7 + VAR_12, VAR_10 + VAR_12, 1);
        VAR_6 += VAR_1;
    }

    FUNC_6(VAR_5->fir_mem, VAR_7 + VAR_0, VAR_1 * sizeof(int16_t));
    FUNC_6(VAR_5->iir_mem, VAR_10 + VAR_0, VAR_1 * sizeof(int));

    VAR_7 += VAR_1;
    VAR_11 = VAR_10 + VAR_1;
    for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
        int VAR_15;
        int VAR_16[2];
        int VAR_17, VAR_18;


        VAR_17 = FUNC_3(VAR_8, VAR_7, VAR_3);


        VAR_16[0] = FUNC_2(VAR_8, VAR_8 + 1, VAR_3 - 1);
        VAR_16[1] = FUNC_2(VAR_8, VAR_8, VAR_3);


        VAR_15 = VAR_16[1] >> 16;
        if (VAR_15) {
            VAR_15 = (VAR_16[0] >> 2) / VAR_15;
        }
        VAR_5->reflection_coef = (3 * VAR_5->reflection_coef + VAR_15 + 2) >> 2;
        VAR_15 = -VAR_5->reflection_coef >> 1 & ~3;


        for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
            VAR_8[VAR_13] = FUNC_1(VAR_11[VAR_13],
                                   (VAR_11[VAR_13 - 1] >> 16) * VAR_15) >> 16;
        }


        VAR_15 = 2 * VAR_17 + 4;
        if (VAR_15 < 0) {
            VAR_18 = FUNC_0((int64_t)VAR_16[1] << -VAR_15);
        } else
            VAR_18 = VAR_16[1] >> VAR_15;

        FUNC_4(VAR_5, VAR_8, VAR_18);

        VAR_7 += VAR_3;
        VAR_11 += VAR_3;
        VAR_8 += VAR_3;
    }
}
