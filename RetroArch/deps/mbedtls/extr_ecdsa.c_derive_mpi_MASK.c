
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mbedtls_mpi ;
struct TYPE_3__ {int nbits; int N; } ;
typedef TYPE_1__ mbedtls_ecp_group ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned char const*,size_t) ;
 int FUNC_3 (int *,size_t) ;
 int FUNC_4 (int *,int *,int *) ;

__attribute__((used)) static int FUNC_5( const mbedtls_ecp_group *VAR_0, mbedtls_mpi *VAR_1,
                       const unsigned char *VAR_2, size_t VAR_3 )
{
    int VAR_4;
    size_t VAR_5 = ( VAR_0->nbits + 7 ) / 8;
    size_t VAR_6 = VAR_3 > VAR_5 ? VAR_5 : VAR_3;

    FUNC_0( FUNC_2( VAR_1, VAR_2, VAR_6 ) );
    if( VAR_6 * 8 > VAR_0->nbits )
        FUNC_0( FUNC_3( VAR_1, VAR_6 * 8 - VAR_0->nbits ) );


    if( FUNC_1( VAR_1, &VAR_0->N ) >= 0 )
        FUNC_0( FUNC_4( VAR_1, VAR_1, &VAR_0->N ) );

cleanup:
    return( VAR_4 );
}
