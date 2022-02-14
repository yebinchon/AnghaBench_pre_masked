
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ unzFile ;
struct TYPE_4__ {scalar_t__ uncompressed_size; } ;
typedef TYPE_1__ mz_zip_file ;
struct TYPE_5__ {scalar_t__ total_out; int handle; } ;
typedef TYPE_2__ mz_compat ;
typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__**) ;

int FUNC_1(unzFile VAR_2)
{
    mz_compat *VAR_3 = (mz_compat *)VAR_2;
    mz_zip_file *VAR_4 = ((void*)0);
    int32_t VAR_5 = VAR_0;

    if (VAR_3 == ((void*)0))
        return VAR_1;
    VAR_5 = FUNC_0(VAR_3->handle, &VAR_4);
    if (VAR_5 != VAR_0)
        return VAR_5;
    if (VAR_3->total_out == (int64_t)VAR_4->uncompressed_size)
        return 1;
    return 0;
}
