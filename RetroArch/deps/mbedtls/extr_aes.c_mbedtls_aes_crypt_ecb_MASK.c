
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_aes_context ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int,unsigned char const*,unsigned char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned char const*,unsigned char*) ;
 int FUNC_3 (int *,unsigned char const*,unsigned char*) ;
 scalar_t__ FUNC_4 (int *,int,unsigned char const*,unsigned char*) ;

int FUNC_5( mbedtls_aes_context *VAR_3,
                    int VAR_4,
                    const unsigned char VAR_5[16],
                    unsigned char VAR_6[16] )
{
    if( VAR_4 == VAR_1 )
        return( FUNC_3( VAR_3, VAR_5, VAR_6 ) );
    else
        return( FUNC_2( VAR_3, VAR_5, VAR_6 ) );
}
