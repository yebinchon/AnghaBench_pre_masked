
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mz_zip_file ;
struct TYPE_2__ {int local_file_info; } ;
typedef TYPE_1__ mz_zip ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;

int32_t FUNC_1(void *VAR_2, mz_zip_file **VAR_3)
{
    mz_zip *VAR_4 = (mz_zip *)VAR_2;
    if (VAR_4 == ((void*)0) || FUNC_0(VAR_2) != VAR_0)
        return VAR_1;
    *VAR_3 = &VAR_4->local_file_info;
    return VAR_0;
}
