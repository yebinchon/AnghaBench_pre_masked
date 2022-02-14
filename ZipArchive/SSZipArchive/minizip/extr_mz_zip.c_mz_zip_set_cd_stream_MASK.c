
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cd_start_pos; void* cd_stream; } ;
typedef TYPE_1__ mz_zip ;
typedef int int64_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;

int32_t FUNC_0(void *VAR_2, int64_t VAR_3, void *VAR_4)
{
    mz_zip *VAR_5 = (mz_zip *)VAR_2;
    if (VAR_5 == ((void*)0) || VAR_4 == ((void*)0))
        return VAR_1;
    VAR_5->cd_stream = VAR_4;
    VAR_5->cd_start_pos = VAR_3;
    return VAR_0;
}
