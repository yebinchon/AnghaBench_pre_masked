
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, ptrdiff_t VAR_1,
                 const uint8_t *VAR_2, ptrdiff_t VAR_3,
                 int VAR_4, int VAR_5,
                 int VAR_6, int VAR_7)
{
    int VAR_8, VAR_9;
    for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
        const uint8_t *VAR_10 = VAR_2 + VAR_9 * VAR_3;
        uint8_t *VAR_11 = VAR_0 + VAR_9 * VAR_1;
        for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
            uint8_t VAR_12 = VAR_10[VAR_8];
            VAR_11[VAR_8] = FUNC_0(VAR_12 + ((VAR_12 * VAR_7) >> 8) + VAR_6);
        }
    }
}
