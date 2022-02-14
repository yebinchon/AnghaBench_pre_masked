
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int error; int handle; } ;
typedef TYPE_1__ mz_stream_posix ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (void*,int,size_t,int ) ;

int32_t FUNC_2(void *VAR_2, void *VAR_3, int32_t VAR_4)
{
    mz_stream_posix *VAR_5 = (mz_stream_posix*)VAR_2;
    int32_t VAR_6 = (int32_t)FUNC_1(VAR_3, 1, (size_t)VAR_4, VAR_5->handle);
    if (VAR_6 < VAR_4 && FUNC_0(VAR_5->handle))
    {
        VAR_5->error = VAR_1;
        return VAR_0;
    }
    return VAR_6;
}
