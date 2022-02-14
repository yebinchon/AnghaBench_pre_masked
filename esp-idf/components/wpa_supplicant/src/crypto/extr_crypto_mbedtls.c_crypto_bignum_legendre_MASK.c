
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_bignum {int dummy; } ;
typedef int mbedtls_mpi ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int const*) ;
 int FUNC_3 (int *,int const*,int *,int const*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int const*,int) ;

int FUNC_8(const struct crypto_bignum *VAR_0,
                           const struct crypto_bignum *VAR_1)
{
    mbedtls_mpi VAR_2, VAR_3;
    int VAR_4 = -2, VAR_5;

    FUNC_5(&VAR_2);
    FUNC_5(&VAR_3);


    FUNC_0(FUNC_7(&VAR_2, (const mbedtls_mpi *) VAR_1, 1));
    FUNC_0(FUNC_6(&VAR_2, 1));
    FUNC_0(FUNC_3(&VAR_3, (const mbedtls_mpi *) VAR_0, &VAR_2, (const mbedtls_mpi *) VAR_1, ((void*)0)));

    if (FUNC_1(&VAR_3, 1) == 0) {
        VAR_4 = 1;
    } else if (FUNC_1(&VAR_3, 0) == 0




            || FUNC_2(&VAR_3, (const mbedtls_mpi *)VAR_1) == 0) {
        VAR_4 = 0;
    } else {
        VAR_4 = -1;
    }

cleanup:
    FUNC_4(&VAR_3);
    FUNC_4(&VAR_2);
    return VAR_4;
}
