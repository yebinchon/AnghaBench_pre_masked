
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * macroblocks; TYPE_3__* top_border; TYPE_3__* top_nnz; TYPE_3__* intra4x4_pred_mode_top; TYPE_3__* macroblocks_base; TYPE_3__* thread_data; } ;
typedef TYPE_1__ VP8Context ;
struct TYPE_5__ {struct TYPE_5__* filter_strength; int lock; int cond; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(VP8Context *VAR_1)
{
    int VAR_2;
    if (VAR_1->thread_data)
        for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {




            FUNC_0(&VAR_1->thread_data[VAR_2].filter_strength);
        }
    FUNC_0(&VAR_1->thread_data);
    FUNC_0(&VAR_1->macroblocks_base);
    FUNC_0(&VAR_1->intra4x4_pred_mode_top);
    FUNC_0(&VAR_1->top_nnz);
    FUNC_0(&VAR_1->top_border);

    VAR_1->macroblocks = ((void*)0);
}
