
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gchar ;
struct TYPE_3__ {int opts; int * (* opt_get ) (int const*,int ,int const*,int ) ;} ;
typedef TYPE_1__ combo_name_map_t ;
typedef int GhbValue ;
typedef int GhbType ;


 TYPE_1__* FUNC_0 (int const*) ;
 int FUNC_1 (char*,int const*) ;
 int * FUNC_2 (int const*,int ,int const*,int ) ;

__attribute__((used)) static GhbValue *
FUNC_3(const gchar *VAR_0, const GhbValue *VAR_1, GhbType VAR_2)
{
    combo_name_map_t *VAR_3 = FUNC_0(VAR_0);
    if (VAR_3 != ((void*)0))
    {
        if (VAR_3->opt_get != ((void*)0))
        {
            return VAR_3->opt_get(VAR_0, VAR_3->opts, VAR_1, VAR_2);
        }
        else
        {
            FUNC_1("Combobox entry %s missing opt_get()", VAR_0);
        }
    }
    else
    {
        FUNC_1("Combobox entry %s not found", VAR_0);
    }
    return ((void*)0);
}
