
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int amixdown; char const* short_name; } ;
typedef TYPE_1__ hb_mixdown_t ;
struct TYPE_8__ {int amixdown; } ;
struct TYPE_7__ {int amixdown; } ;


 TYPE_5__* VAR_0 ;
 TYPE_4__* VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_1__ const*) ;

const char* FUNC_1(int VAR_2)
{
    if (VAR_2 < VAR_0->amixdown ||
        VAR_2 > VAR_1 ->amixdown)
        goto fail;

    const hb_mixdown_t *VAR_3 = ((void*)0);
    while ((VAR_3 = FUNC_0(VAR_3)) != ((void*)0))
    {
        if (VAR_3->amixdown == VAR_2)
        {
            return VAR_3->short_name;
        }
    }

fail:
    return ((void*)0);
}
