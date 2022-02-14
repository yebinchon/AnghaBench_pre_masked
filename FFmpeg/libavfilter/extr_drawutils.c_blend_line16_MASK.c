
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_0, unsigned VAR_1, unsigned VAR_2,
                         int VAR_3, int VAR_4, unsigned VAR_5, int VAR_6, int VAR_7)
{
    unsigned VAR_8 = VAR_2 * VAR_1;
    unsigned VAR_9 = 0x10001 - VAR_2;
    int VAR_10;

    if (VAR_6) {
        unsigned VAR_11 = (VAR_6 * VAR_2) >> VAR_5;
        uint16_t VAR_12 = FUNC_0(VAR_0);
        FUNC_1(VAR_0, (VAR_12 * (0x10001 - VAR_11) + VAR_1 * VAR_11) >> 16);
        VAR_0 += VAR_3;
    }
    for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
        uint16_t VAR_13 = FUNC_0(VAR_0);
        FUNC_1(VAR_0, (VAR_13 * VAR_9 + VAR_8) >> 16);
        VAR_0 += VAR_3;
    }
    if (VAR_7) {
        unsigned VAR_14 = (VAR_7 * VAR_2) >> VAR_5;
        uint16_t VAR_15 = FUNC_0(VAR_0);
        FUNC_1(VAR_0, (VAR_15 * (0x10001 - VAR_14) + VAR_1 * VAR_14) >> 16);
    }
}
