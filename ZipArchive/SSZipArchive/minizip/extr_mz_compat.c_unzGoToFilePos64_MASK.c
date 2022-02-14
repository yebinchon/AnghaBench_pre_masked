
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ unzFile ;
struct TYPE_4__ {int num_of_file; int pos_in_zip_directory; } ;
typedef TYPE_1__ unz64_file_pos ;
struct TYPE_5__ {int entry_index; int handle; } ;
typedef TYPE_2__ mz_compat ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

int FUNC_1(unzFile VAR_2, const unz64_file_pos *VAR_3)
{
    mz_compat *VAR_4 = (mz_compat *)VAR_2;
    int32_t VAR_5 = VAR_0;

    if (VAR_4 == ((void*)0) || VAR_3 == ((void*)0))
        return VAR_1;

    VAR_5 = FUNC_0(VAR_4->handle, VAR_3->pos_in_zip_directory);
    if (VAR_5 == VAR_0)
        VAR_4->entry_index = VAR_3->num_of_file;
    return VAR_5;
}
