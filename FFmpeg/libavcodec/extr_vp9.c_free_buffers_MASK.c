
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int active_tile_cols; TYPE_1__* td; int * intra_pred_data; } ;
typedef TYPE_2__ VP9Context ;
struct TYPE_4__ {int block_base; int b_base; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(VP9Context *VAR_0)
{
    int VAR_1;

    FUNC_0(&VAR_0->intra_pred_data[0]);
    for (VAR_1 = 0; VAR_1 < VAR_0->active_tile_cols; VAR_1++) {
        FUNC_0(&VAR_0->td[VAR_1].b_base);
        FUNC_0(&VAR_0->td[VAR_1].block_base);
    }
}
