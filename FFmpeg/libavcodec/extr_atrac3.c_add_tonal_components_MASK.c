
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pos; int num_coefs; float* coef; } ;
typedef TYPE_1__ TonalComponent ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(float *VAR_0, int VAR_1,
                                TonalComponent *VAR_2)
{
    int VAR_3, VAR_4, VAR_5 = -1;
    float *VAR_6, *VAR_7;

    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
        VAR_5 = FUNC_0(VAR_2[VAR_3].pos + VAR_2[VAR_3].num_coefs, VAR_5);
        VAR_6 = VAR_2[VAR_3].coef;
        VAR_7 = &VAR_0[VAR_2[VAR_3].pos];

        for (VAR_4 = 0; VAR_4 < VAR_2[VAR_3].num_coefs; VAR_4++)
            VAR_7[VAR_4] += VAR_6[VAR_4];
    }

    return VAR_5;
}
