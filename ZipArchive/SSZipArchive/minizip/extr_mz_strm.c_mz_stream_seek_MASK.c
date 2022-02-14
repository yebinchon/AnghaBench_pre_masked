
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* vtbl; } ;
typedef TYPE_2__ mz_stream ;
typedef int int64_t ;
typedef int int32_t ;
struct TYPE_4__ {int (* seek ) (TYPE_2__*,int ,int ) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;

int32_t FUNC_2(void *VAR_5, int64_t VAR_6, int32_t VAR_7)
{
    mz_stream *VAR_8 = (mz_stream *)VAR_5;
    if (VAR_8 == ((void*)0) || VAR_8->vtbl == ((void*)0) || VAR_8->vtbl->seek == ((void*)0))
        return VAR_1;
    if (FUNC_0(VAR_5) != VAR_0)
        return VAR_4;
    if (VAR_7 == VAR_3 && VAR_6 < 0)
        return VAR_2;
    return VAR_8->vtbl->seek(VAR_8, VAR_6, VAR_7);
}
