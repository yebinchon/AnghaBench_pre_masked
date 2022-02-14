
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_entropy_context ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 size_t FUNC_2 (unsigned char*,int,size_t,int *) ;
 int FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned char*,size_t) ;
 int FUNC_6 (int *,char const*) ;

int FUNC_7( mbedtls_entropy_context *VAR_4, const char *VAR_5 )
{
    FILE *VAR_6;
    size_t VAR_7;
    unsigned char VAR_8[ VAR_0 ];

    if( ( VAR_6 = FUNC_1( VAR_5, "rb" ) ) == ((void*)0) )
        return( VAR_1 );

    FUNC_3( VAR_6, 0, VAR_2 );
    VAR_7 = (size_t) FUNC_4( VAR_6 );
    FUNC_3( VAR_6, 0, VAR_3 );

    if( VAR_7 > VAR_0 )
        VAR_7 = VAR_0;

    if( FUNC_2( VAR_8, 1, VAR_7, VAR_6 ) != VAR_7 )
    {
        FUNC_0( VAR_6 );
        return( VAR_1 );
    }

    FUNC_0( VAR_6 );

    FUNC_5( VAR_4, VAR_8, VAR_7 );

    return( FUNC_6( VAR_4, VAR_5 ) );
}
