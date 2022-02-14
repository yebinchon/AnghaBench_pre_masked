
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_ctr_drbg_context ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_1 (int *,unsigned char*) ;

void FUNC_2( mbedtls_ctr_drbg_context *VAR_2,
                      const unsigned char *VAR_3, size_t VAR_4 )
{
    unsigned char VAR_5[VAR_1];

    if( VAR_4 > 0 )
    {


        if( VAR_4 > VAR_0 )
            VAR_4 = VAR_0;

        FUNC_0( VAR_5, VAR_3, VAR_4 );
        FUNC_1( VAR_2, VAR_5 );
    }
}
