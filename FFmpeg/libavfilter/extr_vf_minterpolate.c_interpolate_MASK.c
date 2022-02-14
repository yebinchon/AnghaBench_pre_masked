
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_19__ ;


typedef int int64_t ;
struct TYPE_28__ {TYPE_4__* priv; TYPE_7__** outputs; } ;
struct TYPE_21__ {int num; int den; } ;
struct TYPE_27__ {TYPE_1__ time_base; TYPE_8__* dst; } ;
struct TYPE_26__ {int width; int height; int** data; int* linesize; int pts; } ;
struct TYPE_25__ {int sb; } ;
struct TYPE_24__ {int mi_mode; int nb_planes; int b_height; int b_width; int log2_mb_size; TYPE_5__* int_blocks; TYPE_3__* frames; TYPE_2__* pixel_refs; int me_mode; int log2_chroma_h; int log2_chroma_w; scalar_t__ scene_changed; } ;
struct TYPE_23__ {TYPE_19__* avf; } ;
struct TYPE_22__ {int nb; } ;
struct TYPE_20__ {int pts; int** data; int* linesize; int height; int width; } ;
typedef TYPE_4__ MIContext ;
typedef TYPE_5__ Block ;
typedef TYPE_6__ AVFrame ;
typedef TYPE_7__ AVFilterLink ;
typedef TYPE_8__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (TYPE_6__*,TYPE_19__*) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (TYPE_4__*,TYPE_5__*,int,int,int) ;
 int FUNC_6 (TYPE_4__*,int,TYPE_6__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_5__*,int,int,int,int) ;

__attribute__((used)) static void FUNC_8(AVFilterLink *VAR_3, AVFrame *VAR_4)
{
    AVFilterContext *VAR_5 = VAR_3->dst;
    AVFilterLink *VAR_6 = VAR_5->outputs[0];
    MIContext *VAR_7 = VAR_5->priv;
    int VAR_8, VAR_9;
    int VAR_10, VAR_11;
    int64_t VAR_12;

    VAR_12 = FUNC_3(VAR_4->pts, (int64_t) VAR_0 * VAR_6->time_base.num * VAR_3->time_base.den,
                                   (int64_t) VAR_6->time_base.den * VAR_3->time_base.num);

    VAR_11 = (VAR_12 - VAR_7->frames[1].avf->pts * VAR_0) / (VAR_7->frames[2].avf->pts - VAR_7->frames[1].avf->pts);
    VAR_11 = FUNC_1(VAR_11, 0, VAR_0);

    if (VAR_11 == 0 || VAR_11 == VAR_0) {
        FUNC_2(VAR_4, VAR_11 ? VAR_7->frames[2].avf : VAR_7->frames[1].avf);
        return;
    }

    if (VAR_7->scene_changed) {

        FUNC_2(VAR_4, VAR_11 > VAR_0 / 2 ? VAR_7->frames[2].avf : VAR_7->frames[1].avf);
        return;
    }

    switch(VAR_7->mi_mode) {
        case 129:
            FUNC_2(VAR_4, VAR_11 > VAR_0 / 2 ? VAR_7->frames[2].avf : VAR_7->frames[1].avf);

            break;
        case 130:
            for (VAR_10 = 0; VAR_10 < VAR_7->nb_planes; VAR_10++) {
                int VAR_13 = VAR_4->width;
                int VAR_14 = VAR_4->height;

                if (VAR_10 == 1 || VAR_10 == 2) {
                    VAR_13 = FUNC_0(VAR_13, VAR_7->log2_chroma_w);
                    VAR_14 = FUNC_0(VAR_14, VAR_7->log2_chroma_h);
                }

                for (VAR_9 = 0; VAR_9 < VAR_14; VAR_9++) {
                    for (VAR_8 = 0; VAR_8 < VAR_13; VAR_8++) {
                        VAR_4->data[VAR_10][VAR_8 + VAR_9 * VAR_4->linesize[VAR_10]] =
                            (VAR_11 * VAR_7->frames[2].avf->data[VAR_10][VAR_8 + VAR_9 * VAR_7->frames[2].avf->linesize[VAR_10]] +
                             (VAR_0 - VAR_11) * VAR_7->frames[1].avf->data[VAR_10][VAR_8 + VAR_9 * VAR_7->frames[1].avf->linesize[VAR_10]] + 512) >> 10;
                    }
                }
            }

            break;
        case 128:
            if (VAR_7->me_mode == VAR_1) {
                FUNC_4(VAR_7, VAR_11);
                FUNC_6(VAR_7, VAR_11, VAR_4);

            } else if (VAR_7->me_mode == VAR_2) {
                int VAR_15, VAR_16;
                Block *VAR_17;

                for (VAR_9 = 0; VAR_9 < VAR_7->frames[0].avf->height; VAR_9++)
                    for (VAR_8 = 0; VAR_8 < VAR_7->frames[0].avf->width; VAR_8++)
                        VAR_7->pixel_refs[VAR_8 + VAR_9 * VAR_7->frames[0].avf->width].nb = 0;

                for (VAR_16 = 0; VAR_16 < VAR_7->b_height; VAR_16++)
                    for (VAR_15 = 0; VAR_15 < VAR_7->b_width; VAR_15++) {
                        VAR_17 = &VAR_7->int_blocks[VAR_15 + VAR_16 * VAR_7->b_width];

                        if (VAR_17->sb)
                            FUNC_7(VAR_7, VAR_17, VAR_15 << VAR_7->log2_mb_size, VAR_16 << VAR_7->log2_mb_size, VAR_7->log2_mb_size, VAR_11);

                        FUNC_5(VAR_7, VAR_17, VAR_15, VAR_16, VAR_11);

                    }

                FUNC_6(VAR_7, VAR_11, VAR_4);
            }

            break;
    }
}
