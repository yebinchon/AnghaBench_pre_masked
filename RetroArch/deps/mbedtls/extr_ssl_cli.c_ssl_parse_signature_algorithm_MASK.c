
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ minor_ver; } ;
typedef TYPE_1__ mbedtls_ssl_context ;
typedef int mbedtls_pk_type_t ;
typedef int mbedtls_md_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (unsigned char) ;
 int FUNC_3 (unsigned char) ;

__attribute__((used)) static int FUNC_4( mbedtls_ssl_context *VAR_4,
                                          unsigned char **VAR_5,
                                          unsigned char *VAR_6,
                                          mbedtls_md_type_t *VAR_7,
                                          mbedtls_pk_type_t *VAR_8 )
{
    ((void) VAR_4);
    *VAR_7 = VAR_1;
    *VAR_8 = VAR_2;


    if( VAR_4->minor_ver != VAR_3 )
    {
        return( 0 );
    }

    if( (*VAR_5) + 2 > VAR_6 )
        return( VAR_0 );




    if( ( *VAR_7 = FUNC_2( (*VAR_5)[0] ) ) == VAR_1 )
    {
        FUNC_0( 1, ( "Server used unsupported "
                            "HashAlgorithm %d", *(VAR_5)[0] ) );
        return( VAR_0 );
    }




    if( ( *VAR_8 = FUNC_3( (*VAR_5)[1] ) ) == VAR_2 )
    {
        FUNC_0( 1, ( "server used unsupported "
                            "SignatureAlgorithm %d", (*VAR_5)[1] ) );
        return( VAR_0 );
    }




    if( FUNC_1( VAR_4, *VAR_7 ) != 0 )
    {
        FUNC_0( 1, ( "server used HashAlgorithm %d that was not offered",
                                    *(VAR_5)[0] ) );
        return( VAR_0 );
    }

    FUNC_0( 2, ( "Server used SignatureAlgorithm %d", (*VAR_5)[1] ) );
    FUNC_0( 2, ( "Server used HashAlgorithm %d", (*VAR_5)[0] ) );
    *VAR_5 += 2;

    return( 0 );
}
