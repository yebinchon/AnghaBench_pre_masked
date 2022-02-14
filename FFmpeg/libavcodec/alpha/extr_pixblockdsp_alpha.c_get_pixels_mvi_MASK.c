
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int ptrdiff_t ;
typedef int int16_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(int16_t *restrict VAR_0,
                           const uint8_t *restrict VAR_1, ptrdiff_t VAR_2)
{
    int VAR_3 = 8;

    do {
        uint64_t VAR_4;

        VAR_4 = FUNC_0(VAR_1);
        FUNC_1(FUNC_2(VAR_4), VAR_0);
        FUNC_1(FUNC_2(VAR_4 >> 32), VAR_0 + 4);

        VAR_1 += VAR_2;
        VAR_0 += 8;
    } while (--VAR_3);
}
