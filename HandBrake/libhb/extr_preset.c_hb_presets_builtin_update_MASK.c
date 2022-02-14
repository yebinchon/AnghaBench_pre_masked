
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int depth; } ;
struct TYPE_8__ {TYPE_1__ path; } ;
typedef TYPE_2__ preset_do_context_t ;
typedef int hb_value_t ;
struct TYPE_9__ {scalar_t__ depth; } ;
typedef TYPE_3__ hb_preset_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int * VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int *) ;
 TYPE_3__* FUNC_7 (int *) ;
 int FUNC_8 (int ,int *,TYPE_2__*) ;

void FUNC_9(void)
{
    preset_do_context_t VAR_4;
    hb_preset_index_t *VAR_5;
    hb_value_t *VAR_6;
    int VAR_7;

    VAR_4.path.depth = 1;
    FUNC_8(VAR_1, VAR_2, &VAR_4);

    VAR_6 = FUNC_4(VAR_3);
    VAR_5 = FUNC_7(VAR_2);
    if (VAR_5 != ((void*)0) && VAR_5->depth != 0)
    {


        VAR_4.path.depth = 1;
        FUNC_8(VAR_0, VAR_6, &VAR_4);
    }
    FUNC_0(VAR_5);

    for (VAR_7 = FUNC_3(VAR_6) - 1; VAR_7 >= 0; VAR_7--)
    {
        hb_value_t *VAR_8;
        VAR_8 = FUNC_1(VAR_6, VAR_7);
        FUNC_6(VAR_8);
        FUNC_2(VAR_2, 0, VAR_8);
    }
    FUNC_5(&VAR_6);
}
