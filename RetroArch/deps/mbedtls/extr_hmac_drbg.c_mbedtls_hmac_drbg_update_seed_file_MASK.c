
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_hmac_drbg_context ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 size_t FUNC_2 (unsigned char*,int,size_t,int *) ;
 int FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned char*,size_t) ;
 int FUNC_6 (int *,char const*) ;

int FUNC_7( mbedtls_hmac_drbg_context *VAR_5, const char *VAR_6 )
{
    FILE *VAR_7;
    size_t VAR_8;
    unsigned char VAR_9[ VAR_2 ];

    if( ( VAR_7 = FUNC_1( VAR_6, "rb" ) ) == ((void*)0) )
        return( VAR_0 );

    FUNC_3( VAR_7, 0, VAR_3 );
    VAR_8 = (size_t) FUNC_4( VAR_7 );
    FUNC_3( VAR_7, 0, VAR_4 );

    if( VAR_8 > VAR_2 )
    {
        FUNC_0( VAR_7 );
        return( VAR_1 );
    }

    if( FUNC_2( VAR_9, 1, VAR_8, VAR_7 ) != VAR_8 )
    {
        FUNC_0( VAR_7 );
        return( VAR_0 );
    }

    FUNC_0( VAR_7 );

    FUNC_5( VAR_5, VAR_9, VAR_8 );

    return( FUNC_6( VAR_5, VAR_6 ) );
}
