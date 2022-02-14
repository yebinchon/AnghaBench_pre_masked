
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void mz_zip ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (void*,int ,int) ;

void *FUNC_2(void **VAR_0)
{
    mz_zip *VAR_1 = ((void*)0);

    VAR_1 = (mz_zip *)FUNC_0(sizeof(mz_zip));
    if (VAR_1 != ((void*)0))
        FUNC_1(VAR_1, 0, sizeof(mz_zip));
    if (VAR_0 != ((void*)0))
        *VAR_0 = VAR_1;

    return VAR_1;
}
