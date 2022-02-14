
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int*,int const*) ;
 int FUNC_1 (int,int,int) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_0, uint8_t *VAR_1,
                        ptrdiff_t VAR_2, const uint8_t *VAR_3)
{
    uint8_t VAR_4 = *(VAR_3);
    uint8_t VAR_5 = *(VAR_3 + 1);
    int VAR_6, VAR_7;

    FUNC_0(VAR_1, VAR_3 + 2);

    for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
        for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
            int VAR_8 = VAR_1[VAR_6 + VAR_7 * 4];

            VAR_0[VAR_6] = FUNC_1(VAR_4, VAR_5, VAR_8);
        }
        VAR_0 += VAR_2;
    }
}
