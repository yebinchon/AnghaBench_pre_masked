
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int zip_handle; } ;
typedef TYPE_1__ mz_zip_writer ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,void*,scalar_t__) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static int32_t FUNC_3(void *VAR_1, void *VAR_2, int32_t VAR_3)
{
    mz_zip_writer *VAR_4 = (mz_zip_writer *)VAR_1;
    int32_t VAR_5 = VAR_0;

    FUNC_0(&VAR_4->zip_handle);
    VAR_5 = FUNC_1(VAR_4->zip_handle, VAR_2, VAR_3);

    if (VAR_5 != VAR_0)
    {
        FUNC_2(VAR_1);
        return VAR_5;
    }

    return VAR_0;
}
