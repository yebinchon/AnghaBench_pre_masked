
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vec_f ;


 int FUNC_0 (int,float const*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,float*) ;

void FUNC_6(float *VAR_0, const float *VAR_1,
                                    const float *VAR_2, int VAR_3)
{
    int VAR_4;
    vec_f VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    vec_f VAR_12 = (vec_f)FUNC_4(0);

    VAR_2 += VAR_3-4;
    for(VAR_4 = 0; VAR_4 < VAR_3 - 7; VAR_4 += 8) {
        VAR_7 = FUNC_0(0, VAR_2 - VAR_4);
        VAR_6 = FUNC_0(0, VAR_1 + VAR_4);
        VAR_9 = FUNC_3(VAR_7, VAR_7);
        VAR_11 = FUNC_0(-16, VAR_2 - VAR_4);
        VAR_8 = FUNC_2(VAR_7, VAR_7);
        VAR_10 = FUNC_0(16, VAR_1 + VAR_4);
        VAR_7 = FUNC_2(FUNC_3(VAR_9, VAR_8),
                        FUNC_2(VAR_9, VAR_8));

        VAR_9 = FUNC_3(VAR_11, VAR_11);
        VAR_5 = FUNC_1(VAR_6, VAR_7, VAR_12);
        VAR_8 = FUNC_2(VAR_11, VAR_11);
        FUNC_5(VAR_5, 0, VAR_0 + VAR_4);
        VAR_11 = FUNC_2(FUNC_3(VAR_9, VAR_8),
                        FUNC_2(VAR_9, VAR_8));
        VAR_5 = FUNC_1(VAR_10, VAR_11, VAR_12);
        FUNC_5(VAR_5, 16, VAR_0 + VAR_4);
    }
}
