
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int GetBitContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(GetBitContext *VAR_0, uint8_t *VAR_1, uint8_t *VAR_2, int VAR_3)
{
    uint8_t *VAR_4 = VAR_2 + VAR_3;
    int VAR_5 = VAR_3;

    do {
        if (!FUNC_0(VAR_0)) {
            *VAR_1++ = *VAR_2++;
            VAR_3--;
        } else {
            *VAR_1++ = *VAR_4++;
            VAR_5--;
        }
    } while (VAR_3 && VAR_5);

    while (VAR_3--)
        *VAR_1++ = *VAR_2++;
    while (VAR_5--)
        *VAR_1++ = *VAR_4++;
}
