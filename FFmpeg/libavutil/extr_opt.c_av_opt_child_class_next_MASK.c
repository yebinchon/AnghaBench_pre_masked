
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__ const* (* child_class_next ) (TYPE_1__ const*) ;} ;
typedef TYPE_1__ AVClass ;


 TYPE_1__ const* FUNC_0 (TYPE_1__ const*) ;

const AVClass *FUNC_1(const AVClass *VAR_0, const AVClass *VAR_1)
{
    if (VAR_0->child_class_next)
        return VAR_0->child_class_next(VAR_1);
    return ((void*)0);
}
