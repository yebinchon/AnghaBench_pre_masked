
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int hb_value_t ;
struct TYPE_4__ {int depth; int * index; } ;
typedef TYPE_1__ hb_preset_index_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int * FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *) ;
 int * FUNC_4 (int const*) ;
 int FUNC_5 (int *,int ) ;

int
FUNC_6(const hb_preset_index_t *VAR_1, const hb_value_t *VAR_2)
{
    hb_value_t *VAR_3 = ((void*)0);

    if (VAR_2 == ((void*)0) || VAR_1 == ((void*)0) || VAR_1->depth <= 0)
        return -1;

    hb_preset_index_t VAR_4 = *VAR_1;
    VAR_4.depth--;
    VAR_3 = FUNC_1(&VAR_4);
    if (VAR_3)
    {
        if (FUNC_2(VAR_3) <= VAR_1->index[VAR_1->depth-1])
        {
            FUNC_0("hb_preset_replace: not found");
            return -1;
        }
        else
        {
            hb_value_t *VAR_5 = FUNC_4(VAR_2);
            FUNC_5(VAR_5, VAR_0);
            FUNC_3(VAR_3, VAR_1->index[VAR_1->depth-1], VAR_5);
        }
    }
    else
    {
        FUNC_0("hb_preset_replace: not found");
        return -1;
    }
    return 0;
}
