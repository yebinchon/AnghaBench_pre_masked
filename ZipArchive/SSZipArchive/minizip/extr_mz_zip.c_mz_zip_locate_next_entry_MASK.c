
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ (* mz_zip_locate_entry_cb ) (void*,void*,int *) ;
struct TYPE_2__ {int file_info; } ;
typedef TYPE_1__ mz_zip ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;

int32_t FUNC_1(void *VAR_1, void *VAR_2, mz_zip_locate_entry_cb VAR_3)
{
    mz_zip *VAR_4 = (mz_zip *)VAR_1;
    int32_t VAR_5 = VAR_0;
    int32_t VAR_6 = 0;


    VAR_5 = FUNC_0(VAR_1);
    while (VAR_5 == VAR_0)
    {
        VAR_6 = VAR_3(VAR_1, VAR_2, &VAR_4->file_info);
        if (VAR_6 == 0)
            return VAR_0;

        VAR_5 = FUNC_0(VAR_1);
    }

    return VAR_5;
}
