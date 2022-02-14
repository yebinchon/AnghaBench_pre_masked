
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int* p; } ;
typedef TYPE_1__ mbedtls_x509_buf ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t,char*,...) ;

int FUNC_1( char *VAR_1, size_t VAR_2, const mbedtls_x509_buf *VAR_3 )
{
    int VAR_4;
    size_t VAR_5, VAR_6, VAR_7;
    char *VAR_8;

    VAR_8 = VAR_1;
    VAR_6 = VAR_2;

    VAR_7 = ( VAR_3->len <= 32 )
        ? VAR_3->len : 28;

    for( VAR_5 = 0; VAR_5 < VAR_7; VAR_5++ )
    {
        if( VAR_5 == 0 && VAR_7 > 1 && VAR_3->p[VAR_5] == 0x0 )
            continue;

        VAR_4 = FUNC_0( VAR_8, VAR_6, "%02X%s",
                VAR_3->p[VAR_5], ( VAR_5 < VAR_7 - 1 ) ? ":" : "" );
        VAR_0;
    }

    if( VAR_7 != VAR_3->len )
    {
        VAR_4 = FUNC_0( VAR_8, VAR_6, "...." );
        VAR_0;
    }

    return( (int) ( VAR_2 - VAR_6 ) );
}
