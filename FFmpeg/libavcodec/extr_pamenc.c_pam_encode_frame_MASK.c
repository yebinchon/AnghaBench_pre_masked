
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int height; int width; int pix_fmt; } ;
struct TYPE_10__ {int** data; int* linesize; } ;
struct TYPE_9__ {int* data; int size; int flags; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;
 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_1__*,int,int ) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int*,int,char*,int,int,int,int,char const*) ;
 int FUNC_3 (int*) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_1, AVPacket *VAR_2,
                            const AVFrame *VAR_3, int *VAR_4)
{
    uint8_t *VAR_5, *VAR_6, *VAR_7;
    int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    const char *VAR_16;
    uint8_t *VAR_17;

    VAR_9 = VAR_1->height;
    VAR_10 = VAR_1->width;
    switch (VAR_1->pix_fmt) {
    case 133:
        VAR_11 = VAR_10;
        VAR_13 = 1;
        VAR_14 = 1;
        VAR_16 = "BLACKANDWHITE";
        break;
    case 135:
        VAR_11 = VAR_10;
        VAR_13 = 1;
        VAR_14 = 255;
        VAR_16 = "GRAYSCALE";
        break;
    case 136:
        VAR_11 = VAR_10 * 2;
        VAR_13 = 1;
        VAR_14 = 0xFFFF;
        VAR_16 = "GRAYSCALE";
        break;
    case 134:
        VAR_11 = VAR_10 * 2;
        VAR_13 = 2;
        VAR_14 = 255;
        VAR_16 = "GRAYSCALE_ALPHA";
        break;
    case 128:
        VAR_11 = VAR_10 * 4;
        VAR_13 = 2;
        VAR_14 = 0xFFFF;
        VAR_16 = "GRAYSCALE_ALPHA";
        break;
    case 132:
        VAR_11 = VAR_10 * 3;
        VAR_13 = 3;
        VAR_14 = 255;
        VAR_16 = "RGB";
        break;
    case 130:
        VAR_11 = VAR_10 * 4;
        VAR_13 = 4;
        VAR_14 = 255;
        VAR_16 = "RGB_ALPHA";
        break;
    case 131:
        VAR_11 = VAR_10 * 6;
        VAR_13 = 3;
        VAR_14 = 0xFFFF;
        VAR_16 = "RGB";
        break;
    case 129:
        VAR_11 = VAR_10 * 8;
        VAR_13 = 4;
        VAR_14 = 0xFFFF;
        VAR_16 = "RGB_ALPHA";
        break;
    default:
        return -1;
    }

    if ((VAR_15 = FUNC_0(VAR_1, VAR_2, VAR_11*VAR_9 + 200, 0)) < 0)
        return VAR_15;

    VAR_5 =
    VAR_6 = VAR_2->data;
    VAR_7 = VAR_2->data + VAR_2->size;

    FUNC_2(VAR_6, VAR_7 - VAR_6,
             "P7\nWIDTH %d\nHEIGHT %d\nDEPTH %d\nMAXVAL %d\nTUPLTYPE %s\nENDHDR\n",
             VAR_10, VAR_9, VAR_13, VAR_14, VAR_16);
    VAR_6 += FUNC_3(VAR_6);

    VAR_17 = VAR_3->data[0];
    VAR_12 = VAR_3->linesize[0];

    if (VAR_1->pix_fmt == 133){
        int VAR_18;
        for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
            for (VAR_18 = 0; VAR_18 < VAR_10; VAR_18++)
                *VAR_6++ = VAR_17[VAR_18 >> 3] >> (7 - VAR_18 & 7) & 1;
            VAR_17 += VAR_12;
        }
    } else {
        for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
            FUNC_1(VAR_6, VAR_17, VAR_11);
            VAR_6 += VAR_11;
            VAR_17 += VAR_12;
        }
    }

    VAR_2->size = VAR_6 - VAR_5;
    VAR_2->flags |= VAR_0;
    *VAR_4 = 1;
    return 0;
}
