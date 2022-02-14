
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * k; } ;
typedef TYPE_1__ mbedtls_xtea_context ;


 int FUNC_0 (int ,unsigned char const*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2( mbedtls_xtea_context *VAR_0, const unsigned char VAR_1[16] )
{
    int VAR_2;

    FUNC_1( VAR_0, 0, sizeof(mbedtls_xtea_context) );

    for( VAR_2 = 0; VAR_2 < 4; VAR_2++ )
    {
        FUNC_0( VAR_0->k[VAR_2], VAR_1, VAR_2 << 2 );
    }
}
