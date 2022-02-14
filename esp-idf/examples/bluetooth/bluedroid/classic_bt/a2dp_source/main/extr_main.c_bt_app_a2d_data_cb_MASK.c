
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int32_t ;


 int FUNC_0 () ;

__attribute__((used)) static int32_t FUNC_1(uint8_t *VAR_0, int32_t VAR_1)
{
    if (VAR_1 < 0 || VAR_0 == ((void*)0)) {
        return 0;
    }


    int VAR_2 = FUNC_0() % (1 << 16);
    for (int VAR_3 = 0; VAR_3 < (VAR_1 >> 1); VAR_3++) {
        VAR_0[(VAR_3 << 1)] = VAR_2 & 0xff;
        VAR_0[(VAR_3 << 1) + 1] = (VAR_2 >> 8) & 0xff;
    }

    return VAR_1;
}
