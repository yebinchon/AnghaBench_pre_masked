
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_16__ {int pix_fmt; int width; int height; } ;
struct TYPE_15__ {int* linesize; int ** data; } ;
struct TYPE_14__ {int size; int flags; int * data; } ;
struct TYPE_13__ {int depth; } ;
struct TYPE_12__ {TYPE_1__* comp; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (TYPE_4__*,int ,char*) ;
 TYPE_10__* FUNC_3 (int const) ;
 int FUNC_4 (TYPE_4__*,TYPE_2__*,int,int ) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int,char*,int,...) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_3, AVPacket *VAR_4,
                            const AVFrame *VAR_5, int *VAR_6)
{
    uint8_t *VAR_7, *VAR_8, *VAR_9;
    int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    uint8_t *VAR_17, *VAR_18, *VAR_19;
    int VAR_20 = FUNC_1(VAR_3->pix_fmt,
                                        VAR_3->width, VAR_3->height, 1);

    if ((VAR_16 = FUNC_4(VAR_3, VAR_4, VAR_20 + 200, 0)) < 0)
        return VAR_16;

    VAR_8 =
    VAR_7 = VAR_4->data;
    VAR_9 = VAR_4->data + VAR_4->size;

    VAR_11 = VAR_3->height;
    VAR_12 = VAR_11;
    switch (VAR_3->pix_fmt) {
    case 132:
        VAR_13 = '4';
        VAR_14 = (VAR_3->width + 7) >> 3;
        break;
    case 133:
        VAR_13 = '5';
        VAR_14 = VAR_3->width;
        break;
    case 134:
        VAR_13 = '5';
        VAR_14 = VAR_3->width * 2;
        break;
    case 131:
        VAR_13 = '6';
        VAR_14 = VAR_3->width * 3;
        break;
    case 130:
        VAR_13 = '6';
        VAR_14 = VAR_3->width * 6;
        break;
    case 129:
        if (VAR_3->width & 1 || VAR_3->height & 1) {
            FUNC_2(VAR_3, VAR_0, "pgmyuv needs even width and height\n");
            return FUNC_0(VAR_2);
        }
        VAR_13 = '5';
        VAR_14 = VAR_3->width;
        VAR_12 = (VAR_11 * 3) / 2;
        break;
    case 128:
        VAR_13 = '5';
        VAR_14 = VAR_3->width * 2;
        VAR_12 = (VAR_11 * 3) / 2;
        break;
    default:
        return -1;
    }
    FUNC_6(VAR_7, VAR_9 - VAR_7,
             "P%c\n%d %d\n", VAR_13, VAR_3->width, VAR_12);
    VAR_7 += FUNC_7(VAR_7);
    if (VAR_3->pix_fmt != 132) {
        int VAR_21 = (1 << FUNC_3(VAR_3->pix_fmt)->comp[0].depth) - 1;
        FUNC_6(VAR_7, VAR_9 - VAR_7,
                 "%d\n", VAR_21);
        VAR_7 += FUNC_7(VAR_7);
    }

    VAR_17 = VAR_5->data[0];
    VAR_15 = VAR_5->linesize[0];
    for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
        FUNC_5(VAR_7, VAR_17, VAR_14);
        VAR_7 += VAR_14;
        VAR_17 += VAR_15;
    }

    if (VAR_3->pix_fmt == 129 || VAR_3->pix_fmt == 128) {
        VAR_11 >>= 1;
        VAR_14 >>= 1;
        VAR_18 = VAR_5->data[1];
        VAR_19 = VAR_5->data[2];
        for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
            FUNC_5(VAR_7, VAR_18, VAR_14);
            VAR_7 += VAR_14;
            FUNC_5(VAR_7, VAR_19, VAR_14);
            VAR_7 += VAR_14;
                VAR_18 += VAR_5->linesize[1];
                VAR_19 += VAR_5->linesize[2];
        }
    }
    VAR_4->size = VAR_7 - VAR_8;
    VAR_4->flags |= VAR_1;
    *VAR_6 = 1;

    return 0;
}
