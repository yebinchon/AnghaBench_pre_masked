
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_ctr_drbg_context ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (unsigned char*,int,int,int *) ;
 int FUNC_3 (int *,unsigned char*,int) ;

int FUNC_4( mbedtls_ctr_drbg_context *VAR_2, const char *VAR_3 )
{
    int VAR_4 = VAR_1;
    FILE *VAR_5;
    unsigned char VAR_6[ VAR_0 ];

    if( ( VAR_5 = FUNC_1( VAR_3, "wb" ) ) == ((void*)0) )
        return( VAR_1 );

    if( ( VAR_4 = FUNC_3( VAR_2, VAR_6, VAR_0 ) ) != 0 )
        goto exit;

    if( FUNC_2( VAR_6, 1, VAR_0, VAR_5 ) != VAR_0 )
    {
        VAR_4 = VAR_1;
        goto exit;
    }

    VAR_4 = 0;

exit:
    FUNC_0( VAR_5 );
    return( VAR_4 );
}
