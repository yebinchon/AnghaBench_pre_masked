
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float lower; float upper; float gain; } ;
typedef TYPE_1__ EqParameter ;


 int VAR_0 ;
 float* VAR_1 ;

__attribute__((used)) static void FUNC_0(float *VAR_2, EqParameter *VAR_3, float VAR_4)
{
    int VAR_5;

    for (VAR_5 = 0; VAR_5 <= VAR_0; VAR_5++) {
        VAR_3[VAR_5].lower = VAR_5 == 0 ? 0 : VAR_1[VAR_5 - 1];
        VAR_3[VAR_5].upper = VAR_5 == VAR_0 ? VAR_4 : VAR_1[VAR_5];
        VAR_3[VAR_5].gain = VAR_2[VAR_5];
    }
}
