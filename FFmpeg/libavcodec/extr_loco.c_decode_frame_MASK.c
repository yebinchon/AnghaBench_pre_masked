
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_14__ {int width; int height; TYPE_1__* priv_data; } ;
struct TYPE_13__ {int key_frame; int* data; int* linesize; } ;
struct TYPE_12__ {int size; int * data; } ;
struct TYPE_11__ {int mode; } ;
typedef TYPE_1__ LOCOContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,int ,char*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__* const,int ) ;
 int FUNC_4 (TYPE_1__* const,int,int,int,int,int const*,int) ;
 int FUNC_5 (int,int,int,int) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_3,
                        void *VAR_4, int *VAR_5,
                        AVPacket *VAR_6)
{
    LOCOContext * const VAR_7 = VAR_3->priv_data;
    const uint8_t *VAR_8 = VAR_6->data;
    int VAR_9 = VAR_6->size;
    AVFrame * const VAR_10 = VAR_4;
    int VAR_11, VAR_12;

    if ((VAR_12 = FUNC_3(VAR_3, VAR_10, 0)) < 0)
        return VAR_12;
    VAR_10->key_frame = 1;





    switch(VAR_7->mode) {
    case 134: case 129: case 130:
        VAR_11 = FUNC_4(VAR_7, VAR_10->data[0], VAR_3->width, VAR_3->height,
                                    VAR_10->linesize[0], VAR_8, VAR_9);
        do { if (VAR_11 < 0 || VAR_11 >= VAR_9) goto buf_too_small; VAR_8 += VAR_11; VAR_9 -= VAR_11; } while(0);
        VAR_11 = FUNC_4(VAR_7, VAR_10->data[1], VAR_3->width / 2, VAR_3->height,
                                    VAR_10->linesize[1], VAR_8, VAR_9);
        do { if (VAR_11 < 0 || VAR_11 >= VAR_9) goto buf_too_small; VAR_8 += VAR_11; VAR_9 -= VAR_11; } while(0);
        VAR_11 = FUNC_4(VAR_7, VAR_10->data[2], VAR_3->width / 2, VAR_3->height,
                                    VAR_10->linesize[2], VAR_8, VAR_9);
        break;
    case 133: case 128:
        VAR_11 = FUNC_4(VAR_7, VAR_10->data[0], VAR_3->width, VAR_3->height,
                                    VAR_10->linesize[0], VAR_8, VAR_9);
        do { if (VAR_11 < 0 || VAR_11 >= VAR_9) goto buf_too_small; VAR_8 += VAR_11; VAR_9 -= VAR_11; } while(0);
        VAR_11 = FUNC_4(VAR_7, VAR_10->data[2], VAR_3->width / 2, VAR_3->height / 2,
                                    VAR_10->linesize[2], VAR_8, VAR_9);
        do { if (VAR_11 < 0 || VAR_11 >= VAR_9) goto buf_too_small; VAR_8 += VAR_11; VAR_9 -= VAR_11; } while(0);
        VAR_11 = FUNC_4(VAR_7, VAR_10->data[1], VAR_3->width / 2, VAR_3->height / 2,
                                    VAR_10->linesize[1], VAR_8, VAR_9);
        break;
    case 136: case 132:
        VAR_11 = FUNC_4(VAR_7, VAR_10->data[1] + VAR_10->linesize[1]*(VAR_3->height-1), VAR_3->width, VAR_3->height,
                                    -VAR_10->linesize[1], VAR_8, VAR_9);
        do { if (VAR_11 < 0 || VAR_11 >= VAR_9) goto buf_too_small; VAR_8 += VAR_11; VAR_9 -= VAR_11; } while(0);
        VAR_11 = FUNC_4(VAR_7, VAR_10->data[0] + VAR_10->linesize[0]*(VAR_3->height-1), VAR_3->width, VAR_3->height,
                                    -VAR_10->linesize[0], VAR_8, VAR_9);
        do { if (VAR_11 < 0 || VAR_11 >= VAR_9) goto buf_too_small; VAR_8 += VAR_11; VAR_9 -= VAR_11; } while(0);
        VAR_11 = FUNC_4(VAR_7, VAR_10->data[2] + VAR_10->linesize[2]*(VAR_3->height-1), VAR_3->width, VAR_3->height,
                                    -VAR_10->linesize[2], VAR_8, VAR_9);
        if (VAR_3->width & 1) {
            FUNC_5(VAR_10->data[0] + VAR_10->linesize[0]*(VAR_3->height-1), VAR_3->width, VAR_3->height, -VAR_10->linesize[0]);
            FUNC_5(VAR_10->data[1] + VAR_10->linesize[1]*(VAR_3->height-1), VAR_3->width, VAR_3->height, -VAR_10->linesize[1]);
            FUNC_5(VAR_10->data[2] + VAR_10->linesize[2]*(VAR_3->height-1), VAR_3->width, VAR_3->height, -VAR_10->linesize[2]);
        }
        break;
    case 135:
    case 131:
        VAR_11 = FUNC_4(VAR_7, VAR_10->data[1] + VAR_10->linesize[1]*(VAR_3->height-1), VAR_3->width, VAR_3->height,
                                    -VAR_10->linesize[1], VAR_8, VAR_9);
        do { if (VAR_11 < 0 || VAR_11 >= VAR_9) goto buf_too_small; VAR_8 += VAR_11; VAR_9 -= VAR_11; } while(0);
        VAR_11 = FUNC_4(VAR_7, VAR_10->data[0] + VAR_10->linesize[0]*(VAR_3->height-1), VAR_3->width, VAR_3->height,
                                    -VAR_10->linesize[0], VAR_8, VAR_9);
        do { if (VAR_11 < 0 || VAR_11 >= VAR_9) goto buf_too_small; VAR_8 += VAR_11; VAR_9 -= VAR_11; } while(0);
        VAR_11 = FUNC_4(VAR_7, VAR_10->data[2] + VAR_10->linesize[2]*(VAR_3->height-1), VAR_3->width, VAR_3->height,
                                    -VAR_10->linesize[2], VAR_8, VAR_9);
        do { if (VAR_11 < 0 || VAR_11 >= VAR_9) goto buf_too_small; VAR_8 += VAR_11; VAR_9 -= VAR_11; } while(0);
        VAR_11 = FUNC_4(VAR_7, VAR_10->data[3] + VAR_10->linesize[3]*(VAR_3->height-1), VAR_3->width, VAR_3->height,
                                    -VAR_10->linesize[3], VAR_8, VAR_9);
        break;
    default:
        FUNC_1(0);
    }

    if (VAR_11 < 0 || VAR_11 > VAR_9)
        goto buf_too_small;
    VAR_9 -= VAR_11;

    *VAR_5 = 1;

    return VAR_6->size - VAR_9;
buf_too_small:
    FUNC_2(VAR_3, VAR_1, "Input data too small.\n");
    return FUNC_0(VAR_2);
}
