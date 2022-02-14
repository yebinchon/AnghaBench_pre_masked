
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cd_start_pos; int cd_current_pos; } ;
typedef TYPE_1__ mz_zip ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (void*) ;

int32_t FUNC_1(void *VAR_1)
{
    mz_zip *VAR_2 = (mz_zip *)VAR_1;

    if (VAR_2 == ((void*)0))
        return VAR_0;

    VAR_2->cd_current_pos = VAR_2->cd_start_pos;

    return FUNC_0(VAR_1);
}
