
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * cabac_state; int cabac; } ;
typedef TYPE_1__ H264SliceContext ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(H264SliceContext *VAR_0)
{
    int VAR_1;
    if( !FUNC_0( &VAR_0->cabac, &VAR_0->cabac_state[36] ) )
        return 0;
    if( !FUNC_0( &VAR_0->cabac, &VAR_0->cabac_state[37] ) )
        return 1 + FUNC_0( &VAR_0->cabac, &VAR_0->cabac_state[39] );
    VAR_1 = 3;
    if( FUNC_0( &VAR_0->cabac, &VAR_0->cabac_state[38] ) ) {
        if( FUNC_0( &VAR_0->cabac, &VAR_0->cabac_state[39] ) )
            return 11 + FUNC_0( &VAR_0->cabac, &VAR_0->cabac_state[39] );
        VAR_1 += 4;
    }
    VAR_1 += 2*FUNC_0( &VAR_0->cabac, &VAR_0->cabac_state[39] );
    VAR_1 += FUNC_0( &VAR_0->cabac, &VAR_0->cabac_state[39] );
    return VAR_1;
}
