
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int str ;
struct TYPE_6__ {TYPE_1__* conf; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
struct TYPE_5__ {int * f_dbg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__ const*,int,char const*,int,char*) ;
 int VAR_2 ;
 int FUNC_1 (char*,int,char*,char const*,int,int) ;

void FUNC_2( const mbedtls_ssl_context *VAR_3, int VAR_4,
                      const char *VAR_5, int VAR_6,
                      const char *VAR_7, int VAR_8 )
{
    char VAR_9[VAR_0];

    if( VAR_3->conf == ((void*)0) || VAR_3->conf->f_dbg == ((void*)0) || VAR_4 > VAR_2 )
        return;






    if( VAR_8 == VAR_1 )
        return;

    FUNC_1( VAR_9, sizeof( VAR_9 ), "%s() returned %d (-0x%04x)\n",
              VAR_7, VAR_8, -VAR_8 );

    FUNC_0( VAR_3, VAR_4, VAR_5, VAR_6, VAR_9 );
}
