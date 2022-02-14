
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* sp_hist; float* gain_hist; float* gain_lpc; int sp_lpc; } ;
typedef TYPE_1__ RA288Context ;


 float FUNC_0 (float,double) ;
 float FUNC_1 (float,int ,int) ;
 float FUNC_2 (float*,float*,int) ;
 double** VAR_0 ;
 float FUNC_3 (float) ;
 int FUNC_4 (float*,int ,float*,int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (float*,float*,int) ;

__attribute__((used)) static void FUNC_7(RA288Context *VAR_1, float VAR_2, int VAR_3)
{
    int VAR_4;
    double VAR_5;
    float VAR_6, VAR_7[5];
    float *VAR_8 = VAR_1->sp_hist + 70 + 36;
    float *VAR_9 = VAR_1->gain_hist + 28;

    FUNC_6(VAR_1->sp_hist + 70, VAR_1->sp_hist + 75, 36*sizeof(*VAR_8));


    VAR_6 = 32.0;
    for (VAR_4=0; VAR_4 < 10; VAR_4++)
        VAR_6 -= VAR_9[9-VAR_4] * VAR_1->gain_lpc[VAR_4];


    VAR_6 = FUNC_1(VAR_6, 0, 60);



    VAR_5 = FUNC_3(VAR_6 * 0.1151292546497) * VAR_2 * (1.0/(1<<23));

    for (VAR_4=0; VAR_4 < 5; VAR_4++)
        VAR_7[VAR_4] = VAR_0[VAR_3][VAR_4] * VAR_5;

    VAR_6 = FUNC_2(VAR_7, VAR_7, 5);

    VAR_6 = FUNC_0(VAR_6, 5.0 / (1<<24));


    FUNC_6(VAR_9, VAR_9 + 1, 9 * sizeof(*VAR_9));

    VAR_9[9] = 10 * FUNC_5(VAR_6) + (10*FUNC_5(((1<<24)/5.)) - 32);

    FUNC_4(VAR_8, VAR_1->sp_lpc, VAR_7, 5, 36);
}
