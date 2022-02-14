
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sni_authmode; scalar_t__ ecjpake_cache_len; int * ecjpake_cache; int ecjpake_ctx; int ecdh_ctx; int dhm_ctx; int hash_algs; int update_checksum; int fin_sha512; int fin_sha256; int fin_sha1; int fin_md5; } ;
typedef TYPE_1__ mbedtls_ssl_handshake_params ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_1__*,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_13( mbedtls_ssl_handshake_params *VAR_2 )
{
    FUNC_12( VAR_2, 0, sizeof( mbedtls_ssl_handshake_params ) );
    VAR_2->update_checksum = VAR_1;
}
