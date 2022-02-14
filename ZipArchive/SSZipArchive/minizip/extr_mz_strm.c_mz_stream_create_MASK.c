
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* (* create ) (void**) ;} ;
typedef TYPE_1__ mz_stream_vtbl ;


 void* FUNC_0 (void**) ;

void *FUNC_1(void **VAR_0, mz_stream_vtbl *VAR_1)
{
    if (VAR_0 == ((void*)0))
        return ((void*)0);
    if (VAR_1 == ((void*)0) || VAR_1->create == ((void*)0))
        return ((void*)0);
    return VAR_1->create(VAR_0);
}
