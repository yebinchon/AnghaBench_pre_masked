
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int int32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int const,int) ;

__attribute__((used)) static inline void FUNC_3(int32_t *VAR_0, const int32_t *VAR_1,
                                          int32_t VAR_2, int32_t VAR_3, int VAR_4, int VAR_5)
{

    int64_t VAR_6 = (int64_t)VAR_2 * VAR_3;
    int VAR_7, VAR_8 = 0;


    if (VAR_6 > (1 << 23)) {
        VAR_8 = FUNC_0(VAR_6 >> 23) + 1;
        VAR_6 >>= VAR_8;
    }


    if (VAR_4) {
        for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
            VAR_0[VAR_7] += FUNC_1(FUNC_2(VAR_1[VAR_7] * VAR_6, 22 - VAR_8));
    } else {
        for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
            VAR_0[VAR_7] = FUNC_1(FUNC_2(VAR_1[VAR_7] * VAR_6, 22 - VAR_8));
    }
}
