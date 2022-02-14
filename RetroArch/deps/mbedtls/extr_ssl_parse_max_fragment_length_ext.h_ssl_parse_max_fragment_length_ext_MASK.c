
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* session_negotiate; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
struct TYPE_5__ {unsigned char mfl_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 unsigned char const VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int FUNC_2( mbedtls_ssl_context *VAR_4,
                                              const unsigned char *VAR_5,
                                              size_t VAR_6 )
{
    if( VAR_6 != 1 || VAR_5[0] >= VAR_3 )
    {
        FUNC_0( 1, ( "bad client hello message" ) );
        FUNC_1( VAR_4, VAR_1,
                                        VAR_2 );
        return( VAR_0 );
    }

    VAR_4->session_negotiate->mfl_code = VAR_5[0];

    return( 0 );
}
