
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t gint ;
typedef int gchar ;
struct TYPE_4__ {int * name; } ;
typedef TYPE_1__ combo_name_map_t ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (int const*,int *) ;

combo_name_map_t*
FUNC_1(const gchar *VAR_1)
{
    gint VAR_2;

    for (VAR_2 = 0; VAR_0[VAR_2].name != ((void*)0); VAR_2++)
    {
        if (FUNC_0(VAR_1, VAR_0[VAR_2].name) == 0)
        {
            return &VAR_0[VAR_2];
        }
    }
    return ((void*)0);
}
