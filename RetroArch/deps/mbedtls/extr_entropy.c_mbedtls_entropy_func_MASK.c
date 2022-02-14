
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int mbedtls_sha512_context ;
typedef int mbedtls_sha256_context ;
struct TYPE_6__ {int initial_entropy_run; int source_count; unsigned char accumulator; int mutex; TYPE_1__* source; } ;
typedef TYPE_2__ mbedtls_entropy_context ;
struct TYPE_5__ {scalar_t__ size; scalar_t__ threshold; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (unsigned char*,int,unsigned char*,int ) ;
 int FUNC_5 (unsigned char*,unsigned char*) ;
 int FUNC_6 (unsigned char*,int ) ;
 int FUNC_7 (unsigned char*,unsigned char*,int) ;
 int FUNC_8 (unsigned char*,int,unsigned char*,int ) ;
 int FUNC_9 (unsigned char*,unsigned char*) ;
 int FUNC_10 (unsigned char*,int ) ;
 int FUNC_11 (unsigned char*,unsigned char*,int) ;
 int FUNC_12 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_13 (unsigned char*,int ,int) ;

int FUNC_14( void *VAR_4, unsigned char *VAR_5, size_t VAR_6 )
{
    int VAR_7, VAR_8 = 0, VAR_9, VAR_10;
    mbedtls_entropy_context *VAR_11 = (mbedtls_entropy_context *) VAR_4;
    unsigned char VAR_12[VAR_1];

    if( VAR_6 > VAR_1 )
        return( VAR_2 );
    do
    {
        if( VAR_8++ > VAR_0 )
        {
            VAR_7 = VAR_2;
            goto exit;
        }

        if( ( VAR_7 = FUNC_0( VAR_11 ) ) != 0 )
            goto exit;

        VAR_10 = 1;
        for( VAR_9 = 0; VAR_9 < VAR_11->source_count; VAR_9++ )
            if( VAR_11->source[VAR_9].size < VAR_11->source[VAR_9].threshold )
                VAR_10 = 0;
    }
    while( ! VAR_10 );

    FUNC_13( VAR_12, 0, VAR_1 );
    FUNC_5( &VAR_11->accumulator, VAR_12 );




    FUNC_13( &VAR_11->accumulator, 0, sizeof( mbedtls_sha256_context ) );
    FUNC_6( &VAR_11->accumulator, 0 );
    FUNC_7( &VAR_11->accumulator, VAR_12, VAR_1 );




    FUNC_4( VAR_12, VAR_1, VAR_12, 0 );


    for( VAR_9 = 0; VAR_9 < VAR_11->source_count; VAR_9++ )
        VAR_11->source[VAR_9].size = 0;

    FUNC_12( VAR_5, VAR_12, VAR_6 );

    VAR_7 = 0;

exit:





    return( VAR_7 );
}
