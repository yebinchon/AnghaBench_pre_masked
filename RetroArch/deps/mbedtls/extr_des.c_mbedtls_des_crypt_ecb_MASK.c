
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int * sk; } ;
typedef TYPE_1__ mbedtls_des_context ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,unsigned char const*,int) ;
 int FUNC_4 (int ,unsigned char*,int) ;

int FUNC_5( mbedtls_des_context *VAR_0,
                    const unsigned char VAR_1[8],
                    unsigned char VAR_2[8] )
{
    int VAR_3;
    uint32_t VAR_4, VAR_5, VAR_6, *VAR_7;

    VAR_7 = VAR_0->sk;

    FUNC_3( VAR_4, VAR_1, 0 );
    FUNC_3( VAR_5, VAR_1, 4 );

    FUNC_1( VAR_4, VAR_5 );

    for( VAR_3 = 0; VAR_3 < 8; VAR_3++ )
    {
        FUNC_2( VAR_5, VAR_4 );
        FUNC_2( VAR_4, VAR_5 );
    }

    FUNC_0( VAR_5, VAR_4 );

    FUNC_4( VAR_5, VAR_2, 0 );
    FUNC_4( VAR_4, VAR_2, 4 );

    return( 0 );
}
