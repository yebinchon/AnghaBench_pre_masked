
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int inter_pix_ctx; int intra_pix_ctx; int pivot; int edge_mode; int split_mode; int inter_region; int intra_region; } ;
typedef TYPE_1__ SliceContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(SliceContext *VAR_0)
{
    FUNC_0(&VAR_0->intra_region);
    FUNC_0(&VAR_0->inter_region);
    FUNC_0(&VAR_0->split_mode);
    FUNC_0(&VAR_0->edge_mode);
    FUNC_0(&VAR_0->pivot);
    FUNC_1(&VAR_0->intra_pix_ctx);
    FUNC_1(&VAR_0->inter_pix_ctx);
}
