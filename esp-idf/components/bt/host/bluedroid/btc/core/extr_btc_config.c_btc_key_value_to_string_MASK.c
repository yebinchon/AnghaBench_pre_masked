
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, char *VAR_1, int VAR_2)
{
    const char *VAR_3 = "0123456789abcdef";

    FUNC_0(VAR_0 != ((void*)0));
    FUNC_0(VAR_1 != ((void*)0));

    for (size_t VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
        VAR_1[(VAR_4 * 2) + 0] = VAR_3[(VAR_0[VAR_4] >> 4) & 0x0F];
        VAR_1[(VAR_4 * 2) + 1] = VAR_3[VAR_0[VAR_4] & 0x0F];
    }

    return;
}
