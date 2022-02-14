
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int const* priv_data_class; } ;
typedef int AVClass ;


 TYPE_1__** VAR_0 ;

const AVClass *FUNC_0(const AVClass *VAR_1)
{
    int VAR_2;


    for (VAR_2 = 0; VAR_1 && VAR_0[VAR_2]; VAR_2++) {
        if (VAR_0[VAR_2]->priv_data_class == VAR_1) {
            VAR_2++;
            break;
        }
    }


    for (; VAR_0[VAR_2]; VAR_2++)
        if (VAR_0[VAR_2]->priv_data_class)
            return VAR_0[VAR_2]->priv_data_class;
    return ((void*)0);
}
