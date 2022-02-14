
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_sha256_context ;
typedef int crypto_hash_sha256_state ;


 int FUNC_0 (int *,unsigned char*) ;
 int FUNC_1 (int *,int *) ;

int
FUNC_2(crypto_hash_sha256_state *VAR_0, unsigned char *VAR_1)
{
    mbedtls_sha256_context VAR_2;
    FUNC_1(&VAR_2, VAR_0);
    return FUNC_0(&VAR_2, VAR_1);
}
