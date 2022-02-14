
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Q; int grp; } ;
typedef TYPE_1__ mbedtls_ecp_keypair ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ,size_t*,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_2( unsigned char **VAR_3, unsigned char *VAR_4,
                                 mbedtls_ecp_keypair *VAR_5 )
{
    int VAR_6;
    size_t VAR_7 = 0;
    unsigned char VAR_8[VAR_0];

    if( ( VAR_6 = FUNC_0( &VAR_5->grp, &VAR_5->Q,
                                        VAR_1,
                                        &VAR_7, VAR_8, sizeof( VAR_8 ) ) ) != 0 )
    {
        return( VAR_6 );
    }

    if( *VAR_3 < VAR_4 || (size_t)( *VAR_3 - VAR_4 ) < VAR_7 )
        return( VAR_2 );

    *VAR_3 -= VAR_7;
    FUNC_1( *VAR_3, VAR_8, VAR_7 );

    return( (int) VAR_7 );
}
