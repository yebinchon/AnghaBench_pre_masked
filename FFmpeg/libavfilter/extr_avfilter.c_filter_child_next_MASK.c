
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* priv; TYPE_1__* filter; } ;
struct TYPE_3__ {scalar_t__ priv_class; } ;
typedef TYPE_2__ AVFilterContext ;



__attribute__((used)) static void *FUNC_0(void *VAR_0, void *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_0;
    if (!VAR_1 && VAR_2->filter && VAR_2->filter->priv_class && VAR_2->priv)
        return VAR_2->priv;
    return ((void*)0);
}
