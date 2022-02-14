
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_bignum {int dummy; } ;
typedef int mbedtls_mpi ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int ,int) ;

int FUNC_3(const struct crypto_bignum *VAR_0,
                         u8 *VAR_1, size_t VAR_2, size_t VAR_3)
{
    int VAR_4, VAR_5;

    if (VAR_3 > VAR_2) {
        return -1;
    }

    VAR_4 = FUNC_0((mbedtls_mpi *) VAR_0);

    if ((size_t) VAR_4 > VAR_2) {
        return -1;
    }
    if (VAR_3 > (size_t) VAR_4) {
        VAR_5 = VAR_3 - VAR_4;
    } else {
        VAR_5 = 0;
    }

    FUNC_2(VAR_1, 0, VAR_5);
    FUNC_1((mbedtls_mpi *) VAR_0, VAR_1 + VAR_5, FUNC_0((mbedtls_mpi *)VAR_0) );

    return VAR_4 + VAR_5;
}
