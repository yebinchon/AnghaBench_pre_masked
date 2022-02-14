
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int const* priv_class; } ;
typedef TYPE_1__ AVCodec ;
typedef int AVClass ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static const AVClass *FUNC_1(const AVClass *VAR_0)
{
    AVCodec *VAR_1 = ((void*)0);


    while (VAR_0 && (VAR_1 = FUNC_0(VAR_1)))
        if (VAR_1->priv_class == VAR_0)
            break;


    while ((VAR_1 = FUNC_0(VAR_1)))
        if (VAR_1->priv_class)
            return VAR_1->priv_class;
    return ((void*)0);
}
