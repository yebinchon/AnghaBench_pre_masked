
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {TYPE_1__* priv; TYPE_2__** outputs; } ;
struct TYPE_14__ {int h; int w; TYPE_3__* dst; } ;
struct TYPE_13__ {int nb_planes; int* planewidth; int* planeheight; scalar_t__ eval_mode; int* rdft_hlen; int* rdft_vlen; int** rdft_vdata; int** weight; int* dc; int (* irdft_horizontal ) (TYPE_1__*,int *,int,int,int) ;int (* rdft_horizontal ) (TYPE_1__*,int *,int,int,int) ;} ;
typedef TYPE_1__ FFTFILTContext ;
typedef int AVFrame ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int * FUNC_5 (TYPE_2__*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int,int) ;
 int FUNC_7 (TYPE_1__*,int,int) ;
 int FUNC_8 (TYPE_1__*,int *,int,int,int) ;
 int FUNC_9 (TYPE_1__*,int *,int,int,int) ;

__attribute__((used)) static int FUNC_10(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    AVFilterLink *VAR_5 = VAR_2->dst->outputs[0];
    FFTFILTContext *VAR_6 = VAR_4->priv;
    AVFrame *VAR_7;
    int VAR_8, VAR_9, VAR_10;

    VAR_7 = FUNC_5(VAR_5, VAR_2->w, VAR_2->h);
    if (!VAR_7) {
        FUNC_2(&VAR_3);
        return FUNC_0(VAR_0);
    }

    FUNC_1(VAR_7, VAR_3);

    for (VAR_10 = 0; VAR_10 < VAR_6->nb_planes; VAR_10++) {
        int VAR_11 = VAR_6->planewidth[VAR_10];
        int VAR_12 = VAR_6->planeheight[VAR_10];

        if (VAR_6->eval_mode == VAR_1)
            FUNC_3(VAR_6, VAR_2, VAR_10);

        VAR_6->rdft_horizontal(VAR_6, VAR_3, VAR_11, VAR_12, VAR_10);
        FUNC_7(VAR_6, VAR_12, VAR_10);


        for (VAR_8 = 0; VAR_8 < VAR_6->rdft_hlen[VAR_10]; VAR_8++)
            for (VAR_9 = 0; VAR_9 < VAR_6->rdft_vlen[VAR_10]; VAR_9++)
                VAR_6->rdft_vdata[VAR_10][VAR_8 * VAR_6->rdft_vlen[VAR_10] + VAR_9] *=
                  VAR_6->weight[VAR_10][VAR_8 * VAR_6->rdft_vlen[VAR_10] + VAR_9];

        VAR_6->rdft_vdata[VAR_10][0] += VAR_6->rdft_hlen[VAR_10] * VAR_6->rdft_vlen[VAR_10] * VAR_6->dc[VAR_10];

        FUNC_6(VAR_6, VAR_12, VAR_10);
        VAR_6->irdft_horizontal(VAR_6, VAR_7, VAR_11, VAR_12, VAR_10);
    }

    FUNC_2(&VAR_3);
    return FUNC_4(VAR_5, VAR_7);
}
