
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hb_value_t ;
struct TYPE_3__ {int depth; int* index; } ;
typedef TYPE_1__ hb_preset_index_t ;


 int * FUNC_0 (int *,char*) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

hb_value_t *
FUNC_4(const hb_preset_index_t *VAR_1)
{
    int VAR_2, VAR_3, VAR_4;
    hb_value_t *VAR_5;

    if (VAR_1 == ((void*)0))
        return VAR_0;

    hb_value_t *VAR_6 = VAR_0;
    for (VAR_2 = 0; VAR_2 < VAR_1->depth; VAR_2++)
    {
        VAR_3 = FUNC_2(VAR_6);
        if (VAR_1->index[VAR_2] >= VAR_3) return ((void*)0);
        VAR_5 = FUNC_1(VAR_6, VAR_1->index[VAR_2]);
        VAR_4 = FUNC_3(FUNC_0(VAR_5, "Folder"));
        if (!VAR_4)
            break;
        VAR_6 = FUNC_0(VAR_5, "ChildrenArray");
    }
    if (VAR_2 < VAR_1->depth)
        return ((void*)0);
    return VAR_6;
}
