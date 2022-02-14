
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int const*) ;

__attribute__((used)) static void FUNC_1(const uint8_t VAR_0[48], uint32_t VAR_1[12])
{
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < 12; VAR_2++)
        VAR_1[VAR_2] = FUNC_0(VAR_0 + (VAR_2 << 2)) | 1;
}
