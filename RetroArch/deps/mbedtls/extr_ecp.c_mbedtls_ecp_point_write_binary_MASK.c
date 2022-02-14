
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int X; int Y; int Z; } ;
typedef TYPE_1__ mbedtls_ecp_point ;
struct TYPE_6__ {int P; } ;
typedef TYPE_2__ mbedtls_ecp_group ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned char*,size_t) ;

int FUNC_5( const mbedtls_ecp_group *VAR_4, const mbedtls_ecp_point *VAR_5,
                            int VAR_6, size_t *VAR_7,
                            unsigned char *VAR_8, size_t VAR_9 )
{
    int VAR_10 = 0;
    size_t VAR_11;

    if( VAR_6 != VAR_1 &&
        VAR_6 != VAR_0 )
        return( VAR_2 );




    if( FUNC_1( &VAR_5->Z, 0 ) == 0 )
    {
        if( VAR_9 < 1 )
            return( VAR_3 );

        VAR_8[0] = 0x00;
        *VAR_7 = 1;

        return( 0 );
    }

    VAR_11 = FUNC_3( &VAR_4->P );

    if( VAR_6 == VAR_1 )
    {
        *VAR_7 = 2 * VAR_11 + 1;

        if( VAR_9 < *VAR_7 )
            return( VAR_3 );

        VAR_8[0] = 0x04;
        FUNC_0( FUNC_4( &VAR_5->X, VAR_8 + 1, VAR_11 ) );
        FUNC_0( FUNC_4( &VAR_5->Y, VAR_8 + 1 + VAR_11, VAR_11 ) );
    }
    else if( VAR_6 == VAR_0 )
    {
        *VAR_7 = VAR_11 + 1;

        if( VAR_9 < *VAR_7 )
            return( VAR_3 );

        VAR_8[0] = 0x02 + FUNC_2( &VAR_5->Y, 0 );
        FUNC_0( FUNC_4( &VAR_5->X, VAR_8 + 1, VAR_11 ) );
    }

cleanup:
    return( VAR_10 );
}
