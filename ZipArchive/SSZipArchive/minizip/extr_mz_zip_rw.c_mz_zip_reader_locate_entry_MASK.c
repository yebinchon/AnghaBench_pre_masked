
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int * file_info; int zip_handle; } ;
typedef TYPE_1__ mz_zip_reader ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int **) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char const*,int ) ;
 int FUNC_3 (void*) ;

int32_t FUNC_4(void *VAR_1, const char *VAR_2, uint8_t VAR_3)
{
    mz_zip_reader *VAR_4 = (mz_zip_reader *)VAR_1;
    int32_t VAR_5 = VAR_0;

    if (FUNC_1(VAR_4->zip_handle) == VAR_0)
        FUNC_3(VAR_1);

    VAR_5 = FUNC_2(VAR_4->zip_handle, VAR_2, VAR_3);

    VAR_4->file_info = ((void*)0);
    if (VAR_5 == VAR_0)
        VAR_5 = FUNC_0(VAR_4->zip_handle, &VAR_4->file_info);

    return VAR_5;
}
