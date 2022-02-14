
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ algorithm; int initialized; int error; int ctx256; int ctx1; } ;
typedef TYPE_1__ mz_crypt_sha ;
typedef int int32_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (void*) ;

int32_t FUNC_3(void *VAR_5)
{
    mz_crypt_sha *VAR_6 = (mz_crypt_sha *)VAR_5;

    if (VAR_6 == ((void*)0))
        return VAR_4;

    FUNC_2(VAR_5);

    if (VAR_6->algorithm == VAR_1)
        VAR_6->error = FUNC_0(&VAR_6->ctx1);
    else if (VAR_6->algorithm == VAR_2)
        VAR_6->error = FUNC_1(&VAR_6->ctx256);
    else
        return VAR_4;

    if (!VAR_6->error)
        return VAR_0;

    VAR_6->initialized = 1;
    return VAR_3;
}
