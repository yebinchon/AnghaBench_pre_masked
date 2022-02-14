
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {void* limit; void* size; int * buffer; } ;
typedef TYPE_1__ mz_stream_mem ;
typedef void* int32_t ;



void FUNC_0(void *VAR_0, void *VAR_1, int32_t VAR_2)
{
    mz_stream_mem *VAR_3 = (mz_stream_mem *)VAR_0;
    VAR_3->buffer = (uint8_t *)VAR_1;
    VAR_3->size = VAR_2;
    VAR_3->limit = VAR_2;
}
