
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* not_before; char* not_after; } ;
typedef TYPE_1__ mbedtls_x509write_cert ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*,int) ;

int FUNC_2( mbedtls_x509write_cert *VAR_2, const char *VAR_3,
                                const char *VAR_4 )
{
    if( FUNC_0( VAR_3 ) != VAR_1 - 1 ||
        FUNC_0( VAR_4 ) != VAR_1 - 1 )
    {
        return( VAR_0 );
    }
    FUNC_1( VAR_2->not_before, VAR_3, VAR_1 );
    FUNC_1( VAR_2->not_after , VAR_4 , VAR_1 );
    VAR_2->not_before[VAR_1 - 1] = 'Z';
    VAR_2->not_after[VAR_1 - 1] = 'Z';

    return( 0 );
}
