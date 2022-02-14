
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ index; int * name; int * short_name; } ;
typedef TYPE_1__ hb_filter_param_t ;
typedef scalar_t__ gint64 ;
typedef size_t gint ;
typedef int gchar ;
typedef int GhbValue ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int const*) ;
 int * FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int *,int const*) ;

const hb_filter_param_t*
FUNC_4(const hb_filter_param_t *VAR_4, const GhbValue *VAR_5)
{
    gint VAR_6;

    if (VAR_4 == ((void*)0))
        return ((void*)0);

    if (FUNC_2(VAR_5) == VAR_3)
    {
        const gchar *VAR_7;
        VAR_7 = FUNC_1(VAR_5);
        for (VAR_6 = 0; VAR_4[VAR_6].name != ((void*)0); VAR_6++)
        {
            if (FUNC_3(VAR_4[VAR_6].short_name, VAR_7) == 0 ||
                FUNC_3(VAR_4[VAR_6].name, VAR_7) == 0)
            {
                return &VAR_4[VAR_6];
            }
        }
    }
    else if (FUNC_2(VAR_5) == VAR_2 ||
             FUNC_2(VAR_5) == VAR_1 ||
             FUNC_2(VAR_5) == VAR_0)
    {
        gint64 VAR_8;
        VAR_8 = FUNC_0(VAR_5);
        for (VAR_6 = 0; VAR_4[VAR_6].name != ((void*)0); VAR_6++)
        {
            if ((gint64)VAR_4[VAR_6].index == VAR_8)
            {
                return &VAR_4[VAR_6];
            }
        }
    }
    return ((void*)0);
}
