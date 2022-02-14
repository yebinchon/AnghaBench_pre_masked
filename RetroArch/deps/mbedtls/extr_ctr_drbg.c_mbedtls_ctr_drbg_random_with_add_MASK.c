
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ reseed_counter; scalar_t__ reseed_interval; scalar_t__* counter; int aes_ctx; scalar_t__ prediction_resistance; } ;
typedef TYPE_1__ mbedtls_ctr_drbg_context ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_1 (TYPE_1__*,unsigned char*) ;
 int FUNC_2 (int *,int ,scalar_t__*,unsigned char*) ;
 int FUNC_3 (TYPE_1__*,unsigned char const*,size_t) ;
 int FUNC_4 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_5 (unsigned char*,int ,int) ;

int FUNC_6( void *VAR_7,
                              unsigned char *VAR_8, size_t VAR_9,
                              const unsigned char *VAR_10, size_t VAR_11 )
{
    int VAR_12 = 0;
    mbedtls_ctr_drbg_context *VAR_13 = (mbedtls_ctr_drbg_context *) VAR_7;
    unsigned char VAR_14[VAR_4];
    unsigned char *VAR_15 = VAR_8;
    unsigned char VAR_16[VAR_1];
    int VAR_17;
    size_t VAR_18;

    if( VAR_9 > VAR_3 )
        return( VAR_6 );

    if( VAR_11 > VAR_2 )
        return( VAR_5 );

    FUNC_5( VAR_14, 0, VAR_4 );

    if( VAR_13->reseed_counter > VAR_13->reseed_interval ||
        VAR_13->prediction_resistance )
    {
        if( ( VAR_12 = FUNC_3( VAR_13, VAR_10, VAR_11 ) ) != 0 )
            return( VAR_12 );

        VAR_11 = 0;
    }

    if( VAR_11 > 0 )
    {
        FUNC_0( VAR_14, VAR_10, VAR_11 );
        FUNC_1( VAR_13, VAR_14 );
    }

    while( VAR_9 > 0 )
    {



        for( VAR_17 = VAR_1; VAR_17 > 0; VAR_17-- )
            if( ++VAR_13->counter[VAR_17 - 1] != 0 )
                break;




        FUNC_2( &VAR_13->aes_ctx, VAR_0, VAR_13->counter, VAR_16 );

        VAR_18 = ( VAR_9 > VAR_1 ) ? VAR_1 :
                                                       VAR_9;



        FUNC_4( VAR_15, VAR_16, VAR_18 );
        VAR_15 += VAR_18;
        VAR_9 -= VAR_18;
    }

    FUNC_1( VAR_13, VAR_14 );

    VAR_13->reseed_counter++;

    return( 0 );
}
