
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int index; } ;
typedef TYPE_1__ hb_filter_param_t ;
typedef int gint ;
typedef int GhbValue ;


 TYPE_1__* FUNC_0 (TYPE_1__ const*,int const*) ;

__attribute__((used)) static gint
FUNC_1(const hb_filter_param_t *VAR_0, const GhbValue *VAR_1)
{
    gint VAR_2 = -1;

    if (VAR_0 == ((void*)0))
        return VAR_2;

    const hb_filter_param_t *VAR_3;
    VAR_3 = FUNC_0(VAR_0, VAR_1);
    if (VAR_3 != ((void*)0))
    {
        VAR_2 = VAR_3->index;
    }
    return VAR_2;
}
