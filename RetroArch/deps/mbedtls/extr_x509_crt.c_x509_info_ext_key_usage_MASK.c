
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next; int buf; } ;
typedef TYPE_1__ mbedtls_x509_sequence ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const**) ;
 int FUNC_1 (char*,size_t,char*,char const*,char const*) ;

__attribute__((used)) static int FUNC_2( char **VAR_1, size_t *VAR_2,
                                    const mbedtls_x509_sequence *VAR_3 )
{
    int VAR_4;
    const char *VAR_5;
    size_t VAR_6 = *VAR_2;
    char *VAR_7 = *VAR_1;
    const mbedtls_x509_sequence *VAR_8 = VAR_3;
    const char *VAR_9 = "";

    while( VAR_8 != ((void*)0) )
    {
        if( FUNC_0( &VAR_8->buf, &VAR_5 ) != 0 )
            VAR_5 = "???";

        VAR_4 = FUNC_1( VAR_7, VAR_6, "%s%s", VAR_9, VAR_5 );
        VAR_0;

        VAR_9 = ", ";

        VAR_8 = VAR_8->next;
    }

    *VAR_2 = VAR_6;
    *VAR_1 = VAR_7;

    return( 0 );
}
