
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* dst; } ;
struct TYPE_11__ {int height; unsigned char** data; int* linesize; int width; } ;
struct TYPE_10__ {int x; int y; int h; int vsub; int w; unsigned char* yuv_color; int hsub; scalar_t__ invert_color; scalar_t__ replace; scalar_t__ have_alpha; } ;
struct TYPE_9__ {int * outputs; TYPE_2__* priv; } ;
typedef TYPE_2__ DrawBoxContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;


 size_t VAR_0 ;
 int FUNC_0 (int,int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int,int) ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_4, AVFrame *VAR_5)
{
    DrawBoxContext *VAR_6 = VAR_4->dst->priv;
    int VAR_7, VAR_8, VAR_9, VAR_10 = VAR_6->x, VAR_11 = VAR_6->y;
    unsigned char *VAR_12[4];

    if (VAR_6->have_alpha && VAR_6->replace) {
        for (VAR_9 = FUNC_0(VAR_11, 0); VAR_9 < VAR_5->height && VAR_9 < (VAR_11 + VAR_6->h); VAR_9++) {
            VAR_12[0] = VAR_5->data[0] + VAR_9 * VAR_5->linesize[0];
            VAR_12[3] = VAR_5->data[3] + VAR_9 * VAR_5->linesize[3];

            for (VAR_7 = 1; VAR_7 < 3; VAR_7++)
                VAR_12[VAR_7] = VAR_5->data[VAR_7] +
                     VAR_5->linesize[VAR_7] * (VAR_9 >> VAR_6->vsub);

            if (VAR_6->invert_color) {
                for (VAR_8 = FUNC_0(VAR_10, 0); VAR_8 < VAR_10 + VAR_6->w && VAR_8 < VAR_5->width; VAR_8++)
                    if (FUNC_2(VAR_6, VAR_8, VAR_9))
                        VAR_12[0][VAR_8] = 0xff - VAR_12[0][VAR_8];
            } else {
                for (VAR_8 = FUNC_0(VAR_10, 0); VAR_8 < VAR_10 + VAR_6->w && VAR_8 < VAR_5->width; VAR_8++) {
                    if (FUNC_2(VAR_6, VAR_8, VAR_9)) {
                        VAR_12[0][VAR_8 ] = VAR_6->yuv_color[VAR_3];
                        VAR_12[1][VAR_8 >> VAR_6->hsub] = VAR_6->yuv_color[VAR_1];
                        VAR_12[2][VAR_8 >> VAR_6->hsub] = VAR_6->yuv_color[VAR_2];
                        VAR_12[3][VAR_8 ] = VAR_6->yuv_color[VAR_0];
                    }
                }
            }
        }
    } else {
        for (VAR_9 = FUNC_0(VAR_11, 0); VAR_9 < VAR_5->height && VAR_9 < (VAR_11 + VAR_6->h); VAR_9++) {
            VAR_12[0] = VAR_5->data[0] + VAR_9 * VAR_5->linesize[0];

            for (VAR_7 = 1; VAR_7 < 3; VAR_7++)
                VAR_12[VAR_7] = VAR_5->data[VAR_7] +
                     VAR_5->linesize[VAR_7] * (VAR_9 >> VAR_6->vsub);

            if (VAR_6->invert_color) {
                for (VAR_8 = FUNC_0(VAR_10, 0); VAR_8 < VAR_10 + VAR_6->w && VAR_8 < VAR_5->width; VAR_8++)
                    if (FUNC_2(VAR_6, VAR_8, VAR_9))
                        VAR_12[0][VAR_8] = 0xff - VAR_12[0][VAR_8];
            } else {
                for (VAR_8 = FUNC_0(VAR_10, 0); VAR_8 < VAR_10 + VAR_6->w && VAR_8 < VAR_5->width; VAR_8++) {
                    double VAR_13 = (double)VAR_6->yuv_color[VAR_0] / 255;

                    if (FUNC_2(VAR_6, VAR_8, VAR_9)) {
                        VAR_12[0][VAR_8 ] = (1 - VAR_13) * VAR_12[0][VAR_8 ] + VAR_13 * VAR_6->yuv_color[VAR_3];
                        VAR_12[1][VAR_8 >> VAR_6->hsub] = (1 - VAR_13) * VAR_12[1][VAR_8 >> VAR_6->hsub] + VAR_13 * VAR_6->yuv_color[VAR_1];
                        VAR_12[2][VAR_8 >> VAR_6->hsub] = (1 - VAR_13) * VAR_12[2][VAR_8 >> VAR_6->hsub] + VAR_13 * VAR_6->yuv_color[VAR_2];
                    }
                }
            }
        }
    }

    return FUNC_1(VAR_4->dst->outputs[0], VAR_5);
}
