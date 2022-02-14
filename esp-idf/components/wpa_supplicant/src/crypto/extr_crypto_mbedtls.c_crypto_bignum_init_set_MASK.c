
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_bignum {int dummy; } ;
typedef int mbedtls_mpi ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int const*,size_t) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;

struct crypto_bignum *FUNC_4(const u8 *VAR_0, size_t VAR_1)
{
    int VAR_2 = 0;
    mbedtls_mpi *VAR_3 = FUNC_3(sizeof(mbedtls_mpi));
    if (VAR_3 == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_0(FUNC_1(VAR_3, VAR_0, VAR_1));
    return (struct crypto_bignum *) VAR_3;

cleanup:
    FUNC_2(VAR_3);
    return ((void*)0);
}
