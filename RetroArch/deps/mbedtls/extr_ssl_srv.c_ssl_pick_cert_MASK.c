
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {TYPE_6__* cert; int key; struct TYPE_10__* next; } ;
typedef TYPE_3__ mbedtls_ssl_key_cert ;
struct TYPE_11__ {scalar_t__ minor_ver; TYPE_2__* handshake; TYPE_1__* conf; } ;
typedef TYPE_4__ mbedtls_ssl_context ;
typedef int mbedtls_ssl_ciphersuite_t ;
typedef scalar_t__ mbedtls_pk_type_t ;
struct TYPE_12__ {scalar_t__ sig_md; } ;
struct TYPE_9__ {TYPE_3__* key_cert; int curves; TYPE_3__* sni_key_cert; } ;
struct TYPE_8__ {TYPE_3__* key_cert; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*,TYPE_6__*) ;
 int FUNC_1 (int,char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_6__*,int const*,int ,int *) ;
 scalar_t__ FUNC_4 (int const*) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6( mbedtls_ssl_context *VAR_5,
                          const mbedtls_ssl_ciphersuite_t * VAR_6 )
{
    mbedtls_ssl_key_cert *VAR_7, *VAR_8, *VAR_9 = ((void*)0);
    mbedtls_pk_type_t VAR_10 =
        FUNC_4( VAR_6 );
    uint32_t VAR_11;






        VAR_8 = VAR_5->conf->key_cert;

    if( VAR_10 == VAR_2 )
        return( 0 );

    FUNC_1( 3, ( "ciphersuite requires certificate" ) );

    if( VAR_8 == ((void*)0) )
    {
        FUNC_1( 3, ( "server has no certificate" ) );
        return( -1 );
    }

    for( VAR_7 = VAR_8; VAR_7 != ((void*)0); VAR_7 = VAR_7->next )
    {
        FUNC_0( 3, "candidate certificate chain, certificate",
                          VAR_7->cert );

        if( ! FUNC_2( VAR_7->key, VAR_10 ) )
        {
            FUNC_1( 3, ( "certificate mismatch: key type" ) );
            continue;
        }
        if( FUNC_3( VAR_7->cert, VAR_6,
                                  VAR_3, &VAR_11 ) != 0 )
        {
            FUNC_1( 3, ( "certificate mismatch: "
                                "(extended) key usage extension" ) );
            continue;
        }
        if( VAR_5->minor_ver < VAR_4 &&
            VAR_7->cert->sig_md != VAR_0 )
        {
            if( VAR_9 == ((void*)0) )
                VAR_9 = VAR_7;
            {
                FUNC_1( 3, ( "certificate not preferred: "
                                    "sha-2 with pre-TLS 1.2 client" ) );
            continue;
            }
        }


        break;
    }

    if( VAR_7 == ((void*)0) )
        VAR_7 = VAR_9;


    if( VAR_7 != ((void*)0) )
    {
        VAR_5->handshake->key_cert = VAR_7;
        FUNC_0( 3, "selected certificate chain, certificate",
                          VAR_5->handshake->key_cert->cert );
        return( 0 );
    }

    return( -1 );
}
