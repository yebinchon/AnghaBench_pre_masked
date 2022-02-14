
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vec_f ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (int,float const*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int,float*) ;

void FUNC_5(float *VAR_4, const float *VAR_5,
                                const float *VAR_6, const float *VAR_7,
                                int VAR_8)
{
    int VAR_9;
    vec_f VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

    for (VAR_9 = 0; VAR_9 < VAR_8 - 3; VAR_9 += 4) {
        VAR_14 = FUNC_1(0, VAR_4 + VAR_9);
        VAR_15 = FUNC_1(15, VAR_4 + VAR_9);
        VAR_11 = FUNC_1(0, VAR_5 + VAR_9);
        VAR_12 = FUNC_1(0, VAR_6 + VAR_9);
        VAR_13 = FUNC_1(0, VAR_7 + VAR_9);
        VAR_16 = FUNC_3(VAR_15, VAR_14, FUNC_0(0, 1, 2, 3));
        VAR_10 = FUNC_2(VAR_11, VAR_12, VAR_13);
        VAR_15 = FUNC_3(VAR_10, VAR_16, FUNC_0(VAR_0,VAR_1,VAR_2,VAR_3));
        VAR_14 = FUNC_3(VAR_16, VAR_10, FUNC_0(VAR_0,VAR_1,VAR_2,VAR_3));
        FUNC_4(VAR_15, 15, VAR_4 + VAR_9);
        FUNC_4(VAR_14, 0, VAR_4 + VAR_9);
    }
}
