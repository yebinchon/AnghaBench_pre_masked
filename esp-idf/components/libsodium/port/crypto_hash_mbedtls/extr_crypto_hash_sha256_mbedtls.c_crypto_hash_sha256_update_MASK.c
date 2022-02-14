
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_sha256_context ;
typedef int crypto_hash_sha256_state ;


 int FUNC_0 (int *,unsigned char const*,unsigned long long) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;

int
FUNC_3(crypto_hash_sha256_state *VAR_0,
                          const unsigned char *VAR_1, unsigned long long VAR_2)
{
    mbedtls_sha256_context VAR_3;
    FUNC_1(&VAR_3, VAR_0);
    int VAR_4 = FUNC_0(&VAR_3, VAR_1, VAR_2);
    if (VAR_4 != 0) {
        return VAR_4;
    }
    FUNC_2(VAR_0, &VAR_3);
    return 0;
}
