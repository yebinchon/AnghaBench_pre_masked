
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_gcm_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,size_t,unsigned char const*,size_t,unsigned char const*,size_t,unsigned char const*,unsigned char*,size_t,unsigned char*) ;
 int FUNC_1 (unsigned char*,size_t) ;

int FUNC_2( mbedtls_gcm_context *VAR_2,
                      size_t VAR_3,
                      const unsigned char *VAR_4,
                      size_t VAR_5,
                      const unsigned char *VAR_6,
                      size_t VAR_7,
                      const unsigned char *VAR_8,
                      size_t VAR_9,
                      const unsigned char *VAR_10,
                      unsigned char *VAR_11 )
{
    int VAR_12;
    unsigned char VAR_13[16];
    size_t VAR_14;
    int VAR_15;

    if( ( VAR_12 = FUNC_0( VAR_2, VAR_1, VAR_3,
                                   VAR_4, VAR_5, VAR_6, VAR_7,
                                   VAR_10, VAR_11, VAR_9, VAR_13 ) ) != 0 )
    {
        return( VAR_12 );
    }


    for( VAR_15 = 0, VAR_14 = 0; VAR_14 < VAR_9; VAR_14++ )
        VAR_15 |= VAR_8[VAR_14] ^ VAR_13[VAR_14];

    if( VAR_15 != 0 )
    {
        FUNC_1( VAR_11, VAR_3 );
        return( VAR_0 );
    }

    return( 0 );
}
