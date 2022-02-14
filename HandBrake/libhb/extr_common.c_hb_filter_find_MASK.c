
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int hb_list_t ;
struct TYPE_4__ {int id; } ;
typedef TYPE_1__ hb_filter_object_t ;


 int FUNC_0 (int const*) ;
 TYPE_1__* FUNC_1 (int const*,int) ;

hb_filter_object_t * FUNC_2(const hb_list_t *VAR_0, int VAR_1)
{
    hb_filter_object_t *VAR_2 = ((void*)0);
    int VAR_3;

    if (VAR_0 == ((void*)0))
    {
        return ((void*)0);
    }
    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
    {
        VAR_2 = FUNC_1(VAR_0, VAR_3);
        if (VAR_2->id == VAR_1)
        {
            return VAR_2;
        }
    }

    return ((void*)0);
}
