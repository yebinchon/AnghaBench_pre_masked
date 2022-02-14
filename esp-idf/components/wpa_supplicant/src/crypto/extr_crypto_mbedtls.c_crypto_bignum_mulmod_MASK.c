
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_bignum {int dummy; } ;
typedef int mbedtls_mpi ;


 int FUNC_0 (int *,int *,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int const*,int const*) ;

int FUNC_5(const struct crypto_bignum *VAR_0,
                         const struct crypto_bignum *VAR_1,
                         const struct crypto_bignum *VAR_2,
                         struct crypto_bignum *VAR_3)
{
    int VAR_4;
    VAR_4 = FUNC_0((mbedtls_mpi *) VAR_3, (mbedtls_mpi *) VAR_0, (mbedtls_mpi *) VAR_1, (mbedtls_mpi *) VAR_2);

    return VAR_4 ? -1 : 0;
}
