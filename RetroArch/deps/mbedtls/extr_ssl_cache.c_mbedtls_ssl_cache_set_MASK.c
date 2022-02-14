
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


typedef int mbedtls_x509_buf ;
typedef scalar_t__ mbedtls_time_t ;
struct TYPE_13__ {TYPE_2__* peer_cert; int id; } ;
typedef TYPE_3__ mbedtls_ssl_session ;
struct TYPE_17__ {int * peer_cert; int id_len; int id; } ;
struct TYPE_16__ {int len; TYPE_7__* p; } ;
struct TYPE_14__ {scalar_t__ timestamp; TYPE_7__ session; TYPE_6__ peer_cert; struct TYPE_14__* next; } ;
typedef TYPE_4__ mbedtls_ssl_cache_entry ;
struct TYPE_15__ {int timeout; int max_entries; int mutex; TYPE_4__* chain; } ;
typedef TYPE_5__ mbedtls_ssl_cache_context ;
struct TYPE_11__ {int len; TYPE_3__ const* p; } ;
struct TYPE_12__ {TYPE_1__ raw; } ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_7__*,TYPE_3__ const*,int) ;
 int FUNC_6 (TYPE_6__*,int ,int) ;
 scalar_t__ FUNC_7 (int *) ;

int FUNC_8( void *VAR_0, const mbedtls_ssl_session *VAR_1 )
{
    int VAR_2 = 1;




    mbedtls_ssl_cache_context *VAR_3 = (mbedtls_ssl_cache_context *) VAR_0;
    mbedtls_ssl_cache_entry *VAR_4, *VAR_5;
    int VAR_6 = 0;






    VAR_4 = VAR_3->chain;
    VAR_5 = ((void*)0);

    while( VAR_4 != ((void*)0) )
    {
        VAR_6++;
        if( FUNC_4( VAR_1->id, VAR_4->session.id, VAR_4->session.id_len ) == 0 )
            break;
        VAR_5 = VAR_4;
        VAR_4 = VAR_4->next;
    }

    if( VAR_4 == ((void*)0) )
    {
        if( VAR_6 >= VAR_3->max_entries )
        {
            if( VAR_3->chain == ((void*)0) )
            {
                VAR_2 = 1;
                goto exit;
            }

            VAR_4 = VAR_3->chain;
            VAR_3->chain = VAR_4->next;
            VAR_4->next = ((void*)0);
            VAR_5->next = VAR_4;
        }

        else
        {



            VAR_4 = FUNC_0( 1, sizeof(mbedtls_ssl_cache_entry) );
            if( VAR_4 == ((void*)0) )
            {
                VAR_2 = 1;
                goto exit;
            }

            if( VAR_5 == ((void*)0) )
                VAR_3->chain = VAR_4;
            else
                VAR_5->next = VAR_4;
        }




    }

    FUNC_5( &VAR_4->session, VAR_1, sizeof( mbedtls_ssl_session ) );
    VAR_2 = 0;

exit:





    return( VAR_2 );
}
