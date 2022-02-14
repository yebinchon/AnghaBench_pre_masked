
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zip_handle; scalar_t__ cd_zipped; scalar_t__ cd_verified; } ;
typedef TYPE_1__ mz_zip_reader ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,void*,int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int) ;

int32_t FUNC_5(void *VAR_2, void *VAR_3)
{
    mz_zip_reader *VAR_4 = (mz_zip_reader *)VAR_2;
    int32_t VAR_5 = VAR_0;

    VAR_4->cd_verified = 0;
    VAR_4->cd_zipped = 0;

    FUNC_0(&VAR_4->zip_handle);
    FUNC_4(VAR_4->zip_handle, 1);

    VAR_5 = FUNC_1(VAR_4->zip_handle, VAR_3, VAR_1);

    if (VAR_5 != VAR_0)
    {
        FUNC_2(VAR_2);
        return VAR_5;
    }

    FUNC_3(VAR_4);
    return VAR_0;
}
