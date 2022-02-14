
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__ const* option; } ;
struct TYPE_5__ {scalar_t__ name; } ;
typedef TYPE_1__ AVOption ;
typedef TYPE_2__ AVClass ;



const AVOption *FUNC_0(const void *VAR_0, const AVOption *VAR_1)
{
    const AVClass *VAR_2;
    if (!VAR_0)
        return ((void*)0);
    VAR_2 = *(const AVClass**)VAR_0;
    if (!VAR_1 && VAR_2 && VAR_2->option && VAR_2->option[0].name)
        return VAR_2->option;
    if (VAR_1 && VAR_1[1].name)
        return ++VAR_1;
    return ((void*)0);
}
