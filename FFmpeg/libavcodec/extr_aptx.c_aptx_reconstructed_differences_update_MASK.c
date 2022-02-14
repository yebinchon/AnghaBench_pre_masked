
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int pos; int * reconstructed_differences; } ;
typedef TYPE_1__ Prediction ;



__attribute__((used)) static int32_t *FUNC_0(Prediction *VAR_0,
                                                      int32_t VAR_1,
                                                      int VAR_2)
{
    int32_t *VAR_3 = VAR_0->reconstructed_differences, *VAR_4 = VAR_3 + VAR_2;
    int VAR_5 = VAR_0->pos;

    VAR_3[VAR_5] = VAR_4[VAR_5];
    VAR_0->pos = VAR_5 = (VAR_5 + 1) % VAR_2;
    VAR_4[VAR_5] = VAR_1;
    return &VAR_4[VAR_5];
}
