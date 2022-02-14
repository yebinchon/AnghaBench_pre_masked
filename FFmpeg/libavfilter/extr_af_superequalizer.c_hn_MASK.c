
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float upper; float gain; } ;
typedef TYPE_1__ EqParameter ;


 int VAR_0 ;
 float FUNC_0 (int) ;
 float FUNC_1 (int,float,float) ;

__attribute__((used)) static float FUNC_2(int VAR_1, EqParameter *VAR_2, float VAR_3)
{
    float VAR_4, VAR_5;
    int VAR_6;

    VAR_5 = FUNC_1(VAR_1, VAR_2[0].upper, VAR_3);
    VAR_4 = VAR_2[0].gain*VAR_5;

    for (VAR_6 = 1; VAR_6 < VAR_0 + 1 && VAR_2[VAR_6].upper < VAR_3 / 2; VAR_6++) {
        float VAR_7 = FUNC_1(VAR_1, VAR_2[VAR_6].upper, VAR_3);
        VAR_4 += VAR_2[VAR_6].gain * (VAR_7 - VAR_5);
        VAR_5 = VAR_7;
    }

    VAR_4 += VAR_2[VAR_6].gain * (FUNC_0(VAR_1) - VAR_5);

    return VAR_4;
}
