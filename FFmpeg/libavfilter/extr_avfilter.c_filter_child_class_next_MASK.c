
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const* priv_class; } ;
typedef TYPE_1__ AVFilter ;
typedef int AVClass ;


 TYPE_1__* FUNC_0 (void**) ;

__attribute__((used)) static const AVClass *FUNC_1(const AVClass *VAR_0)
{
    void *VAR_1 = ((void*)0);
    const AVFilter *VAR_2 = ((void*)0);


    while (VAR_0 && (VAR_2 = FUNC_0(&VAR_1)))
        if (VAR_2->priv_class == VAR_0)
            break;


    if (VAR_0 && !VAR_2)
        return ((void*)0);


    while ((VAR_2 = FUNC_0(&VAR_1)))
        if (VAR_2->priv_class)
            return VAR_2->priv_class;

    return ((void*)0);
}
