
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ error; int crypt; } ;
typedef TYPE_1__ mz_crypt_aes ;
typedef scalar_t__ int32_t ;


 scalar_t__ FUNC_0 (int ,int ,int ,void const*,scalar_t__,int *,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (void*) ;

int32_t FUNC_2(void *VAR_7, const void *VAR_8, int32_t VAR_9)
{
    mz_crypt_aes *VAR_10 = (mz_crypt_aes *)VAR_7;


    if (VAR_10 == ((void*)0) || VAR_8 == ((void*)0) || VAR_9 == 0)
        return VAR_2;

    FUNC_1(VAR_7);

    VAR_10->error = FUNC_0(VAR_4, VAR_3, VAR_5,
        VAR_8, VAR_9, ((void*)0), &VAR_10->crypt);

    if (VAR_10->error != VAR_6)
        return VAR_0;

    return VAR_1;
}
