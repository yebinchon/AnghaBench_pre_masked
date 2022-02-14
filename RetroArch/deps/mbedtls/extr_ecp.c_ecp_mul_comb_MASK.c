
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int mbedtls_mpi ;
struct TYPE_20__ {int X; int Y; } ;
typedef TYPE_2__ mbedtls_ecp_point ;
struct TYPE_19__ {int X; int Y; } ;
struct TYPE_21__ {int nbits; unsigned char T_size; int const N; TYPE_2__* T; TYPE_1__ G; } ;
typedef TYPE_3__ mbedtls_ecp_group ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char*,size_t,unsigned char,int *) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,TYPE_2__*,unsigned char,unsigned char*,size_t,int (*) (void*,unsigned char*,size_t),void*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*,TYPE_2__ const*,unsigned char,size_t) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_6 (unsigned char,int) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int const*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int const*,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int *,int) ;
 int FUNC_15 (int *,int const*,int const*) ;

__attribute__((used)) static int FUNC_16( mbedtls_ecp_group *VAR_4, mbedtls_ecp_point *VAR_5,
                         const mbedtls_mpi *VAR_6, const mbedtls_ecp_point *VAR_7,
                         int (*VAR_8)(void *, unsigned char *, size_t),
                         void *VAR_9 )
{
    int VAR_10;
    unsigned char VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    size_t VAR_16;
    unsigned char VAR_17[VAR_0 + 1];
    mbedtls_ecp_point *VAR_18;
    mbedtls_mpi VAR_19, VAR_20;

    FUNC_13( &VAR_19 );
    FUNC_13( &VAR_20 );


    if( FUNC_12( &VAR_4->N, 0 ) != 1 )
        return( VAR_3 );






    VAR_11 = VAR_4->nbits >= 384 ? 5 : 4;
    VAR_13 = 0;






    if( VAR_11 > VAR_1 )
        VAR_11 = VAR_1;
    if( VAR_11 >= VAR_4->nbits )
        VAR_11 = 2;


    VAR_14 = 1U << ( VAR_11 - 1 );
    VAR_16 = ( VAR_4->nbits + VAR_11 - 1 ) / VAR_11;





    VAR_18 = VAR_13 ? VAR_4->T : ((void*)0);

    if( VAR_18 == ((void*)0) )
    {
        VAR_18 = (mbedtls_ecp_point*)FUNC_6( VAR_14, sizeof( mbedtls_ecp_point ) );
        if( VAR_18 == ((void*)0) )
        {
            VAR_10 = VAR_2;
            goto cleanup;
        }

        FUNC_0( FUNC_4( VAR_4, VAR_18, VAR_7, VAR_11, VAR_16 ) );

        if( VAR_13 )
        {
            VAR_4->T = VAR_18;
            VAR_4->T_size = VAR_14;
        }
    }





    VAR_12 = ( FUNC_12( VAR_6, 0 ) == 1 );
    FUNC_0( FUNC_10( &VAR_19, VAR_6 ) );
    FUNC_0( FUNC_15( &VAR_20, &VAR_4->N, VAR_6 ) );
    FUNC_0( FUNC_14( &VAR_19, &VAR_20, ! VAR_12 ) );




    FUNC_1( VAR_17, VAR_16, VAR_11, &VAR_19 );
    FUNC_0( FUNC_2( VAR_4, VAR_5, VAR_18, VAR_14, VAR_17, VAR_16, VAR_8, VAR_9 ) );




    FUNC_0( FUNC_5( VAR_4, VAR_5, ! VAR_12 ) );
    FUNC_0( FUNC_3( VAR_4, VAR_5 ) );

cleanup:

    if( VAR_18 != ((void*)0) && ! VAR_13 )
    {
        for( VAR_15 = 0; VAR_15 < VAR_14; VAR_15++ )
            FUNC_7( &VAR_18[VAR_15] );
        FUNC_8( VAR_18 );
    }

    FUNC_11( &VAR_19 );
    FUNC_11( &VAR_20 );

    if( VAR_10 != 0 )
        FUNC_7( VAR_5 );

    return( VAR_10 );
}
