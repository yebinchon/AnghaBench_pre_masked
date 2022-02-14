
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int error; int * handle; } ;
typedef TYPE_1__ mz_stream_posix ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;

int32_t FUNC_1(void *VAR_3)
{
    mz_stream_posix *VAR_4 = (mz_stream_posix*)VAR_3;
    int32_t VAR_5 = 0;
    if (VAR_4->handle != ((void*)0))
    {
        VAR_5 = FUNC_0(VAR_4->handle);
        VAR_4->handle = ((void*)0);
    }
    if (VAR_5 != 0)
    {
        VAR_4->error = VAR_2;
        return VAR_0;
    }
    return VAR_1;
}
