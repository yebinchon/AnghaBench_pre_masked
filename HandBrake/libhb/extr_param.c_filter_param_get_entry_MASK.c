
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * short_name; int * name; } ;
typedef TYPE_1__ hb_filter_param_t ;


 int FUNC_0 (char const*,int *) ;

__attribute__((used)) static hb_filter_param_t*
FUNC_1(hb_filter_param_t *VAR_0, const char *VAR_1, int VAR_2)
{
    if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
        return ((void*)0);

    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
    {
        if ((VAR_0[VAR_3].name != ((void*)0) && !FUNC_0(VAR_1, VAR_0[VAR_3].name)) ||
            (VAR_0[VAR_3].short_name != ((void*)0) &&
             !FUNC_0(VAR_1, VAR_0[VAR_3].short_name)))
        {
            return &VAR_0[VAR_3];
        }
    }
    return ((void*)0);
}
