
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * zip_handle; } ;
typedef TYPE_1__ mz_zip_writer ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;

int32_t FUNC_0(void *VAR_2)
{
    mz_zip_writer *VAR_3 = (mz_zip_writer *)VAR_2;
    if (VAR_3 == ((void*)0))
        return VAR_1;
    if (VAR_3->zip_handle == ((void*)0))
        return VAR_1;
    return VAR_0;
}
