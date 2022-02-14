
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ error; int crypt; } ;
typedef TYPE_1__ mz_crypt_aes ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (int ,int *,int ,int *,int ,size_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

int32_t FUNC_1(void *VAR_4, uint8_t *VAR_5, int32_t VAR_6)
{
    mz_crypt_aes *VAR_7 = (mz_crypt_aes *)VAR_4;
    size_t VAR_8 = 0;

    if (VAR_7 == ((void*)0) || VAR_5 == ((void*)0))
        return VAR_2;
    if (VAR_6 != VAR_0)
        return VAR_2;

    VAR_7->error = FUNC_0(VAR_7->crypt, VAR_5, VAR_6, VAR_5, VAR_6, &VAR_8);

    if (VAR_7->error != VAR_3)
        return VAR_1;

    return VAR_6;
}
