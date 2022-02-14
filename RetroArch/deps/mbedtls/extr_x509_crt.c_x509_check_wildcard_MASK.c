
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; char* p; } ;
typedef TYPE_1__ mbedtls_x509_buf ;


 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char*,char const*,size_t) ;

__attribute__((used)) static int FUNC_2( const char *VAR_0, mbedtls_x509_buf *VAR_1 )
{
    size_t VAR_2;
    size_t VAR_3 = 0, VAR_4 = FUNC_0( VAR_0 );

    if( VAR_1->len < 3 || VAR_1->p[0] != '*' || VAR_1->p[1] != '.' )
        return( 0 );

    for( VAR_2 = 0; VAR_2 < VAR_4; ++VAR_2 )
    {
        if( VAR_0[VAR_2] == '.' )
        {
            VAR_3 = VAR_2;
            break;
        }
    }

    if( VAR_3 == 0 )
        return( -1 );

    if( VAR_4 - VAR_3 == VAR_1->len - 1 &&
        FUNC_1( VAR_1->p + 1, VAR_0 + VAR_3, VAR_1->len - 1 ) == 0 )
    {
        return( 0 );
    }

    return( -1 );
}
