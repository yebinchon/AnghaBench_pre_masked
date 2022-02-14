
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int index; } ;
typedef TYPE_1__ hb_filter_param_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*,char const*,int) ;
 TYPE_1__* FUNC_1 (int,int*) ;

int
FUNC_2(int VAR_0, const char *VAR_1)
{
    if (VAR_1 == ((void*)0))
        return -1;

    int VAR_2;
    hb_filter_param_t *VAR_3;
    hb_filter_param_t *VAR_4;

    VAR_3 = FUNC_1(VAR_0, &VAR_2);
    VAR_4 = FUNC_0(VAR_3, VAR_1, VAR_2);
    if (VAR_4 == ((void*)0))
        return -1;
    return VAR_4->index;
}
