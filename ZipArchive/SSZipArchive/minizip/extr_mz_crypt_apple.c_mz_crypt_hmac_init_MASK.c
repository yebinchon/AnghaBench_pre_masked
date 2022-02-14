
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ algorithm; int ctx; } ;
typedef TYPE_1__ mz_crypt_hmac ;
typedef int int32_t ;
typedef int CCHmacAlgorithm ;


 int FUNC_0 (int *,int ,void const*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (void*) ;

int32_t FUNC_2(void *VAR_6, const void *VAR_7, int32_t VAR_8)
{
    mz_crypt_hmac *VAR_9 = (mz_crypt_hmac *)VAR_6;
    CCHmacAlgorithm VAR_10 = 0;

    if (VAR_9 == ((void*)0) || VAR_7 == ((void*)0))
        return VAR_3;

    FUNC_1(VAR_6);

    if (VAR_9->algorithm == VAR_0)
        VAR_10 = VAR_4;
    else if (VAR_9->algorithm == VAR_1)
        VAR_10 = VAR_5;
    else
        return VAR_3;

    FUNC_0(&VAR_9->ctx, VAR_10, VAR_7, VAR_8);
    return VAR_2;
}
