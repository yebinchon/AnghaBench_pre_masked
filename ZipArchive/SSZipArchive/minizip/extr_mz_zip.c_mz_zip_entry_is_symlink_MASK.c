
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* linkname; int version_madeby; int external_fa; } ;
struct TYPE_4__ {scalar_t__ entry_scanned; TYPE_1__ file_info; } ;
typedef TYPE_2__ mz_zip ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;

int32_t FUNC_1(void *VAR_3)
{
    mz_zip *VAR_4 = (mz_zip *)VAR_3;

    if (VAR_4 == ((void*)0))
        return VAR_2;
    if (VAR_4->entry_scanned == 0)
        return VAR_2;
    if (FUNC_0(VAR_4->file_info.external_fa, VAR_4->file_info.version_madeby) != VAR_1)
        return VAR_0;
    if (VAR_4->file_info.linkname == ((void*)0) || *VAR_4->file_info.linkname == 0)
        return VAR_0;

    return VAR_1;
}
