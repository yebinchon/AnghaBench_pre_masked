
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int hb_value_t ;
struct TYPE_6__ {char const* settings; } ;
typedef TYPE_1__ hb_filter_param_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*,char const*,int) ;
 TYPE_1__* FUNC_1 (int,int*) ;
 TYPE_1__* FUNC_2 (int,int*) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (char const*) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (char const*,char*) ;

__attribute__((used)) static hb_value_t *
FUNC_7(int VAR_0, const char * VAR_1,
                          const char * VAR_2, const char * VAR_3)
{
    if ((VAR_1 == ((void*)0) || !FUNC_6(VAR_1, "custom")))
    {
        return FUNC_4(VAR_3);
    }

    int VAR_4;
    hb_filter_param_t *VAR_5;
    hb_filter_param_t *VAR_6;

    hb_value_t * VAR_7 = ((void*)0), * VAR_8 = ((void*)0);

    VAR_5 = FUNC_1(VAR_0, &VAR_4);
    VAR_6 = FUNC_0(VAR_5, VAR_1, VAR_4);
    if (VAR_6 != ((void*)0) && VAR_6->settings != ((void*)0))
    {
        VAR_7 = FUNC_4(VAR_6->settings);
        if (VAR_7 == ((void*)0))
        {
            return ((void*)0);
        }

        VAR_5 = FUNC_2(VAR_0, &VAR_4);
        VAR_6 = FUNC_0(VAR_5, VAR_2, VAR_4);
        if (VAR_6 != ((void*)0) && VAR_6->settings != ((void*)0))
        {
            VAR_8 = FUNC_4(VAR_6->settings);
            if (VAR_8 == ((void*)0))
            {
                FUNC_5(&VAR_7);
                return ((void*)0);
            }
            FUNC_3(VAR_7, VAR_8);
            FUNC_5(&VAR_8);
        }
    }

    return VAR_7;
}
