
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int format; char const* short_name; } ;
typedef TYPE_1__ hb_container_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__ const*) ;

const char* FUNC_1(int VAR_1)
{
    if (!(VAR_1 & VAR_0))
        goto fail;

    const hb_container_t *VAR_2 = ((void*)0);
    while ((VAR_2 = FUNC_0(VAR_2)) != ((void*)0))
    {
        if (VAR_2->format == VAR_1)
        {
            return VAR_2->short_name;
        }
    }

fail:
    return ((void*)0);
}
