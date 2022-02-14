
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vec_f ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,float const*) ;
 int FUNC_3 (int ,int,float*) ;

void FUNC_4(float *VAR_0,
                        const float *VAR_1, const float *VAR_2,
                        int VAR_3)
{
    int VAR_4;
    vec_f VAR_5, VAR_6, VAR_7 = (vec_f)FUNC_1(0);
    for (VAR_4 = 0; VAR_4 < VAR_3 - 7; VAR_4 += 8) {
        VAR_5 = FUNC_2( 0, VAR_1 + VAR_4);
        VAR_6 = FUNC_2(16, VAR_1 + VAR_4);
        VAR_5 = FUNC_0(VAR_5, FUNC_2( 0, VAR_2 + VAR_4), VAR_7);
        VAR_6 = FUNC_0(VAR_6, FUNC_2(16, VAR_2 + VAR_4), VAR_7);
        FUNC_3(VAR_5, 0, VAR_0 + VAR_4);
        FUNC_3(VAR_6, 16, VAR_0 + VAR_4);
    }
}
