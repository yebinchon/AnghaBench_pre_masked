
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline uint64_t FUNC_1(uint64_t VAR_0)
{
    VAR_0 ^= VAR_0 >> 33;
    VAR_0 *= FUNC_0(0xff51afd7ed558ccd);
    VAR_0 ^= VAR_0 >> 33;
    VAR_0 *= FUNC_0(0xc4ceb9fe1a85ec53);
    VAR_0 ^= VAR_0 >> 33;
    return VAR_0;
}
