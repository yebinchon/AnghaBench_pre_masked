
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_sha256_context ;
typedef int crypto_hash_sha256_state ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;

int
FUNC_3(crypto_hash_sha256_state *VAR_0)
{
    mbedtls_sha256_context VAR_1;
    FUNC_0(&VAR_1);
    int VAR_2 = FUNC_1(&VAR_1, 0);
    if (VAR_2 != 0) {
        return VAR_2;
    }
    FUNC_2(VAR_0, &VAR_1);
    return 0;
}
