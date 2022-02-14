
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* priv_data; } ;
struct TYPE_10__ {int mbs_per_slice; int mb_width; int slices_width; int * slice_q; TYPE_2__* tdata; } ;
struct TYPE_9__ {TYPE_1__* nodes; } ;
struct TYPE_8__ {int prev_node; int quant; } ;
typedef TYPE_2__ ProresThreadData ;
typedef TYPE_3__ ProresContext ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int,int,int,int,TYPE_2__*) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_1, void *VAR_2,
                             int VAR_3, int VAR_4)
{
    ProresContext *VAR_5 = VAR_1->priv_data;
    ProresThreadData *VAR_6 = VAR_5->tdata + VAR_4;
    int VAR_7 = VAR_5->mbs_per_slice;
    int VAR_8, VAR_9 = VAR_3, VAR_10, VAR_11 = 0;

    for (VAR_8 = VAR_10 = 0; VAR_8 < VAR_5->mb_width; VAR_8 += VAR_7, VAR_10++) {
        while (VAR_5->mb_width - VAR_8 < VAR_7)
            VAR_7 >>= 1;
        VAR_11 = FUNC_0(VAR_1,
                             (VAR_10 + 1) * VAR_0, VAR_8, VAR_9,
                             VAR_7, VAR_6);
    }

    for (VAR_8 = VAR_5->slices_width - 1; VAR_8 >= 0; VAR_8--) {
        VAR_5->slice_q[VAR_8 + VAR_9 * VAR_5->slices_width] = VAR_6->nodes[VAR_11].quant;
        VAR_11 = VAR_6->nodes[VAR_11].prev_node;
    }

    return 0;
}
