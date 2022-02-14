
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int md_info; } ;
struct TYPE_7__ {scalar_t__ prediction_resistance; scalar_t__ reseed_counter; scalar_t__ reseed_interval; int V; TYPE_2__ md_ctx; int * f_entropy; } ;
typedef TYPE_1__ mbedtls_hmac_drbg_context ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*,unsigned char const*,size_t) ;
 int FUNC_1 (TYPE_1__*,unsigned char const*,size_t) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,size_t) ;
 int FUNC_6 (unsigned char*,int ,size_t) ;

int FUNC_7( void *VAR_5,
                               unsigned char *VAR_6, size_t VAR_7,
                               const unsigned char *VAR_8, size_t VAR_9 )
{
    int VAR_10;
    mbedtls_hmac_drbg_context *VAR_11 = (mbedtls_hmac_drbg_context *) VAR_5;
    size_t VAR_12 = FUNC_2( VAR_11->md_ctx.md_info );
    size_t VAR_13 = VAR_7;
    unsigned char *VAR_14 = VAR_6;


    if( VAR_7 > VAR_3 )
        return( VAR_1 );


    if( VAR_9 > VAR_2 )
        return( VAR_0 );


    if( VAR_11->f_entropy != ((void*)0) &&
        ( VAR_11->prediction_resistance == VAR_4 ||
          VAR_11->reseed_counter > VAR_11->reseed_interval ) )
    {
        if( ( VAR_10 = FUNC_0( VAR_11, VAR_8, VAR_9 ) ) != 0 )
            return( VAR_10 );

        VAR_9 = 0;
    }


    if( VAR_8 != ((void*)0) && VAR_9 != 0 )
        FUNC_1( VAR_11, VAR_8, VAR_9 );


    while( VAR_13 != 0 )
    {
        size_t VAR_15 = VAR_13 > VAR_12 ? VAR_12 : VAR_13;

        FUNC_4( &VAR_11->md_ctx );
        FUNC_5( &VAR_11->md_ctx, VAR_11->V, VAR_12 );
        FUNC_3( &VAR_11->md_ctx, VAR_11->V );

        FUNC_6( VAR_14, VAR_11->V, VAR_15 );
        VAR_14 += VAR_15;
        VAR_13 -= VAR_15;
    }


    FUNC_1( VAR_11, VAR_8, VAR_9 );


    VAR_11->reseed_counter++;


    return( 0 );
}
