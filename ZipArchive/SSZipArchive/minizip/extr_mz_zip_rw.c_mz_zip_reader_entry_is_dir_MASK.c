
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int zip_handle; } ;
typedef TYPE_1__ mz_zip_reader ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*) ;

int32_t FUNC_2(void *VAR_2)
{
    mz_zip_reader *VAR_3 = (mz_zip_reader *)VAR_2;
    if (FUNC_1(VAR_2) != VAR_0)
        return VAR_1;
    return FUNC_0(VAR_3->zip_handle);
}
