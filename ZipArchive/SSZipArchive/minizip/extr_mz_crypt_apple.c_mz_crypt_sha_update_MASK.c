
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ algorithm; int error; int ctx256; int ctx1; int initialized; } ;
typedef TYPE_1__ mz_crypt_sha ;
typedef int int32_t ;


 int FUNC_0 (int *,void const*,int ) ;
 int FUNC_1 (int *,void const*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

int32_t FUNC_2(void *VAR_3, const void *VAR_4, int32_t VAR_5)
{
    mz_crypt_sha *VAR_6 = (mz_crypt_sha *)VAR_3;

    if (VAR_6 == ((void*)0) || VAR_4 == ((void*)0) || !VAR_6->initialized)
        return VAR_2;

    if (VAR_6->algorithm == VAR_1)
        VAR_6->error = FUNC_0(&VAR_6->ctx1, VAR_4, VAR_5);
    else
        VAR_6->error = FUNC_1(&VAR_6->ctx256, VAR_4, VAR_5);

    if (!VAR_6->error)
        return VAR_0;

    return VAR_5;
}
