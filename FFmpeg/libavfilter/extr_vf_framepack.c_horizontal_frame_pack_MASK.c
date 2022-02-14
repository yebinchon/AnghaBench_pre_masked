
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_14__ {TYPE_3__* priv; } ;
struct TYPE_13__ {TYPE_6__* src; } ;
struct TYPE_12__ {int** data; int width; int height; int* linesize; } ;
struct TYPE_11__ {TYPE_2__** input_views; TYPE_1__* pix_desc; } ;
struct TYPE_10__ {int** data; int* linesize; int width; int height; int format; } ;
struct TYPE_9__ {int nb_components; int log2_chroma_w; int log2_chroma_h; } ;
typedef TYPE_3__ FramepackContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int,int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int**,int*,int const**,int*,int ,int,int ) ;

__attribute__((used)) static void FUNC_2(AVFilterLink *VAR_2,
                                  AVFrame *VAR_3,
                                  int VAR_4)
{
    AVFilterContext *VAR_5 = VAR_2->src;
    FramepackContext *VAR_6 = VAR_5->priv;
    int VAR_7, VAR_8;

    if (VAR_4) {
        const uint8_t *VAR_9 = VAR_6->input_views[VAR_0]->data[0];
        const uint8_t *VAR_10 = VAR_6->input_views[VAR_1]->data[0];
        uint8_t *VAR_11 = VAR_3->data[0];
        int VAR_12 = VAR_3->width / 2;
        int VAR_13 = VAR_3->height;

        for (VAR_8 = 0; VAR_8 < VAR_6->pix_desc->nb_components; VAR_8++) {
            if (VAR_8 == 1 || VAR_8 == 2) {
                VAR_12 = FUNC_0(VAR_3->width / 2, VAR_6->pix_desc->log2_chroma_w);
                VAR_13 = FUNC_0(VAR_3->height, VAR_6->pix_desc->log2_chroma_h);
            }
            for (VAR_7 = 0; VAR_7 < VAR_13; VAR_7++) {
                int VAR_14;
                VAR_9 = VAR_6->input_views[VAR_0]->data[VAR_8] +
                         VAR_6->input_views[VAR_0]->linesize[VAR_8] * VAR_7;
                VAR_10 = VAR_6->input_views[VAR_1]->data[VAR_8] +
                         VAR_6->input_views[VAR_1]->linesize[VAR_8] * VAR_7;
                VAR_11 = VAR_3->data[VAR_8] + VAR_3->linesize[VAR_8] * VAR_7;
                for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {

                    if ((VAR_6->pix_desc->log2_chroma_w ||
                         VAR_6->pix_desc->log2_chroma_h) &&
                        (VAR_8 == 1 || VAR_8 == 2)) {
                        *VAR_11++ = (*VAR_9 + *VAR_10) / 2;
                        *VAR_11++ = (*VAR_9 + *VAR_10) / 2;
                    } else {
                        *VAR_11++ = *VAR_9;
                        *VAR_11++ = *VAR_10;
                    }
                    VAR_9 += 1;
                    VAR_10 += 1;
                }
            }
        }
    } else {
        for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
            const uint8_t *VAR_15[4];
            uint8_t *VAR_16[4];
            int VAR_17 = VAR_6->input_views[VAR_7]->width >> VAR_6->pix_desc->log2_chroma_w;

            VAR_15[0] = VAR_6->input_views[VAR_7]->data[0];
            VAR_15[1] = VAR_6->input_views[VAR_7]->data[1];
            VAR_15[2] = VAR_6->input_views[VAR_7]->data[2];

            VAR_16[0] = VAR_3->data[0] + VAR_7 * VAR_6->input_views[VAR_7]->width;
            VAR_16[1] = VAR_3->data[1] + VAR_7 * VAR_17;
            VAR_16[2] = VAR_3->data[2] + VAR_7 * VAR_17;

            FUNC_1(VAR_16, VAR_3->linesize, VAR_15, VAR_6->input_views[VAR_7]->linesize,
                          VAR_6->input_views[VAR_7]->format,
                          VAR_6->input_views[VAR_7]->width,
                          VAR_6->input_views[VAR_7]->height);
        }
    }
}
