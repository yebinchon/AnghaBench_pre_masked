
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* num_of_file; void* pos_in_zip_directory; } ;
typedef TYPE_1__ unz_file_pos ;
typedef scalar_t__ unzFile ;
typedef void* uint32_t ;
struct TYPE_5__ {scalar_t__ entry_index; } ;
typedef TYPE_2__ mz_compat ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

int FUNC_1(unzFile VAR_2, unz_file_pos *VAR_3)
{
    mz_compat *VAR_4 = (mz_compat *)VAR_2;
    int32_t VAR_5 = 0;

    if (VAR_4 == ((void*)0) || VAR_3 == ((void*)0))
        return VAR_1;

    VAR_5 = FUNC_0(VAR_2);
    if (VAR_5 < 0)
        return VAR_5;

    VAR_3->pos_in_zip_directory = (uint32_t)VAR_5;
    VAR_3->num_of_file = (uint32_t)VAR_4->entry_index;
    return VAR_0;
}
