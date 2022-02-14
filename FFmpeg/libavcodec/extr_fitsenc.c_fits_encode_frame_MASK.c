
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;
struct TYPE_12__ {int pix_fmt; int height; int width; } ;
struct TYPE_11__ {int* linesize; int ** data; } ;
struct TYPE_10__ {int size; int flags; int * data; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;






 int VAR_1 ;
 int const FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*,int ,char*) ;
 int FUNC_3 (int **,int const) ;
 int FUNC_4 (TYPE_3__*,TYPE_1__*,int,int ) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int ,int) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_3, AVPacket *VAR_4,
                            const AVFrame *VAR_5, int *VAR_6)
{
    AVFrame * const VAR_7 = (AVFrame *)VAR_5;
    uint8_t *VAR_8, *VAR_9, *VAR_10;
    const uint16_t VAR_11 = (1 << 15);
    uint64_t VAR_12 = 0, VAR_13 = 0;
    int VAR_14, VAR_15, VAR_16 = 1, VAR_17, VAR_18, VAR_19, VAR_20;
    int VAR_21[] = {2, 0, 1, 3};

    switch (VAR_3->pix_fmt) {
    case 128:
    case 129:
        VAR_21[0] = 0;
        if (VAR_3->pix_fmt == 128) {
            VAR_15 = 8;
        } else {
            VAR_15 = 16;
        }
        break;
    case 131:
    case 133:
        VAR_15 = 8;
        if (VAR_3->pix_fmt == 131) {
            VAR_16 = 3;
        } else {
            VAR_16 = 4;
        }
        break;
    case 130:
    case 132:
        VAR_15 = 16;
        if (VAR_3->pix_fmt == 130) {
            VAR_16 = 3;
        } else {
            VAR_16 = 4;
        }
        break;
    default:
        FUNC_2(VAR_3, VAR_0, "unsupported pixel format\n");
        return FUNC_0(VAR_2);
    }

    VAR_12 = (VAR_15 >> 3) * VAR_3->height * VAR_3->width * VAR_16;
    VAR_13 = ((VAR_12 + 2879) / 2880 ) * 2880;

    if ((VAR_14 = FUNC_4(VAR_3, VAR_4, VAR_13, 0)) < 0)
        return VAR_14;

    VAR_9 =
    VAR_8 = VAR_4->data;

    for (VAR_19 = 0; VAR_19 < VAR_16; VAR_19++) {
        for (VAR_17 = 0; VAR_17 < VAR_3->height; VAR_17++) {
            VAR_10 = VAR_7->data[VAR_21[VAR_19]] + (VAR_3->height - VAR_17 - 1) * VAR_7->linesize[VAR_21[VAR_19]];
            if (VAR_15 == 16) {
                for (VAR_18 = 0; VAR_18 < VAR_3->width; VAR_18++) {

                    FUNC_3(&VAR_8, FUNC_1(VAR_10) ^ VAR_11);
                    VAR_10 += 2;
                }
            } else {
                FUNC_5(VAR_8, VAR_10, VAR_3->width);
                VAR_8 += VAR_3->width;
            }
        }
    }

    VAR_20 = VAR_13 - VAR_12;
    FUNC_6(VAR_8, 0, VAR_20);
    VAR_8 += VAR_20;

    VAR_4->size = VAR_8 - VAR_9;
    VAR_4->flags |= VAR_1;
    *VAR_6 = 1;

    return 0;
}
