
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int* P; } ;
typedef TYPE_1__ mbedtls_blowfish_context ;


 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1( mbedtls_blowfish_context *VAR_1, uint32_t *VAR_2, uint32_t *VAR_3 )
{
    uint32_t VAR_4, VAR_5, VAR_6;
    short VAR_7;

    VAR_4 = *VAR_2;
    VAR_5 = *VAR_3;

    for( VAR_7 = VAR_0 + 1; VAR_7 > 1; --VAR_7 )
    {
        VAR_4 = VAR_4 ^ VAR_1->P[VAR_7];
        VAR_5 = FUNC_0( VAR_1, VAR_4 ) ^ VAR_5;

        VAR_6 = VAR_4;
        VAR_4 = VAR_5;
        VAR_5 = VAR_6;
    }

    VAR_6 = VAR_4;
    VAR_4 = VAR_5;
    VAR_5 = VAR_6;

    VAR_5 = VAR_5 ^ VAR_1->P[1];
    VAR_4 = VAR_4 ^ VAR_1->P[0];

    *VAR_2 = VAR_4;
    *VAR_3 = VAR_5;
}
