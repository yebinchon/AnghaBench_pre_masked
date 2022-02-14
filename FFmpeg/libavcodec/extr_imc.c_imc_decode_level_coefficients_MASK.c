
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IMCContext ;


 int VAR_0 ;
 double FUNC_0 (int) ;
 float* VAR_1 ;
 float FUNC_1 (float) ;

__attribute__((used)) static void FUNC_2(IMCContext *VAR_2, int *VAR_3,
                                          float *VAR_4, float *VAR_5)
{
    int VAR_6, VAR_7;
    float VAR_8, VAR_9;


    VAR_4[0] = 20000.0 / FUNC_0 (VAR_3[0] * 0.18945);
    VAR_5[0] = FUNC_1(VAR_4[0]);
    VAR_8 = VAR_4[0];
    VAR_9 = VAR_5[0];

    for (VAR_6 = 1; VAR_6 < VAR_0; VAR_6++) {
        VAR_7 = VAR_3[VAR_6];
        if (VAR_7 == 16) {
            VAR_4[VAR_6] = 1.0;
            VAR_5[VAR_6] = 0.0;
        } else {
            if (VAR_7 < 17)
                VAR_7 -= 7;
            else if (VAR_7 <= 24)
                VAR_7 -= 32;
            else
                VAR_7 -= 16;

            VAR_8 *= VAR_1[15 + VAR_7];
            VAR_9 += 0.83048 * VAR_7;
            VAR_4[VAR_6] = VAR_8;
            VAR_5[VAR_6] = VAR_9;
        }
    }
}
