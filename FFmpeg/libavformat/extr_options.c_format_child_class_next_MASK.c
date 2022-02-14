
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int const* priv_class; } ;
struct TYPE_7__ {int const* priv_class; } ;
typedef TYPE_1__ AVOutputFormat ;
typedef TYPE_2__ AVInputFormat ;
typedef int AVClass ;


 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int const VAR_0 ;

__attribute__((used)) static const AVClass *FUNC_2(const AVClass *VAR_1)
{
    AVInputFormat *VAR_2 = ((void*)0);
    AVOutputFormat *VAR_3 = ((void*)0);

    if (!VAR_1)
        return &VAR_0;

    while ((VAR_2 = FUNC_0(VAR_2)))
        if (VAR_2->priv_class == VAR_1)
            break;

    if (!VAR_2)
        while ((VAR_3 = FUNC_1(VAR_3)))
            if (VAR_3->priv_class == VAR_1)
                break;
    if (!VAR_3)
        while ((VAR_2 = FUNC_0(VAR_2)))
            if (VAR_2->priv_class)
                return VAR_2->priv_class;

    while ((VAR_3 = FUNC_1(VAR_3)))
        if (VAR_3->priv_class)
            return VAR_3->priv_class;

    return ((void*)0);
}
