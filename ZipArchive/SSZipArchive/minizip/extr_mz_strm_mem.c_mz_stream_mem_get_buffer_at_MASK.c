
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; void* buffer; } ;
typedef TYPE_1__ mz_stream_mem ;
typedef scalar_t__ int64_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;

int32_t FUNC_0(void *VAR_2, int64_t VAR_3, const void **VAR_4)
{
    mz_stream_mem *VAR_5 = (mz_stream_mem *)VAR_2;
    if (VAR_4 == ((void*)0) || VAR_3 < 0 || VAR_5->size < VAR_3 || VAR_5->buffer == ((void*)0))
        return VAR_1;
    *VAR_4 = VAR_5->buffer + VAR_3;
    return VAR_0;
}
