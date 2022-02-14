
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;

void FUNC_1(int VAR_0, int VAR_1)
{
    const char* VAR_2 = "0123456789abcdef";
    for (int VAR_3 = VAR_1; VAR_3 > 0; VAR_3 -= 4) {
        FUNC_0(VAR_2[(VAR_0 >> (VAR_3 - 4)) & 0xf]);
    }
}
