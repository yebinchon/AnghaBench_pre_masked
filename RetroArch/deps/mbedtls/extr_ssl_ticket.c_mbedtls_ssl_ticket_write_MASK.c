
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int ctx; int name; } ;
typedef TYPE_1__ mbedtls_ssl_ticket_key ;
struct TYPE_5__ {int (* f_rng ) (int ,unsigned char*,int) ;size_t active; int mutex; int p_rng; int ticket_lifetime; TYPE_1__* keys; } ;
typedef TYPE_2__ mbedtls_ssl_ticket_context ;
typedef int mbedtls_ssl_session ;
typedef unsigned char clear_len ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,unsigned char*,int,unsigned char*,int,unsigned char*,size_t,unsigned char*,size_t*,unsigned char*,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int FUNC_4 (int const*,unsigned char*,int,size_t*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,unsigned char*,int) ;

int FUNC_7( void *VAR_4,
                              const mbedtls_ssl_session *VAR_5,
                              unsigned char *VAR_6,
                              const unsigned char *VAR_7,
                              size_t *VAR_8,
                              uint32_t *VAR_9 )
{
    int VAR_10;
    mbedtls_ssl_ticket_context *VAR_11 = VAR_4;
    mbedtls_ssl_ticket_key *VAR_12;
    unsigned char *VAR_13 = VAR_6;
    unsigned char *VAR_14 = VAR_6 + 4;
    unsigned char *VAR_15 = VAR_14 + 12;
    unsigned char *VAR_16 = VAR_15 + 2;
    unsigned char *VAR_17;
    size_t VAR_18, VAR_19;

    *VAR_8 = 0;

    if( VAR_11 == ((void*)0) || VAR_11->f_rng == ((void*)0) )
        return( VAR_0 );



    if( VAR_7 - VAR_6 < 4 + 12 + 2 + 16 )
        return( VAR_1 );






    if( ( VAR_10 = FUNC_5( VAR_11 ) ) != 0 )
        goto cleanup;

    VAR_12 = &VAR_11->keys[VAR_11->active];

    *VAR_9 = VAR_11->ticket_lifetime;

    FUNC_3( VAR_13, VAR_12->name, 4 );

    if( ( VAR_10 = VAR_11->f_rng( VAR_11->p_rng, VAR_14, 12 ) ) != 0 )
        goto cleanup;


    if( ( VAR_10 = FUNC_4( VAR_5,
                                  VAR_16, VAR_7 - VAR_16, &VAR_18 ) ) != 0 ||
        (unsigned long) VAR_18 > 65535 )
    {
         goto cleanup;
    }
    VAR_15[0] = ( VAR_18 >> 8 ) & 0xff;
    VAR_15[1] = ( VAR_18 ) & 0xff;


    VAR_17 = VAR_16 + VAR_18;
    if( ( VAR_10 = FUNC_0( &VAR_12->ctx,
                    VAR_14, 12, VAR_13, 4 + 12 + 2,
                    VAR_16, VAR_18, VAR_16, &VAR_19, VAR_17, 16 ) ) != 0 )
    {
        goto cleanup;
    }
    if( VAR_19 != VAR_18 )
    {
        VAR_10 = VAR_2;
        goto cleanup;
    }

    *VAR_8 = 4 + 12 + 2 + 16 + VAR_19;

cleanup:





    return( VAR_10 );
}
