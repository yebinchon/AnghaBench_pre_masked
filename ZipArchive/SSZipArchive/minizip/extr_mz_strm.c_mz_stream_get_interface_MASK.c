
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * vtbl; } ;
typedef TYPE_1__ mz_stream ;



void* FUNC_0(void *VAR_0)
{
    mz_stream *VAR_1 = (mz_stream *)VAR_0;
    if (VAR_1 == ((void*)0) || VAR_1->vtbl == ((void*)0))
        return ((void*)0);
    return (void *)VAR_1->vtbl;
}
