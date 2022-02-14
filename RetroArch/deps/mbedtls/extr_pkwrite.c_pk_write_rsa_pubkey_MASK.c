
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int N; int E; } ;
typedef TYPE_1__ mbedtls_rsa_context ;


 int FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned char**,unsigned char*,size_t) ;
 int FUNC_2 (unsigned char**,unsigned char*,int *) ;
 int FUNC_3 (unsigned char**,unsigned char*,int) ;

__attribute__((used)) static int FUNC_4( unsigned char **VAR_2, unsigned char *VAR_3,
                                  mbedtls_rsa_context *VAR_4 )
{
    int VAR_5;
    size_t VAR_6 = 0;

    FUNC_0( VAR_6, FUNC_2( VAR_2, VAR_3, &VAR_4->E ) );
    FUNC_0( VAR_6, FUNC_2( VAR_2, VAR_3, &VAR_4->N ) );

    FUNC_0( VAR_6, FUNC_1( VAR_2, VAR_3, VAR_6 ) );
    FUNC_0( VAR_6, FUNC_3( VAR_2, VAR_3, VAR_0 |
                                                 VAR_1 ) );

    return( (int) VAR_6 );
}
