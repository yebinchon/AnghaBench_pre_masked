
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int Z; int Y; int X; } ;
typedef TYPE_1__ mbedtls_ecp_point ;
struct TYPE_7__ {int P; } ;
typedef TYPE_2__ mbedtls_ecp_group ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,unsigned char const*,size_t) ;
 size_t FUNC_4 (int *) ;

int FUNC_5( const mbedtls_ecp_group *VAR_2, mbedtls_ecp_point *VAR_3,
                           const unsigned char *VAR_4, size_t VAR_5 )
{
    int VAR_6;
    size_t VAR_7;

    if( VAR_5 < 1 )
        return( VAR_0 );

    if( VAR_4[0] == 0x00 )
    {
        if( VAR_5 == 1 )
            return( FUNC_1( VAR_3 ) );
        else
            return( VAR_0 );
    }

    VAR_7 = FUNC_4( &VAR_2->P );

    if( VAR_4[0] != 0x04 )
        return( VAR_1 );

    if( VAR_5 != 2 * VAR_7 + 1 )
        return( VAR_0 );

    FUNC_0( FUNC_3( &VAR_3->X, VAR_4 + 1, VAR_7 ) );
    FUNC_0( FUNC_3( &VAR_3->Y, VAR_4 + 1 + VAR_7, VAR_7 ) );
    FUNC_0( FUNC_2( &VAR_3->Z, 1 ) );

cleanup:
    return( VAR_6 );
}
