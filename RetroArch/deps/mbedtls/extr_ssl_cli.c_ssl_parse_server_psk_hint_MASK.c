
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_ssl_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;

__attribute__((used)) static int FUNC_1( mbedtls_ssl_context *VAR_2,
                                      unsigned char **VAR_3,
                                      unsigned char *VAR_4 )
{
    int VAR_5 = VAR_1;
    size_t VAR_6;
    ((void) VAR_2);






    VAR_6 = (*VAR_3)[0] << 8 | (*VAR_3)[1];
    *VAR_3 += 2;

    if( (*VAR_3) + VAR_6 > VAR_4 )
    {
        FUNC_0( 1, ( "bad server key exchange message "
                                    "(psk_identity_hint length)" ) );
        return( VAR_0 );
    }






    *VAR_3 += VAR_6;
    VAR_5 = 0;

    return( VAR_5 );
}
