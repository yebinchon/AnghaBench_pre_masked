
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; } ;
struct TYPE_5__ {TYPE_1__ grp; } ;
typedef TYPE_2__ mbedtls_ecp_keypair ;


 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (unsigned char**,unsigned char*,char const*,size_t) ;
 int FUNC_2 (int ,char const**,size_t*) ;

__attribute__((used)) static int FUNC_3( unsigned char **VAR_0, unsigned char *VAR_1,
                                mbedtls_ecp_keypair *VAR_2 )
{
    int VAR_3;
    size_t VAR_4 = 0;
    const char *VAR_5;
    size_t VAR_6;

    if( ( VAR_3 = FUNC_2( VAR_2->grp.id, &VAR_5, &VAR_6 ) ) != 0 )
        return( VAR_3 );

    FUNC_0( VAR_4, FUNC_1( VAR_0, VAR_1, VAR_5, VAR_6 ) );

    return( (int) VAR_4 );
}
