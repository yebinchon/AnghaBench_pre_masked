
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_bignum {int dummy; } ;
typedef int mbedtls_mpi ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;

struct crypto_bignum *FUNC_2(void)
{
    mbedtls_mpi *VAR_0 = FUNC_1(sizeof(mbedtls_mpi));
    if (VAR_0 == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_0(VAR_0);

    return (struct crypto_bignum *)VAR_0;
}
