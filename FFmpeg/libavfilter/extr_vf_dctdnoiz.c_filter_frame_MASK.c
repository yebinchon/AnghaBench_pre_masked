
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_20__ {int dst; int src; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_24__ {TYPE_1__* internal; TYPE_5__** outputs; TYPE_3__* priv; } ;
struct TYPE_23__ {int w; int h; TYPE_6__* dst; } ;
struct TYPE_22__ {int* linesize; int ** data; } ;
struct TYPE_21__ {int pr_width; int pr_height; int p_linesize; int ** cbuf; int (* color_correlation ) (int **,int,int *,int ,int,int) ;int nb_threads; int (* color_decorrelation ) (int *,int ,int const**,int,int,int) ;} ;
struct TYPE_19__ {int (* execute ) (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;} ;
typedef TYPE_3__ DCTdnoizContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_4__**) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_5__*,TYPE_4__*) ;
 TYPE_4__* FUNC_5 (TYPE_5__*,int,int) ;
 int VAR_1 ;
 int FUNC_6 (int *,int const*,int const) ;
 int FUNC_7 (int *,int ,int const**,int,int,int) ;
 int FUNC_8 (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;
 int FUNC_9 (int **,int,int *,int ,int,int) ;

__attribute__((used)) static int FUNC_10(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    DCTdnoizContext *VAR_5 = VAR_4->priv;
    AVFilterLink *VAR_6 = VAR_2->dst->outputs[0];
    int VAR_7, VAR_8;
    AVFrame *VAR_9;

    if (FUNC_3(VAR_3)) {
        VAR_7 = 1;
        VAR_9 = VAR_3;
    } else {
        VAR_7 = 0;
        VAR_9 = FUNC_5(VAR_6, VAR_6->w, VAR_6->h);
        if (!VAR_9) {
            FUNC_2(&VAR_3);
            return FUNC_0(VAR_0);
        }
        FUNC_1(VAR_9, VAR_3);
    }

    VAR_5->color_decorrelation(VAR_5->cbuf[0], VAR_5->p_linesize,
                           (const uint8_t **)VAR_3->data, VAR_3->linesize[0],
                           VAR_5->pr_width, VAR_5->pr_height);
    for (VAR_8 = 0; VAR_8 < 3; VAR_8++) {
        ThreadData VAR_10 = {
            .src = VAR_5->cbuf[0][VAR_8],
            .dst = VAR_5->cbuf[1][VAR_8],
        };
        VAR_4->internal->execute(VAR_4, VAR_1, &VAR_10, ((void*)0), VAR_5->nb_threads);
    }
    VAR_5->color_correlation(VAR_9->data, VAR_9->linesize[0],
                         VAR_5->cbuf[1], VAR_5->p_linesize,
                         VAR_5->pr_width, VAR_5->pr_height);

    if (!VAR_7) {
        int VAR_11;
        uint8_t *VAR_12 = VAR_9->data[0];
        const uint8_t *VAR_13 = VAR_3->data[0];
        const int VAR_14 = VAR_9->linesize[0];
        const int VAR_15 = VAR_3->linesize[0];
        const int VAR_16 = (VAR_2->w - VAR_5->pr_width) * 3;
        const int VAR_17 = (VAR_2->h - VAR_5->pr_height);

        if (VAR_16) {
            uint8_t *VAR_18 = VAR_12 + VAR_5->pr_width * 3;
            const uint8_t *VAR_19 = VAR_13 + VAR_5->pr_width * 3;

            for (VAR_11 = 0; VAR_11 < VAR_5->pr_height; VAR_11++) {
                FUNC_6(VAR_18, VAR_19, VAR_16);
                VAR_18 += VAR_14;
                VAR_19 += VAR_15;
            }
        }
        if (VAR_17) {
            uint8_t *VAR_20 = VAR_12 + VAR_5->pr_height * VAR_14;
            const uint8_t *VAR_21 = VAR_13 + VAR_5->pr_height * VAR_15;

            for (VAR_11 = 0; VAR_11 < VAR_17; VAR_11++) {
                FUNC_6(VAR_20, VAR_21, VAR_2->w * 3);
                VAR_20 += VAR_14;
                VAR_21 += VAR_15;
            }
        }

        FUNC_2(&VAR_3);
    }

    return FUNC_4(VAR_6, VAR_9);
}
