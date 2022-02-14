
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 long long FUNC_0 (int) ;

__attribute__((used)) static uint32_t FUNC_1(uint32_t VAR_0, uint64_t VAR_1)
{
    uint64_t VAR_2 = VAR_0 * (VAR_1 & 0xffffffff);
    uint64_t VAR_3 = VAR_0 * (VAR_1 >> 32);
    VAR_3 += VAR_2 >> 32;
    VAR_2 &= 0xffffffff;
    VAR_2 += 1LL << FUNC_0(VAR_3 >> 21);
    VAR_3 += VAR_2 >> 32;
    return VAR_3 >> 20;
}
