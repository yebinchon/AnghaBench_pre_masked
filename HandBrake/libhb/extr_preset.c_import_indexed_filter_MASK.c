
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int index; char const* short_name; int * name; } ;
typedef TYPE_1__ hb_filter_param_t ;


 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static const char* FUNC_1(int VAR_0, int VAR_1)
{
    hb_filter_param_t *VAR_2;
    VAR_2 = FUNC_0(VAR_0);

    int VAR_3;
    for (VAR_3 = 0; VAR_2[VAR_3].name != ((void*)0); VAR_3++)
    {
        if (VAR_2[VAR_3].index == VAR_1)
            break;
    }
    return VAR_2[VAR_3].short_name;
}
