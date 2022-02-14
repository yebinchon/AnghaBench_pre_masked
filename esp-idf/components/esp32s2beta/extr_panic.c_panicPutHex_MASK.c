
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;

__attribute__((used)) static void FUNC_1(int VAR_0)
{
    int VAR_1;
    int VAR_2;
    for (VAR_1 = 0; VAR_1 < 8; VAR_1++) {
        VAR_2 = (VAR_0 >> 28) & 0xf;
        if (VAR_2 < 10) {
            FUNC_0('0' + VAR_2);
        } else {
            FUNC_0('a' + VAR_2 - 10);
        }
        VAR_0 <<= 4;
    }
}
