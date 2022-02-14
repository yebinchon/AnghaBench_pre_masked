
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mz_zip_file ;
struct TYPE_2__ {int open_mode; int file_info; int entry_scanned; } ;
typedef TYPE_1__ mz_zip ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int32_t FUNC_0(void *VAR_3, mz_zip_file **VAR_4)
{
    mz_zip *VAR_5 = (mz_zip *)VAR_3;

    if (VAR_5 == ((void*)0))
        return VAR_2;

    if ((VAR_5->open_mode & VAR_1) == 0)
    {
        if (!VAR_5->entry_scanned)
            return VAR_2;
    }

    *VAR_4 = &VAR_5->file_info;
    return VAR_0;
}
