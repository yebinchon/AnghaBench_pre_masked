
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;


 int FUNC_0 (unsigned long long) ;
 char const* FUNC_1 (int) ;

const char *FUNC_2(uint64_t VAR_0)
{
    int VAR_1;
    if (FUNC_0(VAR_0) != 1)
        return ((void*)0);
    for (VAR_1 = 0; VAR_1 < 64; VAR_1++)
        if ((1ULL<<VAR_1) & VAR_0)
            return FUNC_1(VAR_1);
    return ((void*)0);
}
