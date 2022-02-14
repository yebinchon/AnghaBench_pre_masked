
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ctx; } ;
typedef TYPE_1__ mz_crypt_hmac ;
typedef int int32_t ;


 int FUNC_0 (int *,void const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

int32_t FUNC_1(void *VAR_2, const void *VAR_3, int32_t VAR_4)
{
    mz_crypt_hmac *VAR_5 = (mz_crypt_hmac *)VAR_2;

    if (VAR_5 == ((void*)0) || VAR_3 == ((void*)0))
        return VAR_1;

    FUNC_0(&VAR_5->ctx, VAR_3, VAR_4);
    return VAR_0;
}
