
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int error; int handle; } ;
typedef TYPE_1__ mz_stream_posix ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

int64_t FUNC_1(void *VAR_2)
{
    mz_stream_posix *VAR_3 = (mz_stream_posix*)VAR_2;
    int64_t VAR_4 = FUNC_0(VAR_3->handle);
    if (VAR_4 == -1)
    {
        VAR_3->error = VAR_1;
        return VAR_0;
    }
    return VAR_4;
}
