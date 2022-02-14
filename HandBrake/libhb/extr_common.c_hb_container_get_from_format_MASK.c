
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int format; } ;
typedef TYPE_1__ hb_container_t ;
struct TYPE_5__ {TYPE_1__ item; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;

hb_container_t* FUNC_0(int VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
    {
        if (VAR_0[VAR_3].item.format == VAR_2)
        {
            return &VAR_0[VAR_3].item;
        }
    }

    return ((void*)0);
}
