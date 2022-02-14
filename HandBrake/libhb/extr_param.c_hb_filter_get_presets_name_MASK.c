
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * name; } ;
typedef TYPE_1__ hb_filter_param_t ;


 char** FUNC_0 (int,int) ;
 TYPE_1__* FUNC_1 (int,int *) ;
 char* FUNC_2 (int *) ;

char ** FUNC_3(int VAR_0)
{
    int VAR_1, VAR_2 = 0;
    hb_filter_param_t * VAR_3;

    VAR_3 = FUNC_1(VAR_0, ((void*)0));

    for (VAR_2 = 0; VAR_3[VAR_2].name != ((void*)0); VAR_2++);
    char ** VAR_4 = FUNC_0(VAR_2 + 1, sizeof(char*));
    for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++)
    {
        VAR_4[VAR_1] = FUNC_2(VAR_3[VAR_1].name);
    }
    VAR_4[VAR_1] = ((void*)0);

    return VAR_4;
}
