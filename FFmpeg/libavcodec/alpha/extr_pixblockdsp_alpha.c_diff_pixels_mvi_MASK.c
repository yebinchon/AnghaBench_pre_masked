
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int ptrdiff_t ;
typedef int int16_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(int16_t *VAR_0, const uint8_t *VAR_1, const uint8_t *VAR_2,
                            ptrdiff_t VAR_3)
{
    int VAR_4 = 8;
    uint64_t VAR_5 = 0x4040;

    VAR_5 |= VAR_5 << 16;
    VAR_5 |= VAR_5 << 32;
    do {
        uint64_t VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
        uint64_t VAR_11;

        VAR_6 = FUNC_1(VAR_1);
        VAR_7 = FUNC_1(VAR_2);
        VAR_8 = FUNC_0(VAR_6, VAR_7);
        VAR_9 = VAR_6 - VAR_7;
        VAR_10 = FUNC_4(VAR_5, VAR_8);
        VAR_9 += 4 * VAR_10;
        VAR_11 = FUNC_4(-1, VAR_8);

        FUNC_2(FUNC_3(VAR_9) | (FUNC_3(VAR_11) << 8), VAR_0);
        FUNC_2(FUNC_3(VAR_9 >> 32) | (FUNC_3(VAR_11 >> 32) << 8), VAR_0 + 4);

        VAR_1 += VAR_3;
        VAR_2 += VAR_3;
        VAR_0 += 8;
    } while (--VAR_4);
}
