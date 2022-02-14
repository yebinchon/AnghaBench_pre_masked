
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rate; char const* name; } ;
typedef TYPE_1__ hb_rate_t ;


 TYPE_1__* FUNC_0 (TYPE_1__ const*) ;

const char*
FUNC_1(int VAR_0)
{
    const hb_rate_t *VAR_1, *VAR_2;
    for (VAR_2 = VAR_1 = FUNC_0(((void*)0)); VAR_1 != ((void*)0);
         VAR_1 = FUNC_0(VAR_1))
    {
        if (VAR_0 == VAR_1->rate)
        {
            return VAR_1->name;
        }
    }
    return VAR_2->name;
}
