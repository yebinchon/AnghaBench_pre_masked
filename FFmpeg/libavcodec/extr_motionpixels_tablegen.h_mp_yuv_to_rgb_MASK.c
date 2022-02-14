
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static int FUNC_0(int VAR_2, int VAR_3, int VAR_4, int VAR_5) {
    const uint8_t *VAR_6 = VAR_1 + VAR_0;
    int VAR_7, VAR_8, VAR_9;

    VAR_7 = (1000 * VAR_2 + 701 * VAR_3) / 1000;
    VAR_8 = (1000 * VAR_2 - 357 * VAR_3 - 172 * VAR_4) / 1000;
    VAR_9 = (1000 * VAR_2 + 886 * VAR_4) / 1000;
    if (VAR_5)
        return ((VAR_6[VAR_7 * 8] & 0xF8) << 7) | ((VAR_6[VAR_8 * 8] & 0xF8) << 2) | (VAR_6[VAR_9 * 8] >> 3);
    if ((unsigned)VAR_7 < 32 && (unsigned)VAR_8 < 32 && (unsigned)VAR_9 < 32)
        return (VAR_7 << 10) | (VAR_8 << 5) | VAR_9;
    return 1 << 15;
}
