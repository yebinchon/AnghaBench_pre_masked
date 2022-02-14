
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cd_start_pos; scalar_t__ cd_size; scalar_t__ cd_current_pos; } ;
typedef TYPE_1__ mz_zip ;
typedef scalar_t__ int64_t ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (void*) ;

int32_t FUNC_1(void *VAR_1, int64_t VAR_2)
{
    mz_zip *VAR_3 = (mz_zip *)VAR_1;

    if (VAR_3 == ((void*)0))
        return VAR_0;

    if (VAR_2 < VAR_3->cd_start_pos || VAR_2 > VAR_3->cd_start_pos + VAR_3->cd_size)
        return VAR_0;

    VAR_3->cd_current_pos = VAR_2;

    return FUNC_0(VAR_1);
}
