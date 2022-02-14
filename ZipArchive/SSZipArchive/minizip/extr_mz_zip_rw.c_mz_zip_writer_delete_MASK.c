
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cert_data_size; struct TYPE_4__* cert_data; } ;
typedef TYPE_1__ mz_zip_writer ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(void **VAR_0)
{
    mz_zip_writer *VAR_1 = ((void*)0);
    if (VAR_0 == ((void*)0))
        return;
    VAR_1 = (mz_zip_writer *)*VAR_0;
    if (VAR_1 != ((void*)0))
    {
        FUNC_1(VAR_1);

        if (VAR_1->cert_data != ((void*)0))
            FUNC_0(VAR_1->cert_data);

        VAR_1->cert_data = ((void*)0);
        VAR_1->cert_data_size = 0;

        FUNC_0(VAR_1);
    }
    *VAR_0 = ((void*)0);
}
