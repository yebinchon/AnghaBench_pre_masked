
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int width; int height; int codec; } ;
struct TYPE_8__ {int width; int height; int* linesize; scalar_t__* data; } ;
struct TYPE_7__ {int chroma_v_shift; int chroma_h_shift; TYPE_5__* avctx; } ;
typedef TYPE_1__ SnowContext ;
typedef TYPE_2__ AVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*,TYPE_2__*,int ) ;

int FUNC_2(SnowContext *VAR_2, AVFrame *VAR_3)
{
    int VAR_4, VAR_5;
    int VAR_6 = FUNC_0(VAR_2->avctx->codec);

    VAR_3->width = VAR_2->avctx->width ;
    VAR_3->height = VAR_2->avctx->height;
    if (VAR_6) {
        VAR_3->width += 2 * VAR_1;
        VAR_3->height += 2 * VAR_1;
    }
    if ((VAR_4 = FUNC_1(VAR_2->avctx, VAR_3, VAR_0)) < 0)
        return VAR_4;
    if (VAR_6) {
        for (VAR_5 = 0; VAR_3->data[VAR_5]; VAR_5++) {
            int VAR_7 = (VAR_1 >> (VAR_5 ? VAR_2->chroma_v_shift : 0)) *
                            VAR_3->linesize[VAR_5] +
                            (VAR_1 >> (VAR_5 ? VAR_2->chroma_h_shift : 0));
            VAR_3->data[VAR_5] += VAR_7;
        }
        VAR_3->width = VAR_2->avctx->width;
        VAR_3->height = VAR_2->avctx->height;
    }

    return 0;
}
