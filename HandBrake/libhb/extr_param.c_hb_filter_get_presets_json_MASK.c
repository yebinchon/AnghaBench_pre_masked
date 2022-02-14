
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hb_value_array_t ;
struct TYPE_3__ {int * name; int * short_name; } ;
typedef TYPE_1__ hb_filter_param_t ;
typedef int hb_dict_t ;


 TYPE_1__* FUNC_0 (int,int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int **) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

char * FUNC_8(int VAR_0)
{
    hb_value_array_t * VAR_1 = FUNC_4();
    int VAR_2, VAR_3 = 0;
    hb_filter_param_t * VAR_4;

    VAR_4 = FUNC_0(VAR_0, ((void*)0));

    for (VAR_3 = 0; VAR_4[VAR_3].name != ((void*)0); VAR_3++);
    for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
    {
        hb_dict_t * VAR_5 = FUNC_1();
        FUNC_2(VAR_5, "short_name", FUNC_7(VAR_4[VAR_2].short_name));
        FUNC_2(VAR_5, "name", FUNC_7(VAR_4[VAR_2].name));
        FUNC_3(VAR_1, VAR_5);
    }

    char * VAR_6 = FUNC_6(VAR_1);
    FUNC_5(&VAR_1);
    return VAR_6;
}
