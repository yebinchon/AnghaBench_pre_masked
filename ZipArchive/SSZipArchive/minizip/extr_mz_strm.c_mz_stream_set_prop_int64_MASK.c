
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* vtbl; } ;
typedef TYPE_2__ mz_stream ;
typedef int int64_t ;
typedef int int32_t ;
struct TYPE_3__ {int (* set_prop_int64 ) (void*,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,int ) ;

int32_t FUNC_1(void *VAR_1, int32_t VAR_2, int64_t VAR_3)
{
    mz_stream *VAR_4 = (mz_stream *)VAR_1;
    if (VAR_4 == ((void*)0) || VAR_4->vtbl == ((void*)0) || VAR_4->vtbl->set_prop_int64 == ((void*)0))
        return VAR_0;
    return VAR_4->vtbl->set_prop_int64(VAR_1, VAR_2, VAR_3);
}
