
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
typedef int int32_t ;
struct TYPE_4__ {int predicted_sample; int* s_weight; int previous_reconstructed_sample; int* d_weight; int predicted_difference; } ;
typedef TYPE_1__ Prediction ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int* FUNC_3 (TYPE_1__*,int,int) ;
 void* FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(Prediction *VAR_0,
                                      int32_t VAR_1,
                                      int VAR_2)
{
    int32_t VAR_3, VAR_4, VAR_5;
    int32_t *VAR_6;
    int64_t VAR_7 = 0;
    int VAR_8;

    VAR_3 = FUNC_4(VAR_1 + VAR_0->predicted_sample, 23);
    VAR_4 = FUNC_4((FUNC_2(VAR_0->s_weight[0], VAR_0->previous_reconstructed_sample)
                             + FUNC_2(VAR_0->s_weight[1], VAR_3)) >> 22, 23);
    VAR_0->previous_reconstructed_sample = VAR_3;

    VAR_6 = FUNC_3(VAR_0, VAR_1, VAR_2);
    VAR_5 = FUNC_0(VAR_1, 0) * (1 << 23);
    for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
        int32_t VAR_9 = FUNC_1(VAR_6[-VAR_8-1]) | 1;
        VAR_0->d_weight[VAR_8] -= FUNC_5(VAR_0->d_weight[VAR_8] - VAR_9*VAR_5, 8);
        VAR_7 += FUNC_2(VAR_6[-VAR_8], VAR_0->d_weight[VAR_8]);
    }

    VAR_0->predicted_difference = FUNC_4(VAR_7 >> 22, 23);
    VAR_0->predicted_sample = FUNC_4(VAR_4 + VAR_0->predicted_difference, 23);
}
