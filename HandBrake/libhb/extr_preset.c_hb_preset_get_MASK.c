
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int hb_value_t ;
struct TYPE_4__ {int depth; int * index; } ;
typedef TYPE_1__ hb_preset_index_t ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

hb_value_t *
FUNC_4(const hb_preset_index_t *VAR_0)
{
    hb_value_t *VAR_1 = ((void*)0);

    if (VAR_0 == ((void*)0) || VAR_0->depth <= 0)
        return ((void*)0);

    hb_preset_index_t VAR_2 = *VAR_0;
    VAR_2.depth--;
    VAR_1 = FUNC_1(&VAR_2);
    if (VAR_1)
    {
        if (FUNC_3(VAR_1) <= VAR_0->index[VAR_0->depth-1])
        {
            FUNC_0("hb_preset_get: not found");
        }
        else
        {
            return FUNC_2(VAR_1, VAR_0->index[VAR_0->depth-1]);
        }
    }
    else
    {
        FUNC_0("hb_preset_get: not found");
    }
    return ((void*)0);
}
