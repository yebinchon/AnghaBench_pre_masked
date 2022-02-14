
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_16__ {int pix_fmt; } ;
struct TYPE_15__ {int width; int height; int pix_fmt; TYPE_1__* priv_data; } ;
struct TYPE_14__ {int width; int height; int* linesize; int key_frame; scalar_t__* data; int pict_type; int format; } ;
struct TYPE_13__ {int size; int * data; } ;
struct TYPE_12__ {int tff; scalar_t__ interlace; TYPE_9__* mjpeg_avctx; scalar_t__ is_mjpeg; } ;
typedef TYPE_1__ AVRnContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ,char*) ;
 int FUNC_1 (int ,int*,int*) ;
 int FUNC_2 (TYPE_9__*,void*,int*,TYPE_2__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_4 (scalar_t__,int const*,int) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_3, void *VAR_4,
                        int *VAR_5, AVPacket *VAR_6)
{
    AVRnContext *VAR_7 = VAR_3->priv_data;
    AVFrame *VAR_8 = VAR_4;
    const uint8_t *VAR_9 = VAR_6->data;
    int VAR_10 = VAR_6->size;
    int VAR_11, VAR_12, VAR_13;

    if(VAR_7->is_mjpeg) {
        VAR_12 = FUNC_2(VAR_7->mjpeg_avctx, VAR_4, VAR_5, VAR_6);

        if (VAR_12 >= 0 && *VAR_5 && VAR_3->width <= VAR_8->width && VAR_3->height <= VAR_8->height) {
            int VAR_14 = VAR_8->height - VAR_3->height;
            int VAR_15, VAR_16;

            FUNC_1(VAR_8->format, &VAR_15, &VAR_16);

            VAR_8->data[0] += VAR_8->linesize[0] * VAR_14;
            if (VAR_8->data[2]) {
                VAR_8->data[1] += VAR_8->linesize[1] * (VAR_14>>VAR_16);
                VAR_8->data[2] += VAR_8->linesize[2] * (VAR_14>>VAR_16);
            }

            VAR_8->width = VAR_3->width;
            VAR_8->height = VAR_3->height;
        }
        VAR_3->pix_fmt = VAR_7->mjpeg_avctx->pix_fmt;
        return VAR_12;
    }

    VAR_13 = VAR_10 / (2*VAR_3->width);

    if(VAR_10 < 2*VAR_3->width * VAR_3->height) {
        FUNC_0(VAR_3, VAR_1, "packet too small\n");
        return VAR_0;
    }

    if ((VAR_12 = FUNC_3(VAR_3, VAR_8, 0)) < 0)
        return VAR_12;
    VAR_8->pict_type= VAR_2;
    VAR_8->key_frame= 1;

    if(VAR_7->interlace) {
        VAR_9 += (VAR_13 - VAR_3->height)*VAR_3->width;
        for(VAR_11 = 0; VAR_11 < VAR_3->height-1; VAR_11+=2) {
            FUNC_4(VAR_8->data[0] + (VAR_11+ VAR_7->tff)*VAR_8->linesize[0], VAR_9 , 2*VAR_3->width);
            FUNC_4(VAR_8->data[0] + (VAR_11+!VAR_7->tff)*VAR_8->linesize[0], VAR_9 + VAR_3->width*VAR_13+4, 2*VAR_3->width);
            VAR_9 += 2*VAR_3->width;
        }
    } else {
        VAR_9 += (VAR_13 - VAR_3->height)*VAR_3->width*2;
        for(VAR_11 = 0; VAR_11 < VAR_3->height; VAR_11++) {
            FUNC_4(VAR_8->data[0] + VAR_11*VAR_8->linesize[0], VAR_9, 2*VAR_3->width);
            VAR_9 += 2*VAR_3->width;
        }
    }

    *VAR_5 = 1;
    return VAR_10;
}
