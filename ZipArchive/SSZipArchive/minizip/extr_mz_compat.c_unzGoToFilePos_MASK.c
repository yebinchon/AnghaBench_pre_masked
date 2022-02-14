
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int num_of_file; int pos_in_zip_directory; } ;
typedef TYPE_1__ unz_file_pos ;
typedef scalar_t__ unzFile ;
struct TYPE_6__ {int num_of_file; int pos_in_zip_directory; } ;
typedef TYPE_2__ unz64_file_pos ;
typedef int mz_compat ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,TYPE_2__*) ;

int FUNC_1(unzFile VAR_1, unz_file_pos *VAR_2)
{
    mz_compat *VAR_3 = (mz_compat *)VAR_1;
    unz64_file_pos VAR_4;

    if (VAR_3 == ((void*)0) || VAR_2 == ((void*)0))
        return VAR_0;

    VAR_4 = VAR_2->pos_in_zip_directory;
    VAR_4 = VAR_2->num_of_file;

    return FUNC_0(VAR_1, &VAR_4);
}
