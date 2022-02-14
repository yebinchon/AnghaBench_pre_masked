
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_md5_context ;


 int FUNC_0 (int *,unsigned char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned char const*,int) ;
 int FUNC_5 (unsigned char*,int) ;
 int FUNC_6 (unsigned char*,unsigned char*,size_t) ;

__attribute__((used)) static void FUNC_7( unsigned char *VAR_0, size_t VAR_1,
                        unsigned char *VAR_2,
                        const unsigned char *VAR_3, size_t VAR_4 )
{
    mbedtls_md5_context VAR_5;
    unsigned char VAR_6[16];
    size_t VAR_7;

    FUNC_2( &VAR_5 );




    FUNC_3( &VAR_5 );
    FUNC_4( &VAR_5, VAR_3, VAR_4 );
    FUNC_4( &VAR_5, VAR_2, 8 );
    FUNC_0( &VAR_5, VAR_6 );

    if( VAR_1 <= 16 )
    {
        FUNC_6( VAR_0, VAR_6, VAR_1 );

        FUNC_1( &VAR_5 );
        FUNC_5( VAR_6, 16 );
        return;
    }

    FUNC_6( VAR_0, VAR_6, 16 );




    FUNC_3( &VAR_5 );
    FUNC_4( &VAR_5, VAR_6, 16 );
    FUNC_4( &VAR_5, VAR_3, VAR_4 );
    FUNC_4( &VAR_5, VAR_2, 8 );
    FUNC_0( &VAR_5, VAR_6 );

    VAR_7 = 16;
    if( VAR_1 < 32 )
        VAR_7 = VAR_1 - 16;

    FUNC_6( VAR_0 + 16, VAR_6, VAR_7 );

    FUNC_1( &VAR_5 );
    FUNC_5( VAR_6, 16 );
}
