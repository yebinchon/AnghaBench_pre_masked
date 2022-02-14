
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * name; } ;
typedef TYPE_1__ hb_filter_param_t ;
typedef int hb_dict_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*,char const*,int) ;
 TYPE_1__* FUNC_1 (int,int*) ;
 TYPE_1__* FUNC_2 (int,int*) ;
 int * FUNC_3 (char const*) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (char const*,char*) ;

int
FUNC_7(int VAR_0, const char *VAR_1, const char *VAR_2,
                          const char *VAR_3)
{
    if (VAR_1 == ((void*)0))
        return 1;

    int VAR_4, VAR_5;
    hb_filter_param_t *VAR_6, *VAR_7;
    hb_filter_param_t *VAR_8, *VAR_9;

    VAR_6 = FUNC_1(VAR_0, &VAR_4);
    VAR_8 = FUNC_0(VAR_6, VAR_1, VAR_4);
    if (VAR_8 == ((void*)0) || VAR_8->name == ((void*)0))
        return 1;
    if (!FUNC_6(VAR_1, "custom") && VAR_3 != ((void*)0))
    {
        hb_dict_t * VAR_10 = FUNC_3(VAR_3);
        if (VAR_10 == ((void*)0))
        {
            return 1;
        }
        int VAR_11 = FUNC_4(VAR_0, VAR_10);
        FUNC_5(&VAR_10);
        return VAR_11;
    }
    if (VAR_2 != ((void*)0))
    {
        VAR_7 = FUNC_2(VAR_0, &VAR_5);
        VAR_9 = FUNC_0(VAR_7, VAR_2, VAR_5);
        if (VAR_9 == ((void*)0))
        {
            return 1;
        }
    }
    return 0;
}
