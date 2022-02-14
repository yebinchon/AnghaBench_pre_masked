
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float** opt; int path; } ;
typedef TYPE_1__ NellyMoserEncodeContext ;


 int FUNC_0 (int ,float) ;
 int FUNC_1 (int,float) ;
 float VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 float FUNC_3 (int,float,int) ;
 int* VAR_3 ;
 size_t* VAR_4 ;
 scalar_t__ FUNC_4 (float) ;
 size_t** VAR_5 ;
 int * FUNC_5 (size_t*) ;

__attribute__((used)) static void FUNC_6(NellyMoserEncodeContext *VAR_6, float *VAR_7, int *VAR_8)
{
    int VAR_9, VAR_10, VAR_11, VAR_12;
    float VAR_13, VAR_14;

    float (*VAR_15 )[VAR_2] = VAR_6->opt ;
    FUNC_5(*VAR_5)[VAR_2] = VAR_6->path;

    for (VAR_9 = 0; VAR_9 < VAR_1 * VAR_2; VAR_9++) {
        VAR_15[0][VAR_9] = VAR_0;
    }

    for (VAR_9 = 0; VAR_9 < 64; VAR_9++) {
        VAR_15[0][VAR_4[VAR_9]] = FUNC_3(VAR_7[0], VAR_4[VAR_9], 0);
        VAR_5[0][VAR_4[VAR_9]] = VAR_9;
    }

    for (VAR_11 = 1; VAR_11 < VAR_1; VAR_11++) {
        int VAR_16, VAR_17 = 0;
        float VAR_18;
        int VAR_19, VAR_20, VAR_21;
        VAR_13 = VAR_7[VAR_11];
        for (VAR_16 = 1000; !VAR_17 && VAR_16 < VAR_2; VAR_16 <<= 2) {
            VAR_19 = FUNC_0(0, VAR_7[VAR_11] - VAR_16);
            VAR_20 = FUNC_1(VAR_2, VAR_7[VAR_11 - 1] + VAR_16);
            for (VAR_9 = FUNC_0(0, VAR_7[VAR_11 - 1] - VAR_16); VAR_9 < FUNC_1(VAR_2, VAR_7[VAR_11 - 1] + VAR_16); VAR_9++) {
                if ( FUNC_4(VAR_15[VAR_11 - 1][VAR_9]) )
                    continue;
                for (VAR_10 = 0; VAR_10 < 32; VAR_10++) {
                    VAR_21 = VAR_9 + VAR_3[VAR_10];
                    if (VAR_21 > VAR_20)
                        break;
                    if (VAR_21 >= VAR_19) {
                        VAR_18 = VAR_15[VAR_11 - 1][VAR_9] + FUNC_3(VAR_21, VAR_13, VAR_11);
                        if (VAR_15[VAR_11][VAR_21] > VAR_18) {
                            VAR_15[VAR_11][VAR_21] = VAR_18;
                            VAR_5[VAR_11][VAR_21] = VAR_10;
                            VAR_17 = 1;
                        }
                    }
                }
            }
        }
        FUNC_2(VAR_17);
    }

    VAR_14 = VAR_0;
    VAR_12 = -1;
    VAR_11 = VAR_1 - 1;
    for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
        if (VAR_14 > VAR_15[VAR_11][VAR_9]) {
            VAR_14 = VAR_15[VAR_11][VAR_9];
            VAR_12 = VAR_9;
        }
    }
    for (VAR_11 = VAR_1 - 1; VAR_11 >= 0; VAR_11--) {
        VAR_8[VAR_11] = VAR_5[VAR_11][VAR_12];
        if (VAR_11) {
            VAR_12 -= VAR_3[VAR_5[VAR_11][VAR_12]];
        }
    }
}
