
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int width; int height; int pix_fmt; } ;
struct TYPE_8__ {int* linesize; scalar_t__* data; } ;
struct TYPE_7__ {int log2_chroma_w; int log2_chroma_h; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_2(AVCodecContext *VAR_2, const AVFrame *VAR_3, int VAR_4[4],
                            int VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8;
    const AVPixFmtDescriptor *VAR_9;
    int VAR_10, VAR_11;
    int VAR_12;
    int VAR_13;

    VAR_0 = 1;

    VAR_9 = FUNC_0(VAR_2->pix_fmt);
    VAR_10 = -((-VAR_2->width) >> VAR_9->log2_chroma_w);
    VAR_11 = -((-VAR_7) >> VAR_9->log2_chroma_h);
    VAR_12 = -((-VAR_5) >> VAR_9->log2_chroma_h);
    VAR_13 = -((-VAR_2->height) >> VAR_9->log2_chroma_h);

    for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
        FUNC_1(VAR_1 + VAR_2->width * VAR_5 + VAR_8 * VAR_2->width,
               VAR_3->data[0] + VAR_4[0] + VAR_8 * VAR_3->linesize[0], VAR_2->width);
    }
    for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++) {
        FUNC_1(VAR_1 + VAR_2->width * VAR_2->height + VAR_10 * VAR_12 + VAR_8 * VAR_10,
               VAR_3->data[1] + VAR_4[1] + VAR_8 * VAR_3->linesize[1], VAR_10);
    }
    for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++) {
        FUNC_1(VAR_1 + VAR_2->width * VAR_2->height + VAR_10 * VAR_13 + VAR_10 * VAR_12 + VAR_8 * VAR_10,
               VAR_3->data[2] + VAR_4[2] + VAR_8 * VAR_3->linesize[2], VAR_10);
    }
}
