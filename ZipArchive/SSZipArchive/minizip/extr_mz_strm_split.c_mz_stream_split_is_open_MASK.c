
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_open; } ;
typedef TYPE_1__ mz_stream_split ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;

int32_t FUNC_0(void *VAR_2)
{
    mz_stream_split *VAR_3 = (mz_stream_split *)VAR_2;
    if (VAR_3->is_open != 1)
        return VAR_1;
    return VAR_0;
}
