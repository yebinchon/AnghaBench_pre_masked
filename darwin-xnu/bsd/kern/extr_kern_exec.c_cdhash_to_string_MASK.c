
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(char VAR_2[VAR_1], uint8_t const * const VAR_3) {
    static char const VAR_4[] = "0123456789abcdef";






    for (int VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
      VAR_2[VAR_5*2] = VAR_4[(VAR_3[VAR_5] & 0xf0) >> 4];
      VAR_2[VAR_5*2+1] = VAR_4[VAR_3[VAR_5] & 0x0f];
    }
    VAR_2[VAR_1 - 1] = 0;
}
