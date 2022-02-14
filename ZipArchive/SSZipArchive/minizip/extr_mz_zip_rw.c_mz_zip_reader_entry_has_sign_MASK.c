
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* file_info; int zip_handle; } ;
typedef TYPE_2__ mz_zip_reader ;
typedef int int32_t ;
struct TYPE_3__ {int extrafield_size; int extrafield; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int *) ;

int32_t FUNC_2(void *VAR_3)
{
    mz_zip_reader *VAR_4 = (mz_zip_reader *)VAR_3;

    if (VAR_4 == ((void*)0) || FUNC_0(VAR_4->zip_handle) != VAR_0)
        return VAR_1;

    return FUNC_1(VAR_4->file_info->extrafield,
        VAR_4->file_info->extrafield_size, VAR_2, ((void*)0));
}
