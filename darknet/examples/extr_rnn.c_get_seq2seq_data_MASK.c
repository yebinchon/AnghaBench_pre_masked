
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* x; float* y; } ;
typedef TYPE_1__ float_pair ;


 float* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;

float_pair FUNC_3(char **VAR_0, char **VAR_1, int VAR_2, int VAR_3, size_t VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7,VAR_8;
    float *VAR_9 = FUNC_0(VAR_5 * VAR_6 * VAR_3, sizeof(float));
    float *VAR_10 = FUNC_0(VAR_5 * VAR_6 * VAR_3, sizeof(float));
    for(VAR_7 = 0; VAR_7 < VAR_5; ++VAR_7){
        int VAR_11 = FUNC_2()%VAR_2;


        for(VAR_8 = 0; VAR_8 < VAR_6; ++VAR_8){
            unsigned char VAR_12 = VAR_0[VAR_11][VAR_8];
            unsigned char VAR_13 = VAR_1[VAR_11][VAR_8];

            VAR_9[(VAR_8*VAR_5 + VAR_7)*VAR_3 + VAR_12] = 1;
            VAR_10[(VAR_8*VAR_5 + VAR_7)*VAR_3 + VAR_13] = 1;

            if(VAR_12 > 255 || VAR_12 <= 0 || VAR_13 > 255 || VAR_13 <= 0){




                FUNC_1("Bad char");
            }
        }
    }
    float_pair VAR_14;
    VAR_14.x = VAR_9;
    VAR_14.y = VAR_10;
    return VAR_14;
}
