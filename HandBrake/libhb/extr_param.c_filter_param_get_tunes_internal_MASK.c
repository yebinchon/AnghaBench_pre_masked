
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int hb_filter_param_t ;
struct TYPE_2__ {int filter_id; int tune_count; int * tunes; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static hb_filter_param_t*
FUNC_0(int VAR_2, int *VAR_3)
{
    int VAR_4;

    if (VAR_3 != ((void*)0))
    {
        *VAR_3 = 0;
    }
    for (VAR_4 = 0; VAR_1[VAR_4].filter_id != VAR_0; VAR_4++)
    {
        if (VAR_1[VAR_4].filter_id == VAR_2)
        {
            if (VAR_3 != ((void*)0))
            {
                *VAR_3 = VAR_1[VAR_4].tune_count;
            }
            return VAR_1[VAR_4].tunes;
        }
    }
    return ((void*)0);
}
