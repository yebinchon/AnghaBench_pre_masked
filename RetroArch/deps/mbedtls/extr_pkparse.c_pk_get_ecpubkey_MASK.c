
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Q; int grp; } ;
typedef TYPE_1__ mbedtls_ecp_keypair ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_2( unsigned char **VAR_0, const unsigned char *VAR_1,
                            mbedtls_ecp_keypair *VAR_2 )
{
    int VAR_3;

    if( ( VAR_3 = FUNC_1( &VAR_2->grp, &VAR_2->Q,
                    (const unsigned char *) *VAR_0, VAR_1 - *VAR_0 ) ) == 0 )
    {
        VAR_3 = FUNC_0( &VAR_2->grp, &VAR_2->Q );
    }




    *VAR_0 = (unsigned char *) VAR_1;

    return( VAR_3 );
}
