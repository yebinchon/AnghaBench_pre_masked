
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * file_info; } ;
typedef TYPE_1__ mz_zip_reader ;
typedef int mz_zip_file ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;

int32_t FUNC_1(void *VAR_3, mz_zip_file **VAR_4)
{
    mz_zip_reader *VAR_5 = (mz_zip_reader *)VAR_3;
    int32_t VAR_6 = VAR_1;
    if (VAR_4 == ((void*)0) || FUNC_0(VAR_3) != VAR_1)
        return VAR_2;
    *VAR_4 = VAR_5->file_info;
    if (*VAR_4 == ((void*)0))
        return VAR_0;
    return VAR_6;
}
