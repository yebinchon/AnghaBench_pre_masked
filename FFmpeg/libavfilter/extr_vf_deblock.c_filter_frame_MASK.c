
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_18__ {TYPE_1__* priv; TYPE_3__** outputs; } ;
struct TYPE_17__ {int h; int w; TYPE_4__* dst; } ;
struct TYPE_16__ {int const* linesize; scalar_t__* data; } ;
struct TYPE_15__ {int block; int nb_planes; int* planewidth; int* planeheight; int const bpc; int planes; int max; int dth; int gth; int bth; int ath; int (* deblockv ) (int *,int const,int ,int ,int ,int ,int ,int ) ;int (* deblockh ) (int *,int const,int ,int ,int ,int ,int ,int ) ;} ;
typedef TYPE_1__ DeblockContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int const,int const) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__**) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int const,int const*,int const,int const,int const) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_7 (TYPE_3__*,int ,int ) ;
 int FUNC_8 (int *,int const,int ,int ,int ,int ,int ,int ) ;
 int FUNC_9 (int *,int const,int ,int ,int ,int ,int ,int ) ;
 int FUNC_10 (int *,int const,int ,int ,int ,int ,int ,int ) ;
 int FUNC_11 (int *,int const,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_12(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    AVFilterLink *VAR_4 = VAR_3->outputs[0];
    DeblockContext *VAR_5 = VAR_3->priv;
    const int VAR_6 = VAR_5->block;
    AVFrame *VAR_7;
    int VAR_8, VAR_9, VAR_10;

    if (FUNC_4(VAR_2)) {
        VAR_7 = VAR_2;
    } else {
        VAR_7 = FUNC_7(VAR_4, VAR_4->w, VAR_4->h);
        if (!VAR_7) {
            FUNC_3(&VAR_2);
            return FUNC_0(VAR_0);
        }
        FUNC_2(VAR_7, VAR_2);
    }

    for (VAR_8 = 0; VAR_8 < VAR_5->nb_planes; VAR_8++) {
        const int VAR_11 = VAR_5->planewidth[VAR_8];
        const int VAR_12 = VAR_5->planeheight[VAR_8];
        const uint8_t *VAR_13 = (const uint8_t *)VAR_2->data[VAR_8];
        uint8_t *VAR_14 = (uint8_t *)VAR_7->data[VAR_8];

        if (VAR_2 != VAR_7)
            FUNC_5(VAR_14, VAR_7->linesize[VAR_8],
                                VAR_13, VAR_2->linesize[VAR_8],
                                VAR_11 * VAR_5->bpc, VAR_12);

        if (!((1 << VAR_8) & VAR_5->planes))
            continue;

        for (VAR_9 = VAR_6; VAR_9 < VAR_11; VAR_9 += VAR_6)
            VAR_5->deblockv(VAR_14 + VAR_9 * VAR_5->bpc, VAR_7->linesize[VAR_8],
                        FUNC_1(VAR_6, VAR_12), VAR_5->ath, VAR_5->bth, VAR_5->gth, VAR_5->dth, VAR_5->max);

        for (VAR_10 = VAR_6; VAR_10 < VAR_12; VAR_10 += VAR_6) {
            VAR_14 += VAR_7->linesize[VAR_8] * VAR_6;

            VAR_5->deblockh(VAR_14, VAR_7->linesize[VAR_8],
                        FUNC_1(VAR_6, VAR_11),
                        VAR_5->ath, VAR_5->bth, VAR_5->gth, VAR_5->dth, VAR_5->max);

            for (VAR_9 = VAR_6; VAR_9 < VAR_11; VAR_9 += VAR_6) {
                VAR_5->deblockh(VAR_14 + VAR_9 * VAR_5->bpc, VAR_7->linesize[VAR_8],
                            FUNC_1(VAR_6, VAR_11 - VAR_9),
                            VAR_5->ath, VAR_5->bth, VAR_5->gth, VAR_5->dth, VAR_5->max);
                VAR_5->deblockv(VAR_14 + VAR_9 * VAR_5->bpc, VAR_7->linesize[VAR_8],
                            FUNC_1(VAR_6, VAR_12 - VAR_10),
                            VAR_5->ath, VAR_5->bth, VAR_5->gth, VAR_5->dth, VAR_5->max);
            }
        }
    }

    if (VAR_2 != VAR_7)
        FUNC_3(&VAR_2);
    return FUNC_6(VAR_4, VAR_7);
}
