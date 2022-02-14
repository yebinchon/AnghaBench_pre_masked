
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef intptr_t ptrdiff_t ;


 int FUNC_0 (int *,int const*) ;
 int FUNC_1 (int *,int const*) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_0, const uint8_t *VAR_1, int VAR_2, int VAR_3,
                     ptrdiff_t VAR_4, ptrdiff_t VAR_5)
{
int VAR_6, VAR_7;

    if (((intptr_t)VAR_0 | (intptr_t)VAR_1 | VAR_4 | VAR_5) & 15) {
        for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
            for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7+=8)
                FUNC_1(VAR_0+VAR_7, VAR_1+VAR_7);
            VAR_0 += VAR_4;
            VAR_1 += VAR_5;
        }
    } else {
        for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
            for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7+=16)
                FUNC_0(VAR_0+VAR_7, VAR_1+VAR_7);
            VAR_0 += VAR_4;
            VAR_1 += VAR_5;
        }
    }
}
