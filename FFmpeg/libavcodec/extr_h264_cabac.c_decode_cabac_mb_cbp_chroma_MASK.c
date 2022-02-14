
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int left_cbp; int top_cbp; int * cabac_state; int cabac; } ;
typedef TYPE_1__ H264SliceContext ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(H264SliceContext *VAR_0)
{
    int VAR_1;
    int VAR_2, VAR_3;

    VAR_2 = (VAR_0->left_cbp>>4)&0x03;
    VAR_3 = (VAR_0-> top_cbp>>4)&0x03;

    VAR_1 = 0;
    if( VAR_2 > 0 ) VAR_1++;
    if( VAR_3 > 0 ) VAR_1 += 2;
    if( FUNC_0( &VAR_0->cabac, &VAR_0->cabac_state[77 + VAR_1] ) == 0 )
        return 0;

    VAR_1 = 4;
    if( VAR_2 == 2 ) VAR_1++;
    if( VAR_3 == 2 ) VAR_1 += 2;
    return 1 + FUNC_0( &VAR_0->cabac, &VAR_0->cabac_state[77 + VAR_1] );
}
