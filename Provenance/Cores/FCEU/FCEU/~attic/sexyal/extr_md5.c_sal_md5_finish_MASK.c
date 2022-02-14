
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct sal_md5_context {int* total; int* state; } ;


 int FUNC_0 (int,int *,int) ;
 int * VAR_0 ;
 int FUNC_1 (struct sal_md5_context*,int *,int) ;

void FUNC_2( struct sal_md5_context *VAR_1, uint8_t VAR_2[16] )
{
    uint32_t VAR_3, VAR_4;
    uint8_t VAR_5[8];

    FUNC_0( VAR_1->total[0], VAR_5, 0 );
    FUNC_0( VAR_1->total[1], VAR_5, 4 );

    VAR_3 = ( VAR_1->total[0] >> 3 ) & 0x3F;
    VAR_4 = ( VAR_3 < 56 ) ? ( 56 - VAR_3 ) : ( 120 - VAR_3 );

    FUNC_1( VAR_1, VAR_0, VAR_4 );
    FUNC_1( VAR_1, VAR_5, 8 );

    FUNC_0( VAR_1->state[0], VAR_2, 0 );
    FUNC_0( VAR_1->state[1], VAR_2, 4 );
    FUNC_0( VAR_1->state[2], VAR_2, 8 );
    FUNC_0( VAR_1->state[3], VAR_2, 12 );
}
