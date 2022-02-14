
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float* input; } ;
typedef TYPE_1__ network ;
struct TYPE_6__ {int w; int h; int c; int batch; float* squared; float* norms; int size; int beta; float* output; int alpha; int kappa; } ;
typedef TYPE_2__ layer ;


 int FUNC_0 (int,int ,float*,int,float*,int) ;
 int FUNC_1 (int,int ,float*,int) ;
 int FUNC_2 (int,float*,int,float*,int) ;
 int FUNC_3 (int,float*,int,float*,int) ;
 int FUNC_4 (int,int,float*,int,float*,int) ;
 int FUNC_5 (int,int ,float*,int) ;

void FUNC_6(const layer VAR_0, network VAR_1)
{
    int VAR_2,VAR_3;
    int VAR_4 = VAR_0.w;
    int VAR_5 = VAR_0.h;
    int VAR_6 = VAR_0.c;
    FUNC_5(VAR_4*VAR_5*VAR_6*VAR_0.batch, 0, VAR_0.squared, 1);

    for(VAR_3 = 0; VAR_3 < VAR_0.batch; ++VAR_3){
        float *VAR_7 = VAR_0.squared + VAR_4*VAR_5*VAR_6*VAR_3;
        float *VAR_8 = VAR_0.norms + VAR_4*VAR_5*VAR_6*VAR_3;
        float *VAR_9 = VAR_1.input + VAR_4*VAR_5*VAR_6*VAR_3;
        FUNC_4(VAR_4*VAR_5*VAR_6, 2, VAR_9, 1, VAR_7, 1);

        FUNC_1(VAR_4*VAR_5, VAR_0.kappa, VAR_8, 1);
        for(VAR_2 = 0; VAR_2 < VAR_0.size/2; ++VAR_2){
            FUNC_0(VAR_4*VAR_5, VAR_0.alpha, VAR_7 + VAR_4*VAR_5*VAR_2, 1, VAR_8, 1);
        }

        for(VAR_2 = 1; VAR_2 < VAR_0.c; ++VAR_2){
            FUNC_2(VAR_4*VAR_5, VAR_8 + VAR_4*VAR_5*(VAR_2-1), 1, VAR_8 + VAR_4*VAR_5*VAR_2, 1);
            int VAR_10 = VAR_2 - ((VAR_0.size-1)/2) - 1;
            int VAR_11 = VAR_2 + (VAR_0.size/2);
            if(VAR_10 >= 0) FUNC_0(VAR_4*VAR_5, -VAR_0.alpha, VAR_7 + VAR_4*VAR_5*VAR_10, 1, VAR_8 + VAR_4*VAR_5*VAR_2, 1);
            if(VAR_11 < VAR_0.c) FUNC_0(VAR_4*VAR_5, VAR_0.alpha, VAR_7 + VAR_4*VAR_5*VAR_11, 1, VAR_8 + VAR_4*VAR_5*VAR_2, 1);
        }
    }
    FUNC_4(VAR_4*VAR_5*VAR_6*VAR_0.batch, -VAR_0.beta, VAR_0.norms, 1, VAR_0.output, 1);
    FUNC_3(VAR_4*VAR_5*VAR_6*VAR_0.batch, VAR_1.input, 1, VAR_0.output, 1);
}
