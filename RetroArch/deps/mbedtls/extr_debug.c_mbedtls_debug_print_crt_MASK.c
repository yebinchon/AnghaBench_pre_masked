
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int str ;
struct TYPE_11__ {struct TYPE_11__* next; int pk; } ;
typedef TYPE_2__ mbedtls_x509_crt ;
struct TYPE_12__ {TYPE_1__* conf; } ;
typedef TYPE_3__ mbedtls_ssl_context ;
typedef int buf ;
struct TYPE_10__ {int * f_dbg; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__ const*,int,char const*,int,char*) ;
 int FUNC_1 (TYPE_3__ const*,int,char const*,int,char*,int *) ;
 int FUNC_2 (TYPE_3__ const*,int,char const*,int,char*) ;
 int VAR_1 ;
 int FUNC_3 (char*,int,char*,char const*,int) ;
 int FUNC_4 (char*,int,char*,TYPE_2__ const*) ;

void FUNC_5( const mbedtls_ssl_context *VAR_2, int VAR_3,
                      const char *VAR_4, int VAR_5,
                      const char *VAR_6, const mbedtls_x509_crt *VAR_7 )
{
    char VAR_8[VAR_0];
    int VAR_9 = 0;

    if( VAR_2->conf == ((void*)0) || VAR_2->conf->f_dbg == ((void*)0) || VAR_7 == ((void*)0) || VAR_3 > VAR_1 )
        return;

    while( VAR_7 != ((void*)0) )
    {
        char VAR_10[1024];

        FUNC_3( VAR_8, sizeof( VAR_8 ), "%s #%d:\n", VAR_6, ++VAR_9 );
        FUNC_2( VAR_2, VAR_3, VAR_4, VAR_5, VAR_8 );

        FUNC_4( VAR_10, sizeof( VAR_10 ) - 1, "", VAR_7 );
        FUNC_0( VAR_2, VAR_3, VAR_4, VAR_5, VAR_10 );

        FUNC_1( VAR_2, VAR_3, VAR_4, VAR_5, "crt->", &VAR_7->pk );

        VAR_7 = VAR_7->next;
    }
}
