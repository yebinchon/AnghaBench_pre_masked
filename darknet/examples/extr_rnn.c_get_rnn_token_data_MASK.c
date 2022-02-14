
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* x; float* y; } ;
typedef TYPE_1__ float_pair ;


 float* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;

float_pair FUNC_2(int *VAR_0, size_t *VAR_1, int VAR_2, size_t VAR_3, int VAR_4, int VAR_5)
{
    float *VAR_6 = FUNC_0(VAR_4 * VAR_5 * VAR_2, sizeof(float));
    float *VAR_7 = FUNC_0(VAR_4 * VAR_5 * VAR_2, sizeof(float));
    int VAR_8,VAR_9;
    for(VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8){
        for(VAR_9 = 0; VAR_9 < VAR_5; ++VAR_9){
            int VAR_10 = VAR_0[(VAR_1[VAR_8])%VAR_3];
            int VAR_11 = VAR_0[(VAR_1[VAR_8] + 1)%VAR_3];

            VAR_6[(VAR_9*VAR_4 + VAR_8)*VAR_2 + VAR_10] = 1;
            VAR_7[(VAR_9*VAR_4 + VAR_8)*VAR_2 + VAR_11] = 1;

            VAR_1[VAR_8] = (VAR_1[VAR_8] + 1) % VAR_3;

            if(VAR_10 >= VAR_2 || VAR_10 < 0 || VAR_11 >= VAR_2 || VAR_11 < 0){
                FUNC_1("Bad char");
            }
        }
    }
    float_pair VAR_12;
    VAR_12.x = VAR_6;
    VAR_12.y = VAR_7;
    return VAR_12;
}
