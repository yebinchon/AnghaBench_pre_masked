
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__* chroma_pred_mode_table; } ;
struct TYPE_5__ {int* left_mb_xy; int top_mb_xy; int * cabac_state; int cabac; scalar_t__ top_type; scalar_t__* left_type; } ;
typedef TYPE_1__ H264SliceContext ;
typedef TYPE_2__ H264Context ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(const H264Context *VAR_1, H264SliceContext *VAR_2)
{
    const int VAR_3 = VAR_2->left_mb_xy[0];
    const int VAR_4 = VAR_2->top_mb_xy;

    int VAR_5 = 0;


    if (VAR_2->left_type[VAR_0] && VAR_1->chroma_pred_mode_table[VAR_3] != 0)
        VAR_5++;

    if (VAR_2->top_type && VAR_1->chroma_pred_mode_table[VAR_4] != 0)
        VAR_5++;

    if( FUNC_0( &VAR_2->cabac, &VAR_2->cabac_state[64+VAR_5] ) == 0 )
        return 0;

    if( FUNC_0( &VAR_2->cabac, &VAR_2->cabac_state[64+3] ) == 0 )
        return 1;
    if( FUNC_0( &VAR_2->cabac, &VAR_2->cabac_state[64+3] ) == 0 )
        return 2;
    else
        return 3;
}
