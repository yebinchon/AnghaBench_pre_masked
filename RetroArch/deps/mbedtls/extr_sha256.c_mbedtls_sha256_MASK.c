
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_sha256_context ;


 int FUNC_0 (int *,unsigned char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,unsigned char const*,size_t) ;

void FUNC_5( const unsigned char *VAR_0, size_t VAR_1,
             unsigned char VAR_2[32], int VAR_3 )
{
    mbedtls_sha256_context VAR_4;

    FUNC_2( &VAR_4 );
    FUNC_3( &VAR_4, VAR_3 );
    FUNC_4( &VAR_4, VAR_0, VAR_1 );
    FUNC_0( &VAR_4, VAR_2 );
    FUNC_1( &VAR_4 );
}
