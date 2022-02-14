
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ position; scalar_t__ limit; scalar_t__ size; int mode; } ;
typedef TYPE_1__ mz_stream_mem ;
typedef scalar_t__ int64_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;

 int FUNC_0 (void*,int) ;

int32_t FUNC_1(void *VAR_3, int64_t VAR_4, int32_t VAR_5)
{
    mz_stream_mem *VAR_6 = (mz_stream_mem *)VAR_3;
    int64_t VAR_7 = 0;
    int32_t VAR_8 = VAR_0;

    switch (VAR_5)
    {
        case 130:
            VAR_7 = VAR_6->position + VAR_4;
            break;
        case 129:
            VAR_7 = VAR_6->limit + VAR_4;
            break;
        case 128:
            VAR_7 = VAR_4;
            break;
        default:
            return VAR_2;
    }

    if (VAR_7 > VAR_6->size)
    {
        if ((VAR_6->mode & VAR_1) == 0)
            return VAR_2;

        VAR_8 = FUNC_0(VAR_3, (int32_t)VAR_7);
        if (VAR_8 != VAR_0)
            return VAR_8;
    }
    else if (VAR_7 < 0)
    {
        return VAR_2;
    }

    VAR_6->position = (int32_t)VAR_7;
    return VAR_0;
}
