
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* (* child_next ) (void*,void*) ;} ;
typedef TYPE_1__ AVClass ;


 void* FUNC_0 (void*,void*) ;

void *FUNC_1(void *VAR_0, void *VAR_1)
{
    const AVClass *VAR_2 = *(AVClass **)VAR_0;
    if (VAR_2->child_next)
        return VAR_2->child_next(VAR_0, VAR_1);
    return ((void*)0);
}
