
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
struct TYPE_12__ {int* linesize; int ** data; } ;
struct TYPE_11__ {TYPE_2__** input_views; TYPE_1__* pix_desc; } ;
struct TYPE_10__ {int height; int width; int format; int linesize; int ** data; } ;
struct TYPE_9__ {int log2_chroma_h; } ;
typedef TYPE_3__ FramepackContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int **,int*,int const**,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(AVFilterLink *VAR_0,
                                AVFrame *VAR_1,
                                int VAR_2)
{
    AVFilterContext *VAR_3 = VAR_0->src;
    FramepackContext *VAR_4 = VAR_3->priv;
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
        const uint8_t *VAR_6[4];
        uint8_t *VAR_7[4];
        int VAR_8[4];
        int VAR_9 = VAR_4->input_views[VAR_5]->height >> VAR_4->pix_desc->log2_chroma_h;

        VAR_6[0] = VAR_4->input_views[VAR_5]->data[0];
        VAR_6[1] = VAR_4->input_views[VAR_5]->data[1];
        VAR_6[2] = VAR_4->input_views[VAR_5]->data[2];

        VAR_7[0] = VAR_1->data[0] + VAR_5 * VAR_1->linesize[0] *
                 (VAR_2 + VAR_4->input_views[VAR_5]->height * (1 - VAR_2));
        VAR_7[1] = VAR_1->data[1] + VAR_5 * VAR_1->linesize[1] *
                 (VAR_2 + VAR_9 * (1 - VAR_2));
        VAR_7[2] = VAR_1->data[2] + VAR_5 * VAR_1->linesize[2] *
                 (VAR_2 + VAR_9 * (1 - VAR_2));

        VAR_8[0] = VAR_1->linesize[0] +
                       VAR_2 * VAR_1->linesize[0];
        VAR_8[1] = VAR_1->linesize[1] +
                       VAR_2 * VAR_1->linesize[1];
        VAR_8[2] = VAR_1->linesize[2] +
                       VAR_2 * VAR_1->linesize[2];

        FUNC_0(VAR_7, VAR_8, VAR_6, VAR_4->input_views[VAR_5]->linesize,
                      VAR_4->input_views[VAR_5]->format,
                      VAR_4->input_views[VAR_5]->width,
                      VAR_4->input_views[VAR_5]->height);
    }
}
