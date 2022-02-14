
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int prediction_error ;


 float FUNC_0 (float const*,float*,int) ;
 float FUNC_1 (double) ;
 double FUNC_2 (float) ;
 int FUNC_3 (float*,float*,int) ;
 float FUNC_4 (float) ;

float FUNC_5(float VAR_0, float VAR_1,
                            float *VAR_2, float VAR_3,
                            const float *VAR_4)
{



    float VAR_5 = VAR_0 *
        FUNC_1(0.05 *
              (FUNC_0(VAR_4, VAR_2, 4) +
               VAR_3)) /
        FUNC_4(VAR_1 ? VAR_1 : 1.0);


    FUNC_3(&VAR_2[0], &VAR_2[1],
            3 * sizeof(VAR_2[0]));
    VAR_2[3] = 20.0 * FUNC_2(VAR_0);

    return VAR_5;
}
