
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_gcm_context ;


 int FUNC_0 (int *,unsigned char*,size_t) ;
 int FUNC_1 (int *,int,unsigned char const*,size_t,unsigned char const*,size_t) ;
 int FUNC_2 (int *,size_t,unsigned char const*,unsigned char*) ;

int FUNC_3( mbedtls_gcm_context *VAR_0,
                       int VAR_1,
                       size_t VAR_2,
                       const unsigned char *VAR_3,
                       size_t VAR_4,
                       const unsigned char *VAR_5,
                       size_t VAR_6,
                       const unsigned char *VAR_7,
                       unsigned char *VAR_8,
                       size_t VAR_9,
                       unsigned char *VAR_10 )
{
    int VAR_11;

    if( ( VAR_11 = FUNC_1( VAR_0, VAR_1, VAR_3, VAR_4, VAR_5, VAR_6 ) ) != 0 )
        return( VAR_11 );

    if( ( VAR_11 = FUNC_2( VAR_0, VAR_2, VAR_7, VAR_8 ) ) != 0 )
        return( VAR_11 );

    if( ( VAR_11 = FUNC_0( VAR_0, VAR_10, VAR_9 ) ) != 0 )
        return( VAR_11 );

    return( 0 );
}
