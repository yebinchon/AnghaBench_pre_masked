
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {size_t len; int p; } ;
struct TYPE_15__ {struct TYPE_15__* next; TYPE_3__ raw; } ;
typedef TYPE_4__ mbedtls_x509_crt ;
struct TYPE_16__ {scalar_t__ client_auth; scalar_t__ minor_ver; int out_msglen; unsigned char* out_msg; int state; int out_msgtype; TYPE_2__* conf; TYPE_1__* transform_negotiate; } ;
typedef TYPE_5__ mbedtls_ssl_context ;
struct TYPE_17__ {scalar_t__ key_exchange; } ;
typedef TYPE_6__ mbedtls_ssl_ciphersuite_t ;
struct TYPE_13__ {scalar_t__ endpoint; } ;
struct TYPE_12__ {TYPE_6__* ciphersuite_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 int FUNC_0 (int,char*,TYPE_4__*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*,int) ;
 unsigned char VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_4__* FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (unsigned char*,int ,size_t) ;

int FUNC_6( mbedtls_ssl_context *VAR_16 )
{
    int VAR_17 = VAR_2;
    size_t VAR_18, VAR_19;
    const mbedtls_x509_crt *VAR_20;
    const mbedtls_ssl_ciphersuite_t *VAR_21 = VAR_16->transform_negotiate->ciphersuite_info;

    FUNC_1( 2, ( "=> write certificate" ) );

    if( VAR_21->key_exchange == VAR_6 ||
        VAR_21->key_exchange == VAR_3 ||
        VAR_21->key_exchange == VAR_4 ||
        VAR_21->key_exchange == VAR_5 )
    {
        FUNC_1( 2, ( "<= skip write certificate" ) );
        VAR_16->state++;
        return( 0 );
    }
    FUNC_0( 3, "own certificate", FUNC_3( VAR_16 ) );
    VAR_18 = 7;
    VAR_20 = FUNC_3( VAR_16 );

    while( VAR_20 != ((void*)0) )
    {
        VAR_19 = VAR_20->raw.len;
        if( VAR_19 > VAR_12 - 3 - VAR_18 )
        {
            FUNC_1( 1, ( "certificate too large, %d > %d",
                           VAR_18 + 3 + VAR_19, VAR_12 ) );
            return( VAR_1 );
        }

        VAR_16->out_msg[VAR_18 ] = (unsigned char)( VAR_19 >> 16 );
        VAR_16->out_msg[VAR_18 + 1] = (unsigned char)( VAR_19 >> 8 );
        VAR_16->out_msg[VAR_18 + 2] = (unsigned char)( VAR_19 );

        VAR_18 += 3; FUNC_5( VAR_16->out_msg + VAR_18, VAR_20->raw.p, VAR_19 );
        VAR_18 += VAR_19; VAR_20 = VAR_20->next;
    }

    VAR_16->out_msg[4] = (unsigned char)( ( VAR_18 - 7 ) >> 16 );
    VAR_16->out_msg[5] = (unsigned char)( ( VAR_18 - 7 ) >> 8 );
    VAR_16->out_msg[6] = (unsigned char)( ( VAR_18 - 7 ) );

    VAR_16->out_msglen = VAR_18;
    VAR_16->out_msgtype = VAR_15;
    VAR_16->out_msg[0] = VAR_9;





    VAR_16->state++;

    if( ( VAR_17 = FUNC_4( VAR_16 ) ) != 0 )
    {
        FUNC_2( 1, "mbedtls_ssl_write_record", VAR_17 );
        return( VAR_17 );
    }

    FUNC_1( 2, ( "<= write certificate" ) );

    return( VAR_17 );
}
