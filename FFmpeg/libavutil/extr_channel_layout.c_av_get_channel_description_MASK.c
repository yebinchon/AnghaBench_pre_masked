
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct TYPE_3__ {char const* description; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (unsigned long long) ;
 TYPE_1__* VAR_0 ;

const char *FUNC_2(uint64_t VAR_1)
{
    int VAR_2;
    if (FUNC_1(VAR_1) != 1)
        return ((void*)0);
    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
        if ((1ULL<<VAR_2) & VAR_1)
            return VAR_0[VAR_2].description;
    return ((void*)0);
}
