
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int (* f_rng ) (void*,unsigned char*,size_t) ;TYPE_1__* keys; int ticket_lifetime; void* p_rng; } ;
typedef TYPE_2__ mbedtls_ssl_ticket_context ;
typedef int mbedtls_cipher_type_t ;
struct TYPE_10__ {scalar_t__ mode; int key_bitlen; } ;
typedef TYPE_3__ mbedtls_cipher_info_t ;
struct TYPE_8__ {int ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_3__ const*) ;
 int FUNC_2 (TYPE_2__*,int) ;

int FUNC_3( mbedtls_ssl_ticket_context *VAR_4,
    int (*VAR_5)(void *, unsigned char *, size_t), void *VAR_6,
    mbedtls_cipher_type_t VAR_7,
    uint32_t VAR_8 )
{
    int VAR_9;
    const mbedtls_cipher_info_t *VAR_10;

    VAR_4->f_rng = VAR_5;
    VAR_4->p_rng = VAR_6;

    VAR_4->ticket_lifetime = VAR_8;

    VAR_10 = FUNC_0( VAR_7);
    if( VAR_10 == ((void*)0) )
        return( VAR_1 );

    if( VAR_10->mode != VAR_3 &&
        VAR_10->mode != VAR_2 )
    {
        return( VAR_1 );
    }

    if( VAR_10->key_bitlen > 8 * VAR_0 )
        return( VAR_1 );

    if( ( VAR_9 = FUNC_1( &VAR_4->keys[0].ctx, VAR_10 ) ) != 0 ||
        ( VAR_9 = FUNC_1( &VAR_4->keys[1].ctx, VAR_10 ) ) != 0 )
    {
        return( VAR_9 );
    }

    if( ( VAR_9 = FUNC_2( VAR_4, 0 ) ) != 0 ||
        ( VAR_9 = FUNC_2( VAR_4, 1 ) ) != 0 )
    {
        return( VAR_9 );
    }

    return( 0 );
}
