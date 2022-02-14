
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int crypt; int tweak; } ;
typedef TYPE_1__ esp_aes_xts_context ;


 int FUNC_0 (int *,unsigned char const*,unsigned int) ;
 int FUNC_1 (unsigned char const*,unsigned int,unsigned char const**,unsigned int*,unsigned char const**,unsigned int*) ;

int FUNC_2( esp_aes_xts_context *VAR_0,
                                const unsigned char *VAR_1,
                                unsigned int VAR_2)
{
    int VAR_3;
    const unsigned char *VAR_4, *VAR_5;
    unsigned int VAR_6, VAR_7;

    VAR_3 = FUNC_1( VAR_1, VAR_2, &VAR_4, &VAR_6,
                                       &VAR_5, &VAR_7 );
    if( VAR_3 != 0 )
        return( VAR_3 );


    VAR_3 = FUNC_0( &VAR_0->tweak, VAR_5, VAR_7 );
    if( VAR_3 != 0 )
        return( VAR_3 );


    return FUNC_0( &VAR_0->crypt, VAR_4, VAR_6 );
}
