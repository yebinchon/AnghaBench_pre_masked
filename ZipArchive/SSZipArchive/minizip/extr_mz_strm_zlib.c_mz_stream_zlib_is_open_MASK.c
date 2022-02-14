
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int initialized; } ;
typedef TYPE_1__ mz_stream_zlib ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;

int32_t FUNC_0(void *VAR_2)
{
    mz_stream_zlib *VAR_3 = (mz_stream_zlib *)VAR_2;
    if (VAR_3->initialized != 1)
        return VAR_1;
    return VAR_0;
}
