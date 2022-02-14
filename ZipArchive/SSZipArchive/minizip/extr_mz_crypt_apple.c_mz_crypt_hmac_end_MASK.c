
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ algorithm; int ctx; } ;
typedef TYPE_1__ mz_crypt_hmac ;
typedef scalar_t__ int32_t ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

int32_t FUNC_1(void *VAR_6, uint8_t *VAR_7, int32_t VAR_8)
{
    mz_crypt_hmac *VAR_9 = (mz_crypt_hmac *)VAR_6;

    if (VAR_9 == ((void*)0) || VAR_7 == ((void*)0))
        return VAR_5;

    if (VAR_9->algorithm == VAR_1)
    {
        if (VAR_8 < VAR_2)
            return VAR_0;
        FUNC_0(&VAR_9->ctx, VAR_7);
    }
    else
    {
        if (VAR_8 < VAR_3)
            return VAR_0;
        FUNC_0(&VAR_9->ctx, VAR_7);
    }

    return VAR_4;
}
