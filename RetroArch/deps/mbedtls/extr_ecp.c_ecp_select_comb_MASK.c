
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Y; int X; } ;
typedef TYPE_1__ mbedtls_ecp_point ;
typedef int mbedtls_ecp_group ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int const*,TYPE_1__*,unsigned char) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static int FUNC_3( const mbedtls_ecp_group *VAR_0, mbedtls_ecp_point *VAR_1,
                            const mbedtls_ecp_point VAR_2[], unsigned char VAR_3,
                            unsigned char VAR_4 )
{
    int VAR_5;
    unsigned char VAR_6, VAR_7;


    VAR_6 = ( VAR_4 & 0x7Fu ) >> 1;


    for( VAR_7 = 0; VAR_7 < VAR_3; VAR_7++ )
    {
        FUNC_0( FUNC_2( &VAR_1->X, &VAR_2[VAR_7].X, VAR_7 == VAR_6 ) );
        FUNC_0( FUNC_2( &VAR_1->Y, &VAR_2[VAR_7].Y, VAR_7 == VAR_6 ) );
    }


    FUNC_0( FUNC_1( VAR_0, VAR_1, VAR_4 >> 7 ) );

cleanup:
    return( VAR_5 );
}
