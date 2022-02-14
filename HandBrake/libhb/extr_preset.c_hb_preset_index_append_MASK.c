
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int depth; int * index; } ;
typedef TYPE_1__ hb_preset_index_t ;


 int VAR_0 ;

void FUNC_0(hb_preset_index_t *VAR_1,
                            const hb_preset_index_t *VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_2->depth &&
                 VAR_1->depth < VAR_0; VAR_3++, VAR_1->depth++)
    {
        VAR_1->index[VAR_1->depth] = VAR_2->index[VAR_3];
    }
}
