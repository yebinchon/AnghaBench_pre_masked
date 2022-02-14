
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* vtbl; } ;
typedef TYPE_2__ mz_stream ;
struct TYPE_3__ {int (* destroy ) (void**) ;} ;


 int FUNC_0 (void**) ;

void FUNC_1(void **VAR_0)
{
    mz_stream *VAR_1 = ((void*)0);
    if (VAR_0 == ((void*)0))
        return;
    VAR_1 = (mz_stream *)*VAR_0;
    if (VAR_1 != ((void*)0) && VAR_1->vtbl != ((void*)0) && VAR_1->vtbl->destroy != ((void*)0))
        VAR_1->vtbl->destroy(VAR_0);
    *VAR_0 = ((void*)0);
}
