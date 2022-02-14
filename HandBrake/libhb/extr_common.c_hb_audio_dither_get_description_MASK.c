
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int method; char const* description; } ;
typedef TYPE_1__ hb_dither_t ;
struct TYPE_8__ {int method; } ;
struct TYPE_7__ {int method; } ;


 TYPE_1__* FUNC_0 (TYPE_1__ const*) ;
 TYPE_3__* VAR_0 ;
 TYPE_2__* VAR_1 ;

const char* FUNC_1(int VAR_2)
{
    if (VAR_2 < VAR_0->method ||
        VAR_2 > VAR_1 ->method)
        goto fail;

    const hb_dither_t *VAR_3 = ((void*)0);
    while ((VAR_3 = FUNC_0(VAR_3)) != ((void*)0))
    {
        if (VAR_3->method == VAR_2)
        {
            return VAR_3->description;
        }
    }

fail:
    return ((void*)0);
}
