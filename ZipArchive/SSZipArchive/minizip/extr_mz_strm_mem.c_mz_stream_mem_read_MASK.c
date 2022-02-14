
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; scalar_t__ position; scalar_t__ limit; scalar_t__ buffer; } ;
typedef TYPE_1__ mz_stream_mem ;
typedef scalar_t__ int32_t ;


 int FUNC_0 (void*,scalar_t__,scalar_t__) ;

int32_t FUNC_1(void *VAR_0, void *VAR_1, int32_t VAR_2)
{
    mz_stream_mem *VAR_3 = (mz_stream_mem *)VAR_0;

    if (VAR_2 > VAR_3->size - VAR_3->position)
        VAR_2 = VAR_3->size - VAR_3->position;
    if (VAR_3->position + VAR_2 > VAR_3->limit)
        VAR_2 = VAR_3->limit - VAR_3->position;

    if (VAR_2 <= 0)
        return 0;

    FUNC_0(VAR_1, VAR_3->buffer + VAR_3->position, VAR_2);
    VAR_3->position += VAR_2;

    return VAR_2;
}
