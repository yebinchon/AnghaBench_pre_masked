
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int mbedtls_x509_crt ;
typedef scalar_t__ mbedtls_time_t ;
struct TYPE_9__ {scalar_t__ ciphersuite; scalar_t__ compression; scalar_t__ id_len; int * peer_cert; int verify_result; int master; int id; } ;
typedef TYPE_3__ mbedtls_ssl_session ;
struct TYPE_8__ {int len; int * p; } ;
struct TYPE_7__ {scalar_t__ ciphersuite; scalar_t__ compression; scalar_t__ id_len; int verify_result; int master; int id; } ;
struct TYPE_10__ {TYPE_2__ peer_cert; TYPE_1__ session; scalar_t__ timestamp; struct TYPE_10__* next; } ;
typedef TYPE_4__ mbedtls_ssl_cache_entry ;
struct TYPE_11__ {int timeout; int mutex; TYPE_4__* chain; } ;
typedef TYPE_5__ mbedtls_ssl_cache_context ;


 int * FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,int ) ;
 scalar_t__ FUNC_7 (int ,int ,scalar_t__) ;
 int FUNC_8 (int ,int ,int) ;

int FUNC_9( void *VAR_0, mbedtls_ssl_session *VAR_1 )
{
    int VAR_2 = 1;



    mbedtls_ssl_cache_context *VAR_3 = (mbedtls_ssl_cache_context *) VAR_0;
    mbedtls_ssl_cache_entry *VAR_4, *VAR_5;






    VAR_4 = VAR_3->chain;
    VAR_5 = ((void*)0);

    while( VAR_4 != ((void*)0) )
    {
        VAR_5 = VAR_4;
        VAR_4 = VAR_4->next;







        if( VAR_1->ciphersuite != VAR_5->session.ciphersuite ||
            VAR_1->compression != VAR_5->session.compression ||
            VAR_1->id_len != VAR_5->session.id_len )
            continue;

        if( FUNC_7( VAR_1->id, VAR_5->session.id,
                    VAR_5->session.id_len ) != 0 )
            continue;

        FUNC_8( VAR_1->master, VAR_5->session.master, 48 );

        VAR_1->verify_result = VAR_5->session.verify_result;
        VAR_2 = 0;
        goto exit;
    }

exit:





    return( VAR_2 );
}
