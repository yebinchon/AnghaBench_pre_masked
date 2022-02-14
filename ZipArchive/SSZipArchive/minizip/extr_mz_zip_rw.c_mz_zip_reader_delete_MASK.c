
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mz_zip_reader ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(void **VAR_0)
{
    mz_zip_reader *VAR_1 = ((void*)0);
    if (VAR_0 == ((void*)0))
        return;
    VAR_1 = (mz_zip_reader *)*VAR_0;
    if (VAR_1 != ((void*)0))
    {
        FUNC_1(VAR_1);
        FUNC_0(VAR_1);
    }
    *VAR_0 = ((void*)0);
}
