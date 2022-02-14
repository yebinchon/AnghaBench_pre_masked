
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int psk_len; int psk_identity_len; int key_cert; struct TYPE_5__* psk_identity; struct TYPE_5__* psk; int dhm_G; int dhm_P; } ;
typedef TYPE_1__ mbedtls_ssl_config ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ) ;

void FUNC_4( mbedtls_ssl_config *VAR_0 )
{
    FUNC_2( VAR_0, sizeof( mbedtls_ssl_config ) );
}
