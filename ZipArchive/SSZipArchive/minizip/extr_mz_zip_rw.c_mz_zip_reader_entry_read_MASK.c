
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * hash; int zip_handle; } ;
typedef TYPE_1__ mz_zip_reader ;
typedef scalar_t__ int32_t ;


 int FUNC_0 (int *,void*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,void*,scalar_t__) ;

int32_t FUNC_2(void *VAR_0, void *VAR_1, int32_t VAR_2)
{
    mz_zip_reader *VAR_3 = (mz_zip_reader *)VAR_0;
    int32_t VAR_4 = 0;
    VAR_4 = FUNC_1(VAR_3->zip_handle, VAR_1, VAR_2);

    if ((VAR_4 > 0) && (VAR_3->hash != ((void*)0)))
        FUNC_0(VAR_3->hash, VAR_1, VAR_4);

    return VAR_4;
}
