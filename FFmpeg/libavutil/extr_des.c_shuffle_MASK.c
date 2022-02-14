
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;



__attribute__((used)) static uint64_t FUNC_0(uint64_t VAR_0, const uint8_t *VAR_1, int VAR_2)
{
    int VAR_3;
    uint64_t VAR_4 = 0;
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
        VAR_4 += VAR_4 + ((VAR_0 >> *VAR_1++) & 1);
    return VAR_4;
}
