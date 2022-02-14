
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; scalar_t__ position; int mode; scalar_t__ grow_size; scalar_t__ buffer; scalar_t__ limit; } ;
typedef TYPE_1__ mz_stream_mem ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,void const*,scalar_t__) ;
 scalar_t__ FUNC_1 (void*,scalar_t__) ;

int32_t FUNC_2(void *VAR_2, const void *VAR_3, int32_t VAR_4)
{
    mz_stream_mem *VAR_5 = (mz_stream_mem *)VAR_2;
    int32_t VAR_6 = 0;
    int32_t VAR_7 = VAR_0;

    if (VAR_4 == 0)
        return VAR_4;

    if (VAR_4 > VAR_5->size - VAR_5->position)
    {
        if (VAR_5->mode & VAR_1)
        {
            VAR_6 = VAR_5->size;
            if (VAR_4 < VAR_5->grow_size)
                VAR_6 += VAR_5->grow_size;
            else
                VAR_6 += VAR_4;

            VAR_7 = FUNC_1(VAR_2, VAR_6);
            if (VAR_7 != VAR_0)
                return VAR_7;
        }
        else
        {
            VAR_4 = VAR_5->size - VAR_5->position;
        }
    }

    FUNC_0(VAR_5->buffer + VAR_5->position, VAR_3, VAR_4);

    VAR_5->position += VAR_4;
    if (VAR_5->position > VAR_5->limit)
        VAR_5->limit = VAR_5->position;

    return VAR_4;
}
