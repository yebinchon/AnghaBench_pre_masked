
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int network ;
typedef int image ;


 int FUNC_0 (int,int,float*,int,float*,int) ;
 int FUNC_1 (int,float*,int,float*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int,int,float*) ;
 float* FUNC_4 (int *,float*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int,int,float*,int) ;

float FUNC_7(network *VAR_0, float *VAR_1, float *VAR_2, int VAR_3)
{
    float *VAR_4 = FUNC_4(VAR_0, VAR_1);
    FUNC_1(19*19+1, VAR_4, 1, VAR_2, 1);
    float VAR_5 = VAR_4[19*19 + 1];
    int VAR_6;
    if(VAR_3){
        image VAR_7 = FUNC_3(19, 19, 3, VAR_1);
        for(VAR_6 = 1; VAR_6 < 8; ++VAR_6){
            FUNC_5(VAR_7, VAR_6);
            if(VAR_6 >= 4) FUNC_2(VAR_7);

            float *VAR_8 = FUNC_4(VAR_0, VAR_1);
            image VAR_9 = FUNC_3(19, 19, 1, VAR_8);
            VAR_5 += VAR_8[19*19 + 1];

            if(VAR_6 >= 4) FUNC_2(VAR_9);
            FUNC_5(VAR_9, -VAR_6);

            FUNC_0(19*19+1, 1, VAR_8, 1, VAR_2, 1);

            if(VAR_6 >= 4) FUNC_2(VAR_7);
            FUNC_5(VAR_7, -VAR_6);
        }
        VAR_5 = VAR_5/8;
        FUNC_6(19*19+1, 1./8., VAR_2, 1);
    }
    for(VAR_6 = 0; VAR_6 < 19*19; ++VAR_6){
        if(VAR_1[VAR_6] || VAR_1[VAR_6+19*19]) VAR_2[VAR_6] = 0;
    }
    return VAR_5;
}
