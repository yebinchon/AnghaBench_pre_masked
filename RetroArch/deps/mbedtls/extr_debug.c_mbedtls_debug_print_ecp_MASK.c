
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int str ;
struct TYPE_8__ {TYPE_1__* conf; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
struct TYPE_9__ {int Y; int X; } ;
typedef TYPE_3__ mbedtls_ecp_point ;
struct TYPE_7__ {int * f_dbg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__ const*,int,char const*,int,char*,int *) ;
 int FUNC_1 (char*,int,char*,char const*) ;

void FUNC_2( const mbedtls_ssl_context *VAR_2, int VAR_3,
                      const char *VAR_4, int VAR_5,
                      const char *VAR_6, const mbedtls_ecp_point *VAR_7 )
{
    char VAR_8[VAR_0];

    if( VAR_2->conf == ((void*)0) || VAR_2->conf->f_dbg == ((void*)0) || VAR_3 > VAR_1 )
        return;

    FUNC_1( VAR_8, sizeof( VAR_8 ), "%s(X)", VAR_6 );
    FUNC_0( VAR_2, VAR_3, VAR_4, VAR_5, VAR_8, &VAR_7->X );

    FUNC_1( VAR_8, sizeof( VAR_8 ), "%s(Y)", VAR_6 );
    FUNC_0( VAR_2, VAR_3, VAR_4, VAR_5, VAR_8, &VAR_7->Y );
}
