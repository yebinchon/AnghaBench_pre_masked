
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16_t ;



__attribute__((used)) static inline int FUNC_0(const void *VAR_0, const void *VAR_1)
{
    if (*(u16_t *)VAR_0 < * (u16_t *)VAR_1) {
        return -1;
    }
    if (*(u16_t *)VAR_0 > *(u16_t *)VAR_1) {
        return 1;
    }
    return 0;
}
