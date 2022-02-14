
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ mbedtls_time_t ;
struct TYPE_9__ {int ctx; } ;
typedef TYPE_1__ mbedtls_ssl_ticket_key ;
struct TYPE_10__ {scalar_t__ ticket_lifetime; int mutex; int * f_rng; } ;
typedef TYPE_2__ mbedtls_ssl_ticket_context ;
struct TYPE_11__ {scalar_t__ start; } ;
typedef TYPE_3__ mbedtls_ssl_session ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,unsigned char*,int,unsigned char*,int,unsigned char*,size_t,unsigned char*,size_t*,unsigned char*,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*,unsigned char*,size_t) ;
 TYPE_1__* FUNC_5 (TYPE_2__*,unsigned char*) ;
 int FUNC_6 (TYPE_2__*) ;

int FUNC_7( void *VAR_6,
                              mbedtls_ssl_session *VAR_7,
                              unsigned char *VAR_8,
                              size_t VAR_9 )
{
    int VAR_10;
    mbedtls_ssl_ticket_context *VAR_11 = VAR_6;
    mbedtls_ssl_ticket_key *VAR_12;
    unsigned char *VAR_13 = VAR_8;
    unsigned char *VAR_14 = VAR_8 + 4;
    unsigned char *VAR_15 = VAR_14 + 12;
    unsigned char *VAR_16 = VAR_15 + 2;
    unsigned char *VAR_17;
    size_t VAR_18, VAR_19;

    if( VAR_11 == ((void*)0) || VAR_11->f_rng == ((void*)0) )
        return( VAR_1 );


    if( VAR_9 < 4 + 12 + 2 + 16 )
        return( VAR_1 );






    if( ( VAR_10 = FUNC_6( VAR_11 ) ) != 0 )
        goto cleanup;

    VAR_18 = ( VAR_15[0] << 8 ) | VAR_15[1];
    VAR_17 = VAR_16 + VAR_18;

    if( VAR_9 != 4 + 12 + 2 + VAR_18 + 16 )
    {
        VAR_10 = VAR_1;
        goto cleanup;
    }


    if( ( VAR_12 = FUNC_5( VAR_11, VAR_13 ) ) == ((void*)0) )
    {


        VAR_10 = VAR_4;
        goto cleanup;
    }


    if( ( VAR_10 = FUNC_0( &VAR_12->ctx, VAR_14, 12,
                    VAR_13, 4 + 12 + 2, VAR_16, VAR_18,
                    VAR_16, &VAR_19, VAR_17, 16 ) ) != 0 )
    {
        if( VAR_10 == VAR_0 )
            VAR_10 = VAR_3;

        goto cleanup;
    }
    if( VAR_19 != VAR_18 )
    {
        VAR_10 = VAR_2;
        goto cleanup;
    }


    if( ( VAR_10 = FUNC_4( VAR_7, VAR_16, VAR_19 ) ) != 0 )
        goto cleanup;
cleanup:





    return( VAR_10 );
}
