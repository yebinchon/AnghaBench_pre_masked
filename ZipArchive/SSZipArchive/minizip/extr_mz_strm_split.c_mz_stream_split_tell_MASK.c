
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int base; } ;
struct TYPE_4__ {TYPE_1__ stream; int number_disk; } ;
typedef TYPE_2__ mz_stream_split ;
typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (void*,int ) ;
 scalar_t__ FUNC_1 (int ) ;

int64_t FUNC_2(void *VAR_1)
{
    mz_stream_split *VAR_2 = (mz_stream_split *)VAR_1;
    int32_t VAR_3 = VAR_0;
    VAR_3 = FUNC_0(VAR_1, VAR_2->number_disk);
    if (VAR_3 != VAR_0)
        return VAR_3;
    return FUNC_1(VAR_2->stream.base);
}
