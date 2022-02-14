
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_1__ ;


typedef int mbedtls_mpi_uint ;
struct TYPE_17__ {int* p; } ;
typedef TYPE_1__ mbedtls_mpi ;


 size_t FUNC_0 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int) ;
 size_t FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,size_t,int (*) (void*,unsigned char*,size_t),void*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int (*) (void*,unsigned char*,size_t),void*) ;
 int FUNC_9 (int*,TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*,size_t,int) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,int (*) (void*,unsigned char*,size_t),void*) ;

int FUNC_14( mbedtls_mpi *VAR_4, size_t VAR_5, int VAR_6,
                   int (*VAR_7)(void *, unsigned char *, size_t),
                   void *VAR_8 )
{
    int VAR_9;
    size_t VAR_10, VAR_11;
    mbedtls_mpi_uint VAR_12;
    mbedtls_mpi VAR_13;

    if( VAR_5 < 3 || VAR_5 > VAR_2 )
        return( VAR_0 );

    FUNC_7( &VAR_13 );

    VAR_11 = FUNC_0( VAR_5 );

    FUNC_1( FUNC_5( VAR_4, VAR_11 * VAR_3, VAR_7, VAR_8 ) );

    VAR_10 = FUNC_3( VAR_4 );
    if( VAR_10 > VAR_5 ) FUNC_1( FUNC_11( VAR_4, VAR_10 - VAR_5 + 1 ) );

    FUNC_10( VAR_4, VAR_5-1, 1 );

    VAR_4->p[0] |= 1;

    if( VAR_6 == 0 )
    {
        while( ( VAR_9 = FUNC_8( VAR_4, VAR_7, VAR_8 ) ) != 0 )
        {
            if( VAR_9 != VAR_1 )
                goto cleanup;

            FUNC_1( FUNC_2( VAR_4, VAR_4, 2 ) );
        }
    }
    else
    {






        VAR_4->p[0] |= 2;

        FUNC_1( FUNC_9( &VAR_12, VAR_4, 3 ) );
        if( VAR_12 == 0 )
            FUNC_1( FUNC_2( VAR_4, VAR_4, 8 ) );
        else if( VAR_12 == 1 )
            FUNC_1( FUNC_2( VAR_4, VAR_4, 4 ) );


        FUNC_1( FUNC_4( &VAR_13, VAR_4 ) );
        FUNC_1( FUNC_11( &VAR_13, 1 ) );

        while( 1 )
        {




            if( ( VAR_9 = FUNC_12( VAR_4 ) ) == 0 &&
                ( VAR_9 = FUNC_12( &VAR_13 ) ) == 0 &&
                ( VAR_9 = FUNC_13( VAR_4, VAR_7, VAR_8 ) ) == 0 &&
                ( VAR_9 = FUNC_13( &VAR_13, VAR_7, VAR_8 ) ) == 0 )
            {
                break;
            }

            if( VAR_9 != VAR_1 )
                goto cleanup;






            FUNC_1( FUNC_2( VAR_4, VAR_4, 12 ) );
            FUNC_1( FUNC_2( &VAR_13, &VAR_13, 6 ) );
        }
    }

cleanup:

    FUNC_6( &VAR_13 );

    return( VAR_9 );
}
