
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int amixdown; } ;
typedef TYPE_1__ hb_mixdown_t ;


 int FUNC_0 (char const*) ;
 TYPE_1__* FUNC_1 (TYPE_1__ const*) ;

const hb_mixdown_t*
FUNC_2(const char *VAR_0)
{

    int VAR_1 = FUNC_0(VAR_0);


    const hb_mixdown_t *VAR_2, *VAR_3;
    for (VAR_3 = VAR_2 = FUNC_1(((void*)0)); VAR_2 != ((void*)0);
         VAR_2 = FUNC_1(VAR_2))
    {
        if (VAR_1 == VAR_2->amixdown)
        {
            return VAR_2;
        }
    }

    return VAR_3;
}
