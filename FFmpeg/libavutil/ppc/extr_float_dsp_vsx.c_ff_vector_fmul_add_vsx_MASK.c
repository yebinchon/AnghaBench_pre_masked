
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vec_f ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,float const*) ;
 int FUNC_2 (int ,int ,float*) ;

void FUNC_3(float *VAR_0, const float *VAR_1,
                            const float *VAR_2, const float *VAR_3,
                            int VAR_4)
{
    int VAR_5;
    vec_f VAR_6, VAR_7, VAR_8, VAR_9;

    for (VAR_5 = 0; VAR_5 < VAR_4 - 3; VAR_5 += 4) {
        VAR_7 = FUNC_1(0, VAR_1 + VAR_5);
        VAR_8 = FUNC_1(0, VAR_2 + VAR_5);
        VAR_9 = FUNC_1(0, VAR_3 + VAR_5);
        VAR_6 = FUNC_0(VAR_7, VAR_8, VAR_9);
        FUNC_2(VAR_6, 0, VAR_0 + VAR_5);
    }
}
