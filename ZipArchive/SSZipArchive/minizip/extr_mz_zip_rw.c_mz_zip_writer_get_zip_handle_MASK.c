
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* zip_handle; } ;
typedef TYPE_1__ mz_zip_writer ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int32_t FUNC_0(void *VAR_3, void **VAR_4)
{
    mz_zip_writer *VAR_5 = (mz_zip_writer *)VAR_3;
    if (VAR_4 == ((void*)0))
        return VAR_2;
    *VAR_4 = VAR_5->zip_handle;
    if (*VAR_4 == ((void*)0))
        return VAR_0;
    return VAR_1;
}
