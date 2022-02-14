
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* file_info; } ;
typedef TYPE_2__ mz_zip_reader ;
typedef int int32_t ;
struct TYPE_4__ {scalar_t__ uncompressed_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;

int32_t FUNC_1(void *VAR_3)
{
    mz_zip_reader *VAR_4 = (mz_zip_reader *)VAR_3;

    if (FUNC_0(VAR_4) != VAR_1)
        return VAR_2;
    if (VAR_4->file_info == ((void*)0))
        return VAR_2;
    if (VAR_4->file_info->uncompressed_size > VAR_0)
        return VAR_2;


    return (int32_t)VAR_4->file_info->uncompressed_size;
}
