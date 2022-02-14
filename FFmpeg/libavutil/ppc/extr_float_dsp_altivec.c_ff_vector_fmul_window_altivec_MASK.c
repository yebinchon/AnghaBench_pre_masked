
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vec_u8 ;
typedef scalar_t__ vec_f ;


 int FUNC_0 (int,int,int,int ) ;
 scalar_t__ FUNC_1 (int,float const*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,int const) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,int,float*) ;

void FUNC_7(float *VAR_0, const float *VAR_1,
                                   const float *VAR_2, const float *VAR_3, int VAR_4)
{
    vec_f VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    const vec_u8 VAR_12 = FUNC_0(3, 2, 1, 0);
    int VAR_13, VAR_14;

    VAR_0 += VAR_4;
    VAR_3 += VAR_4;
    VAR_1 += VAR_4;

    VAR_5 = (vec_f)FUNC_5(0);

    for (VAR_13 = -VAR_4 * 4, VAR_14 = VAR_4 * 4 - 16; VAR_13 < 0; VAR_13 += 16, VAR_14 -= 16) {
        VAR_8 = FUNC_1(VAR_13, VAR_1);
        VAR_9 = FUNC_1(VAR_14, VAR_2);
        VAR_10 = FUNC_1(VAR_13, VAR_3);
        VAR_11 = FUNC_1(VAR_14, VAR_3);

        VAR_9 = FUNC_4(VAR_9, VAR_9, VAR_12);
        VAR_11 = FUNC_4(VAR_11, VAR_11, VAR_12);

        VAR_6 = FUNC_2(VAR_8, VAR_11, VAR_5);
        VAR_6 = FUNC_3(VAR_9, VAR_10, VAR_6);
        VAR_7 = FUNC_2(VAR_8, VAR_10, VAR_5);
        VAR_7 = FUNC_2(VAR_9, VAR_11, VAR_7);
        VAR_7 = FUNC_4(VAR_7, VAR_7, VAR_12);

        FUNC_6(VAR_6, VAR_13, VAR_0);
        FUNC_6(VAR_7, VAR_14, VAR_0);
    }
}
