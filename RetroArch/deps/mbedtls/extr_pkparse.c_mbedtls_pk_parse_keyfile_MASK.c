
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_pk_context ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (char const*,unsigned char**,size_t*) ;
 int FUNC_2 (int *,unsigned char*,size_t,unsigned char const*,int ) ;
 int FUNC_3 (unsigned char*,size_t) ;
 int FUNC_4 (char const*) ;

int FUNC_5( mbedtls_pk_context *VAR_0,
                      const char *VAR_1, const char *VAR_2 )
{
    int VAR_3;
    size_t VAR_4;
    unsigned char *VAR_5;

    if( ( VAR_3 = FUNC_1( VAR_1, &VAR_5, &VAR_4 ) ) != 0 )
        return( VAR_3 );

    if( VAR_2 == ((void*)0) )
        VAR_3 = FUNC_2( VAR_0, VAR_5, VAR_4, ((void*)0), 0 );
    else
        VAR_3 = FUNC_2( VAR_0, VAR_5, VAR_4,
                (const unsigned char *) VAR_2, FUNC_4( VAR_2 ) );

    FUNC_3( VAR_5, VAR_4 );
    FUNC_0( VAR_5 );

    return( VAR_3 );
}
