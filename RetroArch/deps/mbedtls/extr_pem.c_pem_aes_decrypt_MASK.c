
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_aes_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,size_t,unsigned char*,unsigned char*,unsigned char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned char*,unsigned int) ;
 int FUNC_4 (unsigned char*,unsigned int) ;
 int FUNC_5 (unsigned char*,unsigned int,unsigned char*,unsigned char const*,size_t) ;

__attribute__((used)) static void FUNC_6( unsigned char VAR_1[16], unsigned int VAR_2,
                               unsigned char *VAR_3, size_t VAR_4,
                               const unsigned char *VAR_5, size_t VAR_6 )
{
    mbedtls_aes_context VAR_7;
    unsigned char VAR_8[32];

    FUNC_2( &VAR_7 );

    FUNC_5( VAR_8, VAR_2, VAR_1, VAR_5, VAR_6 );

    FUNC_3( &VAR_7, VAR_8, VAR_2 * 8 );
    FUNC_0( &VAR_7, VAR_0, VAR_4,
                     VAR_1, VAR_3, VAR_3 );

    FUNC_1( &VAR_7 );
    FUNC_4( VAR_8, VAR_2 );
}
