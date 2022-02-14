
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {int width; int height; int** data; int* linesize; } ;
struct TYPE_15__ {TYPE_1__* avf; } ;
struct TYPE_14__ {int nb_planes; int log2_chroma_w; int log2_chroma_h; TYPE_6__* frames; TYPE_3__* pixel_refs; TYPE_2__* pixel_weights; TYPE_4__* pixel_mvs; } ;
struct TYPE_13__ {int** mvs; } ;
struct TYPE_12__ {int nb; int* refs; } ;
struct TYPE_11__ {int* weights; } ;
struct TYPE_10__ {int** data; int* linesize; } ;
typedef TYPE_2__ PixelWeights ;
typedef TYPE_3__ PixelRefs ;
typedef TYPE_4__ PixelMVS ;
typedef TYPE_5__ MIContext ;
typedef TYPE_6__ Frame ;
typedef TYPE_7__ AVFrame ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(MIContext *VAR_1, int VAR_2, AVFrame *VAR_3)
{
    int VAR_4, VAR_5, VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_1->nb_planes; VAR_6++) {
        int VAR_7 = VAR_3->width;
        int VAR_8 = VAR_3->height;
        int VAR_9 = VAR_6 == 1 || VAR_6 == 2;

        for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++)
            for (VAR_4 = 0; VAR_4 < VAR_7; VAR_4++) {
                int VAR_10, VAR_11;
                int VAR_12 = 0;
                int VAR_13, VAR_14 = 0;
                PixelMVS *VAR_15 = &VAR_1->pixel_mvs[VAR_4 + VAR_5 * VAR_3->width];
                PixelWeights *VAR_16 = &VAR_1->pixel_weights[VAR_4 + VAR_5 * VAR_3->width];
                PixelRefs *VAR_17 = &VAR_1->pixel_refs[VAR_4 + VAR_5 * VAR_3->width];

                for (VAR_13 = 0; VAR_13 < VAR_17->nb; VAR_13++)
                    VAR_12 += VAR_16->weights[VAR_13];

                if (!VAR_12 || !VAR_17->nb) {
                    VAR_16->weights[0] = VAR_0 - VAR_2;
                    VAR_17->refs[0] = 1;
                    VAR_15->mvs[0][0] = 0;
                    VAR_15->mvs[0][1] = 0;
                    VAR_16->weights[1] = VAR_2;
                    VAR_17->refs[1] = 2;
                    VAR_15->mvs[1][0] = 0;
                    VAR_15->mvs[1][1] = 0;
                    VAR_17->nb = 2;

                    VAR_12 = VAR_0;
                }

                for (VAR_13 = 0; VAR_13 < VAR_17->nb; VAR_13++) {
                    Frame *VAR_18 = &VAR_1->frames[VAR_17->refs[VAR_13]];
                    if (VAR_9) {
                        VAR_10 = (VAR_4 >> VAR_1->log2_chroma_w) + VAR_15->mvs[VAR_13][0] / (1 << VAR_1->log2_chroma_w);
                        VAR_11 = (VAR_5 >> VAR_1->log2_chroma_h) + VAR_15->mvs[VAR_13][1] / (1 << VAR_1->log2_chroma_h);
                    } else {
                        VAR_10 = VAR_4 + VAR_15->mvs[VAR_13][0];
                        VAR_11 = VAR_5 + VAR_15->mvs[VAR_13][1];
                    }

                    VAR_14 += VAR_16->weights[VAR_13] * VAR_18->avf->data[VAR_6][VAR_10 + VAR_11 * VAR_18->avf->linesize[VAR_6]];
                }

                VAR_14 = FUNC_0(VAR_14, VAR_12);

                if (VAR_9)
                    VAR_3->data[VAR_6][(VAR_4 >> VAR_1->log2_chroma_w) + (VAR_5 >> VAR_1->log2_chroma_h) * VAR_3->linesize[VAR_6]] = VAR_14;
                else
                    VAR_3->data[VAR_6][VAR_4 + VAR_5 * VAR_3->linesize[VAR_6]] = VAR_14;
            }
    }
}
