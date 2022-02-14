
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* fact; } ;
typedef TYPE_1__ SuperEqualizerContext ;


 int VAR_0 ;
 float FUNC_0 (float,int) ;

__attribute__((used)) static float FUNC_1(SuperEqualizerContext *VAR_1, float VAR_2)
{
    float VAR_3 = 1;
    int VAR_4;

    for (VAR_4 = 1; VAR_4 <= VAR_0; VAR_4++) {
        float VAR_5;

        VAR_5 = FUNC_0(VAR_2 / 2, VAR_4) / VAR_1->fact[VAR_4];
        VAR_3 += VAR_5*VAR_5;
    }

    return VAR_3;
}
