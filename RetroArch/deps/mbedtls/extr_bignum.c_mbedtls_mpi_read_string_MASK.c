
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t mbedtls_mpi_uint ;
struct TYPE_13__ {int s; size_t* p; } ;
typedef TYPE_1__ mbedtls_mpi ;


 size_t FUNC_0 (size_t) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,size_t) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,size_t) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*,size_t) ;
 int FUNC_9 (size_t*,int,char const) ;
 size_t FUNC_10 (char const*) ;

int FUNC_11( mbedtls_mpi *VAR_3, int VAR_4, const char *VAR_5 )
{
    int VAR_6;
    size_t VAR_7, VAR_8, VAR_9, VAR_10;
    mbedtls_mpi_uint VAR_11;
    mbedtls_mpi VAR_12;

    if( VAR_4 < 2 || VAR_4 > 16 )
        return( VAR_0 );

    FUNC_5( &VAR_12 );

    VAR_9 = FUNC_10( VAR_5 );

    if( VAR_4 == 16 )
    {
        if( VAR_9 > VAR_1 >> 2 )
            return( VAR_0 );

        VAR_10 = FUNC_0( VAR_9 << 2 );

        FUNC_1( FUNC_4( VAR_3, VAR_10 ) );
        FUNC_1( FUNC_6( VAR_3, 0 ) );

        for( VAR_7 = VAR_9, VAR_8 = 0; VAR_7 > 0; VAR_7--, VAR_8++ )
        {
            if( VAR_7 == 1 && VAR_5[VAR_7 - 1] == '-' )
            {
                VAR_3->s = -1;
                break;
            }

            FUNC_1( FUNC_9( &VAR_11, VAR_4, VAR_5[VAR_7 - 1] ) );
            VAR_3->p[VAR_8 / ( 2 * VAR_2 )] |= VAR_11 << ( ( VAR_8 % ( 2 * VAR_2 ) ) << 2 );
        }
    }
    else
    {
        FUNC_1( FUNC_6( VAR_3, 0 ) );

        for( VAR_7 = 0; VAR_7 < VAR_9; VAR_7++ )
        {
            if( VAR_7 == 0 && VAR_5[VAR_7] == '-' )
            {
                VAR_3->s = -1;
                continue;
            }

            FUNC_1( FUNC_9( &VAR_11, VAR_4, VAR_5[VAR_7] ) );
            FUNC_1( FUNC_7( &VAR_12, VAR_3, VAR_4 ) );

            if( VAR_3->s == 1 )
            {
                FUNC_1( FUNC_2( VAR_3, &VAR_12, VAR_11 ) );
            }
            else
            {
                FUNC_1( FUNC_8( VAR_3, &VAR_12, VAR_11 ) );
            }
        }
    }

cleanup:

    FUNC_3( &VAR_12 );

    return( VAR_6 );
}
