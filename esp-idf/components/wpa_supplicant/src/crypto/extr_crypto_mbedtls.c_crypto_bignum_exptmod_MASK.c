
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_bignum {int dummy; } ;
typedef int mbedtls_mpi ;


 scalar_t__ FUNC_0 (int *,int const*,int const*,int const*,int *) ;

int FUNC_1(const struct crypto_bignum *VAR_0,
                          const struct crypto_bignum *VAR_1,
                          const struct crypto_bignum *VAR_2,
                          struct crypto_bignum *VAR_3)
{
    return FUNC_0((mbedtls_mpi *) VAR_3, (const mbedtls_mpi *) VAR_0, (const mbedtls_mpi *) VAR_1, (const mbedtls_mpi *) VAR_2, ((void*)0)) ? -1 : 0;

}
