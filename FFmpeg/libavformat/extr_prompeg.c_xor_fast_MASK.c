
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int*,int) ;

__attribute__((used)) static void FUNC_4(const uint8_t *VAR_0, const uint8_t *VAR_1, uint8_t *VAR_2, int VAR_3) {
    int VAR_4, VAR_5, VAR_6;
    uint32_t VAR_7, VAR_8;

    VAR_5 = VAR_3 / sizeof (uint32_t);
    VAR_6 = VAR_5 * sizeof (uint32_t);

    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
        VAR_7 = FUNC_0(VAR_0);
        VAR_8 = FUNC_0(VAR_1);
        FUNC_2(VAR_2, VAR_7 ^ VAR_8);
        VAR_0 += 4;
        VAR_1 += 4;
        VAR_2 += 4;
    }


    VAR_5 = VAR_3 - VAR_6;

    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
        VAR_2[VAR_4] = VAR_0[VAR_4] ^ VAR_1[VAR_4];
    }
}
