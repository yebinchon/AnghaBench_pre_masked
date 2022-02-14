
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int coef0_pos; } ;
typedef TYPE_1__ IMCContext ;


 int VAR_0 ;
 float FUNC_0 (float) ;
 double FUNC_1 (int,int) ;
 float FUNC_2 (double,int) ;

__attribute__((used)) static void FUNC_3(IMCContext *VAR_1, int *VAR_2,
                                              float *VAR_3, float *VAR_4)
{
    int VAR_5, VAR_6, VAR_7;
    float VAR_8, VAR_9;

    VAR_7 = VAR_1->coef0_pos;
    VAR_3[VAR_7] = 20000.0 / FUNC_1 (2, VAR_2[0] * 0.18945);
    VAR_4[VAR_7] = FUNC_0(VAR_3[VAR_7]);
    VAR_8 = VAR_3[VAR_7];
    VAR_9 = VAR_4[VAR_7];

    VAR_2++;
    for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
        if (VAR_5 == VAR_7)
            continue;
        VAR_6 = *VAR_2++;
        VAR_3[VAR_5] = VAR_8 * FUNC_2(10.0, -VAR_6 * 0.4375);
        VAR_4[VAR_5] = VAR_9 - 1.4533435415 * VAR_6;
    }
}
