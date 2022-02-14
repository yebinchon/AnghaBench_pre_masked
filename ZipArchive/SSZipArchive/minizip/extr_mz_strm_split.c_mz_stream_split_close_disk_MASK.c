
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int base; } ;
struct TYPE_4__ {TYPE_1__ stream; } ;
typedef TYPE_2__ mz_stream_split ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int32_t FUNC_3(void *VAR_1)
{
    mz_stream_split *VAR_2 = (mz_stream_split *)VAR_1;

    if (FUNC_1(VAR_2->stream.base) != VAR_0)
        return VAR_0;

    FUNC_2("Split - Close disk\n");
    return FUNC_0(VAR_2->stream.base);
}
