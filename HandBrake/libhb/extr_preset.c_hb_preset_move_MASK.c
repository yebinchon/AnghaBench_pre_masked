
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int hb_value_t ;
struct TYPE_5__ {int depth; int* index; } ;
typedef TYPE_1__ hb_preset_index_t ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;

int FUNC_8(const hb_preset_index_t *VAR_0,
                   const hb_preset_index_t *VAR_1)
{
    hb_value_t *VAR_2 = ((void*)0);
    hb_value_t *VAR_3 = ((void*)0);

    hb_preset_index_t VAR_4 = *VAR_0;
    hb_preset_index_t VAR_5 = *VAR_1;
    VAR_4.depth--;
    VAR_5.depth--;
    VAR_2 = FUNC_1(&VAR_4);
    VAR_3 = FUNC_1(&VAR_5);
    if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
    {
        FUNC_0("hb_preset_move: not found");
        return -1;
    }

    hb_value_t *VAR_6;
    int VAR_7, VAR_8;

    VAR_7 = VAR_0->index[VAR_0->depth-1];
    VAR_8 = VAR_1->index[VAR_1->depth-1];
    VAR_6 = FUNC_3(VAR_2, VAR_7);
    FUNC_7(VAR_6);
    FUNC_6(VAR_2, VAR_7);


    if (VAR_2 == VAR_3 && VAR_7 < VAR_8)
        VAR_8--;
    if (FUNC_5(VAR_3) <= VAR_8)
        FUNC_2(VAR_3, VAR_6);
    else
        FUNC_4(VAR_3, VAR_8, VAR_6);

    return 0;
}
