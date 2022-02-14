
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ minor_ver; TYPE_2__* handshake; TYPE_1__* conf; } ;
typedef TYPE_3__ mbedtls_ssl_context ;
struct TYPE_16__ {scalar_t__ min_minor_ver; scalar_t__ max_minor_ver; int flags; scalar_t__ cipher; scalar_t__ key_exchange; int name; } ;
typedef TYPE_4__ mbedtls_ssl_ciphersuite_t ;
typedef scalar_t__ mbedtls_pk_type_t ;
struct TYPE_14__ {int cli_exts; int hash_algs; int ** curves; } ;
struct TYPE_13__ {scalar_t__ transport; scalar_t__ arc4_disabled; scalar_t__ psk_identity_len; scalar_t__ psk_len; int * psk_identity; int * psk; int * f_psk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 TYPE_4__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_4__ const*) ;
 scalar_t__ FUNC_3 (TYPE_4__ const*) ;
 scalar_t__ FUNC_4 (TYPE_4__ const*) ;
 scalar_t__ FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_3__*,TYPE_4__ const*) ;

__attribute__((used)) static int FUNC_7( mbedtls_ssl_context *VAR_10, int VAR_11,
                                  const mbedtls_ssl_ciphersuite_t **VAR_12 )
{
    const mbedtls_ssl_ciphersuite_t *VAR_13;






    VAR_13 = FUNC_1( VAR_11 );
    if( VAR_13 == ((void*)0) )
    {
        FUNC_0( 1, ( "should never happen" ) );
        return( VAR_2 );
    }

    FUNC_0( 3, ( "trying ciphersuite: %s", VAR_13->name ) );

    if( VAR_13->min_minor_ver > VAR_10->minor_ver ||
        VAR_13->max_minor_ver < VAR_10->minor_ver )
    {
        FUNC_0( 3, ( "ciphersuite mismatch: version" ) );
        return( 0 );
    }
    *VAR_12 = VAR_13;
    return( 0 );
}
