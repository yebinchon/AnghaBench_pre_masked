
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int depth; int index; } ;
typedef TYPE_1__ hb_preset_index_t ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int ,int const*,int) ;

hb_preset_index_t* FUNC_2(const int *VAR_0, int VAR_1)
{
    hb_preset_index_t *VAR_2;
    VAR_2 = FUNC_0(1, sizeof(hb_preset_index_t));
    VAR_2->depth = VAR_1;
    if (VAR_0 != ((void*)0))
        FUNC_1(VAR_2->index, VAR_0, VAR_1 * sizeof(int));
    return VAR_2;
}
