
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int error; int handle; } ;
typedef TYPE_1__ mz_stream_posix ;
typedef int int64_t ;
typedef int int32_t ;


 int VAR_0 ;


 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;

int32_t FUNC_1(void *VAR_6, int64_t VAR_7, int32_t VAR_8)
{
    mz_stream_posix *VAR_9 = (mz_stream_posix*)VAR_6;
    int32_t VAR_10 = 0;

    switch (VAR_8)
    {
        case 130:
            VAR_10 = VAR_2;
            break;
        case 129:
            VAR_10 = VAR_3;
            break;
        case 128:
            VAR_10 = VAR_4;
            break;
        default:
            return VAR_1;
    }

    if (FUNC_0(VAR_9->handle, VAR_7, VAR_10) != 0)
    {
        VAR_9->error = VAR_5;
        return VAR_1;
    }

    return VAR_0;
}
