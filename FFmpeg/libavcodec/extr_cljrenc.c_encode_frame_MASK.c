
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int luma_tmp ;
struct TYPE_14__ {int frame_number; int width; scalar_t__ strict_std_compliance; int height; TYPE_1__* priv_data; } ;
struct TYPE_13__ {int** data; int* linesize; } ;
struct TYPE_12__ {int size; int flags; int data; } ;
struct TYPE_11__ {int dither_type; } ;
typedef int PutBitContext ;
typedef TYPE_1__ CLJRContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_4__*,int ,char*,int) ;
 int FUNC_1 (TYPE_4__*,TYPE_2__*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_4, AVPacket *VAR_5,
                        const AVFrame *VAR_6, int *VAR_7)
{
    CLJRContext *VAR_8 = VAR_4->priv_data;
    PutBitContext VAR_9;
    int VAR_10, VAR_11, VAR_12;
    uint32_t VAR_13= VAR_4->frame_number;
    static const uint32_t VAR_14[2][2] =
    {
        { 0x10400000, 0x104F0000 },
        { 0xCB2A0000, 0xCB250000 },
    };

    if (VAR_4->width%4 && VAR_4->strict_std_compliance > VAR_3) {
         FUNC_0(VAR_4, VAR_1,
                "Widths which are not a multiple of 4 might fail with some decoders, "
                "use vstrict=-1 / -strict -1 to use %d anyway.\n", VAR_4->width);
         return VAR_0;
    }

    if ((VAR_12 = FUNC_1(VAR_4, VAR_5, 32*VAR_4->height*VAR_4->width/4, 0)) < 0)
        return VAR_12;

    FUNC_3(&VAR_9, VAR_5->data, VAR_5->size);

    for (VAR_11 = 0; VAR_11 < VAR_4->height; VAR_11++) {
        uint8_t *VAR_15 = &VAR_6->data[0][VAR_11 * VAR_6->linesize[0]];
        uint8_t *VAR_16 = &VAR_6->data[1][VAR_11 * VAR_6->linesize[1]];
        uint8_t *VAR_17 = &VAR_6->data[2][VAR_11 * VAR_6->linesize[2]];
        uint8_t VAR_18[4];
        for (VAR_10 = 0; VAR_10 < VAR_4->width; VAR_10 += 4) {
            switch (VAR_8->dither_type) {
            case 0: VAR_13 = 0x492A0000; break;
            case 1: VAR_13 = VAR_13 * 1664525 + 1013904223; break;
            case 2: VAR_13 = VAR_14[ VAR_11&1 ][ (VAR_10>>2)&1 ];break;
            }
            if (VAR_10+3 >= VAR_4->width) {
                FUNC_5(VAR_18, 0, sizeof(VAR_18));
                FUNC_4(VAR_18, VAR_15, VAR_4->width - VAR_10);
                VAR_15 = VAR_18;
            }
            FUNC_6(&VAR_9, 5, (249*(VAR_15[3] + (VAR_13>>29) )) >> 11);
            FUNC_6(&VAR_9, 5, (249*(VAR_15[2] + ((VAR_13>>26)&7))) >> 11);
            FUNC_6(&VAR_9, 5, (249*(VAR_15[1] + ((VAR_13>>23)&7))) >> 11);
            FUNC_6(&VAR_9, 5, (249*(VAR_15[0] + ((VAR_13>>20)&7))) >> 11);
            VAR_15 += 4;
            FUNC_6(&VAR_9, 6, (253*(*(VAR_16++) + ((VAR_13>>18)&3))) >> 10);
            FUNC_6(&VAR_9, 6, (253*(*(VAR_17++) + ((VAR_13>>16)&3))) >> 10);
        }
    }

    FUNC_2(&VAR_9);

    VAR_5->size = FUNC_7(&VAR_9) / 8;
    VAR_5->flags |= VAR_2;
    *VAR_7 = 1;
    return 0;
}
