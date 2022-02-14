
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {size_t len; int p; } ;
struct TYPE_15__ {scalar_t__ version; struct TYPE_15__* next; TYPE_4__ subject_raw; } ;
typedef TYPE_5__ mbedtls_x509_crt ;
struct TYPE_16__ {unsigned char* out_msg; scalar_t__ minor_ver; int out_msglen; int out_msgtype; TYPE_3__* conf; TYPE_2__* handshake; int state; TYPE_1__* transform_negotiate; } ;
typedef TYPE_6__ mbedtls_ssl_context ;
struct TYPE_17__ {scalar_t__ key_exchange; } ;
typedef TYPE_7__ mbedtls_ssl_ciphersuite_t ;
struct TYPE_13__ {int authmode; int* sig_hashes; scalar_t__ cert_req_ca_list; TYPE_5__* ca_chain; } ;
struct TYPE_12__ {int sni_authmode; TYPE_5__* sni_ca_chain; } ;
struct TYPE_11__ {TYPE_7__* ciphersuite_info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int const VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 int FUNC_0 (int,char*,unsigned char*,size_t) ;
 int FUNC_1 (int,char*) ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 unsigned char VAR_15 ;
 unsigned char VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 unsigned char FUNC_2 (int const) ;
 scalar_t__ FUNC_3 (TYPE_6__*,unsigned char) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (unsigned char*,int ,size_t) ;

__attribute__((used)) static int FUNC_6( mbedtls_ssl_context *VAR_19 )
{
    int VAR_20 = VAR_0;
    const mbedtls_ssl_ciphersuite_t *VAR_21 =
        VAR_19->transform_negotiate->ciphersuite_info;
    size_t VAR_22, VAR_23;
    size_t VAR_24, VAR_25;
    unsigned char *VAR_26, *VAR_27;
    const unsigned char * const VAR_28 = VAR_19->out_msg + VAR_12;
    const mbedtls_x509_crt *VAR_29;
    int VAR_30;

    FUNC_1( 2, ( "=> write certificate request" ) );

    VAR_19->state++;






        VAR_30 = VAR_19->conf->authmode;

    if( VAR_21->key_exchange == VAR_4 ||
        VAR_21->key_exchange == VAR_5 ||
        VAR_21->key_exchange == VAR_1 ||
        VAR_21->key_exchange == VAR_2 ||
        VAR_21->key_exchange == VAR_3 ||
        VAR_30 == VAR_17 )
    {
        FUNC_1( 2, ( "<= skip write certificate request" ) );
        return( 0 );
    }
    VAR_26 = VAR_19->out_msg;
    VAR_27 = VAR_26 + 4;







    VAR_24 = 0;
    VAR_27[0] = (unsigned char) VAR_24++;
    VAR_27 += VAR_24;

    VAR_25 = 0;
    VAR_27 += 2;

    VAR_23 = 0;

    if( VAR_19->conf->cert_req_ca_list == VAR_7 )
    {





            VAR_29 = VAR_19->conf->ca_chain;

        while( VAR_29 != ((void*)0) && VAR_29->version != 0 )
        {
            VAR_22 = VAR_29->subject_raw.len;

            if( VAR_28 < VAR_27 ||
                (size_t)( VAR_28 - VAR_27 ) < VAR_22 ||
                (size_t)( VAR_28 - VAR_27 ) < 2 + VAR_22 )
            {
                FUNC_1( 1, ( "skipping CAs: buffer too short" ) );
                break;
            }

            *VAR_27++ = (unsigned char)( VAR_22 >> 8 );
            *VAR_27++ = (unsigned char)( VAR_22 );
            FUNC_5( VAR_27, VAR_29->subject_raw.p, VAR_22 );
            VAR_27 += VAR_22;

            FUNC_0( 3, "requested DN", VAR_27 - VAR_22, VAR_22 );

            VAR_23 += 2 + VAR_22;
            VAR_29 = VAR_29->next;
        }
    }

    VAR_19->out_msglen = VAR_27 - VAR_26;
    VAR_19->out_msgtype = VAR_14;
    VAR_19->out_msg[0] = VAR_11;
    VAR_19->out_msg[4 + VAR_24 + VAR_25] = (unsigned char)( VAR_23 >> 8 );
    VAR_19->out_msg[5 + VAR_24 + VAR_25] = (unsigned char)( VAR_23 );

    VAR_20 = FUNC_4( VAR_19 );

    FUNC_1( 2, ( "<= write certificate request" ) );

    return( VAR_20 );
}
