
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * file_info; int zip_handle; int * pattern; } ;
typedef TYPE_1__ mz_zip_reader ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int **) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*,int ) ;
 int FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (void*) ;
 int VAR_2 ;

int32_t FUNC_6(void *VAR_3)
{
    mz_zip_reader *VAR_4 = (mz_zip_reader *)VAR_3;
    int32_t VAR_5 = VAR_0;

    if (FUNC_5(VAR_3) != VAR_0)
        return VAR_1;

    if (FUNC_1(VAR_4->zip_handle) == VAR_0)
        FUNC_4(VAR_3);

    if (VAR_4->pattern == ((void*)0))
        VAR_5 = FUNC_2(VAR_4->zip_handle);
    else
        VAR_5 = FUNC_3(VAR_4->zip_handle, VAR_4, VAR_2);

    VAR_4->file_info = ((void*)0);
    if (VAR_5 == VAR_0)
        VAR_5 = FUNC_0(VAR_4->zip_handle, &VAR_4->file_info);

    return VAR_5;
}
