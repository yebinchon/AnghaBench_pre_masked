
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;
typedef int int64_t ;
typedef int int32_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(int32_t *VAR_0, int32_t *VAR_1,
                            const int32_t *VAR_2, ptrdiff_t VAR_3)
{

    int VAR_4 = VAR_3 >> 1;
    int VAR_5, VAR_6, VAR_7;

    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {

        for (VAR_6 = 0; VAR_6 < 32; VAR_6++) {
            int64_t VAR_8 = 0;
            int64_t VAR_9 = 0;

            for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
                VAR_8 += (int64_t)VAR_2[ VAR_6 * 8 + VAR_7] * VAR_1[-VAR_7];
                VAR_9 += (int64_t)VAR_2[255 - VAR_6 * 8 - VAR_7] * VAR_1[-VAR_7];
            }

            VAR_0[ VAR_6] = FUNC_0(FUNC_1(VAR_8));
            VAR_0[32 + VAR_6] = FUNC_0(FUNC_1(VAR_9));
        }

        VAR_1++;
        VAR_0 += 64;
    }
}
