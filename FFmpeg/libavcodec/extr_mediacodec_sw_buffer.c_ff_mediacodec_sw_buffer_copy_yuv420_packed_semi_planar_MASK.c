
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {int height; int width; } ;
struct TYPE_11__ {int* linesize; int ** data; } ;
struct TYPE_10__ {int offset; } ;
struct TYPE_9__ {int slice_height; int crop_top; int stride; int crop_left; } ;
typedef TYPE_1__ MediaCodecDecContext ;
typedef TYPE_2__ FFAMediaCodecBufferInfo ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *,int) ;

void FUNC_3(AVCodecContext *VAR_0,
                                                            MediaCodecDecContext *VAR_1,
                                                            uint8_t *VAR_2,
                                                            size_t VAR_3,
                                                            FFAMediaCodecBufferInfo *VAR_4,
                                                            AVFrame *VAR_5)
{
    int VAR_6;
    uint8_t *VAR_7 = ((void*)0);

    for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
        int VAR_8;

        VAR_7 = VAR_2 + VAR_4->offset;
        if (VAR_6 == 0) {
            VAR_8 = VAR_0->height;
        } else if (VAR_6 == 1) {
            VAR_8 = VAR_0->height / 2;

            VAR_7 += (VAR_1->slice_height - VAR_1->crop_top / 2) * VAR_1->stride;

            VAR_7 += VAR_1->crop_top * VAR_1->stride;
            VAR_7 += VAR_1->crop_left;
        }

        if (VAR_5->linesize[VAR_6] == VAR_1->stride) {
            FUNC_2(VAR_5->data[VAR_6], VAR_7, VAR_8 * VAR_1->stride);
        } else {
            int VAR_9, VAR_10;
            uint8_t *VAR_11 = VAR_5->data[VAR_6];

            if (VAR_6 == 0) {
                VAR_10 = VAR_0->width;
            } else if (VAR_6 == 1) {
                VAR_10 = FUNC_1(VAR_5->linesize[VAR_6], FUNC_0(VAR_0->width, 2));
            }

            for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
                FUNC_2(VAR_11, VAR_7, VAR_10);
                VAR_7 += VAR_1->stride;
                VAR_11 += VAR_5->linesize[VAR_6];
            }
        }
    }
}
