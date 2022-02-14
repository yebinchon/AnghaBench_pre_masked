
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* vtbl; } ;
typedef TYPE_2__ mz_stream ;
typedef int int32_t ;
struct TYPE_4__ {int (* is_open ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

int32_t FUNC_1(void *VAR_1)
{
    mz_stream *VAR_2 = (mz_stream *)VAR_1;
    if (VAR_2 == ((void*)0) || VAR_2->vtbl == ((void*)0) || VAR_2->vtbl->is_open == ((void*)0))
        return VAR_0;
    return VAR_2->vtbl->is_open(VAR_2);
}
