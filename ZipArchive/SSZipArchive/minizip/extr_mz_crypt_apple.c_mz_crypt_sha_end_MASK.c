
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ algorithm; int error; int ctx256; int ctx1; int initialized; } ;
typedef TYPE_1__ mz_crypt_sha ;
typedef scalar_t__ int32_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

int32_t FUNC_2(void *VAR_7, uint8_t *VAR_8, int32_t VAR_9)
{
    mz_crypt_sha *VAR_10 = (mz_crypt_sha *)VAR_7;

    if (VAR_10 == ((void*)0) || VAR_8 == ((void*)0) || !VAR_10->initialized)
        return VAR_6;

    if (VAR_10->algorithm == VAR_2)
    {
        if (VAR_9 < VAR_3)
            return VAR_0;
        VAR_10->error = FUNC_0(VAR_8, &VAR_10->ctx1);
    }
    else
    {
        if (VAR_9 < VAR_4)
            return VAR_0;
        VAR_10->error = FUNC_1(VAR_8, &VAR_10->ctx256);
    }

    if (!VAR_10->error)
        return VAR_1;

    return VAR_5;
}
