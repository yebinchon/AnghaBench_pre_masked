
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const* priv_class; } ;
typedef int AVClass ;
typedef TYPE_1__ AVBitStreamFilter ;


 TYPE_1__* FUNC_0 (void**) ;

const AVClass *FUNC_1(const AVClass *VAR_0)
{
    const AVBitStreamFilter *VAR_1 = ((void*)0);
    void *VAR_2 = 0;


    while (VAR_0 && (VAR_1 = FUNC_0(&VAR_2))) {
        if (VAR_1->priv_class == VAR_0) {
            break;
        }
    }


    while ((VAR_1 = FUNC_0(&VAR_2))) {
        if (VAR_1->priv_class)
            return VAR_1->priv_class;
    }
    return ((void*)0);
}
