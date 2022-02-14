
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;


 int FUNC_0 (unsigned long long) ;

uint64_t FUNC_1(uint64_t VAR_0, int VAR_1)
{
    int VAR_2;

    if (FUNC_0(VAR_0) <= VAR_1)
        return 0;

    for (VAR_2 = 0; VAR_2 < 64; VAR_2++) {
        if ((1ULL << VAR_2) & VAR_0 && !VAR_1--)
            return 1ULL << VAR_2;
    }
    return 0;
}
