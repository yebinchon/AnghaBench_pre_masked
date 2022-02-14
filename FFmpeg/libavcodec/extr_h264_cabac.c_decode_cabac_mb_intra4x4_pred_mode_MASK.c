
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * cabac_state; int cabac; } ;
typedef TYPE_1__ H264SliceContext ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(H264SliceContext *VAR_0, int VAR_1)
{
    int VAR_2 = 0;

    if( FUNC_0( &VAR_0->cabac, &VAR_0->cabac_state[68] ) )
        return VAR_1;

    VAR_2 += 1 * FUNC_0( &VAR_0->cabac, &VAR_0->cabac_state[69] );
    VAR_2 += 2 * FUNC_0( &VAR_0->cabac, &VAR_0->cabac_state[69] );
    VAR_2 += 4 * FUNC_0( &VAR_0->cabac, &VAR_0->cabac_state[69] );

    return VAR_2 + ( VAR_2 >= VAR_1 );
}
