
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_15__ {int avail_in; int avail_out; int * next_out; scalar_t__ next_in; } ;
struct FlashSVContext {int block_size; int diff_height; int image_height; int pal; TYPE_2__* frame; TYPE_5__ zstream; int * tmpblock; int color_depth; scalar_t__ diff_start; TYPE_1__* blocks; scalar_t__ keyframedata; scalar_t__ is_keyframe; scalar_t__ zlibprime_prev; scalar_t__ zlibprime_curr; } ;
struct TYPE_14__ {struct FlashSVContext* priv_data; } ;
struct TYPE_13__ {scalar_t__ data; } ;
struct TYPE_12__ {int* linesize; scalar_t__* data; } ;
struct TYPE_11__ {int size; scalar_t__ pos; } ;
typedef int GetBitContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_4__*,int ,char*,...) ;
 int FUNC_1 (int *,int *,scalar_t__,int,int,int,int,int,int ) ;
 int FUNC_2 (struct FlashSVContext*,scalar_t__,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (scalar_t__,int *,int) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_6, AVPacket *VAR_7,
                                GetBitContext *VAR_8, int VAR_9,
                                int VAR_10, int VAR_11, int VAR_12, int VAR_13,
                                int VAR_14)
{
    struct FlashSVContext *VAR_15 = VAR_6->priv_data;
    uint8_t *VAR_16 = VAR_15->tmpblock;
    int VAR_17;
    int VAR_18 = FUNC_5(&VAR_15->zstream);
    if (VAR_18 != VAR_4) {
        FUNC_0(VAR_6, VAR_1, "Inflate reset error: %d\n", VAR_18);
        return VAR_0;
    }
    if (VAR_15->zlibprime_curr || VAR_15->zlibprime_prev) {
        VAR_18 = FUNC_2(VAR_15,
                             VAR_15->blocks[VAR_14].pos,
                             VAR_15->blocks[VAR_14].size);
        if (VAR_18 < 0)
            return VAR_18;
    }
    VAR_15->zstream.next_in = VAR_7->data + FUNC_3(VAR_8) / 8;
    VAR_15->zstream.avail_in = VAR_9;
    VAR_15->zstream.next_out = VAR_15->tmpblock;
    VAR_15->zstream.avail_out = VAR_15->block_size * 3;
    VAR_18 = FUNC_4(&VAR_15->zstream, VAR_3);
    if (VAR_18 == VAR_2) {
        FUNC_0(VAR_6, VAR_1, "Zlib resync occurred\n");
        FUNC_6(&VAR_15->zstream);
        VAR_18 = FUNC_4(&VAR_15->zstream, VAR_3);
    }

    if (VAR_18 != VAR_4 && VAR_18 != VAR_5) {

    }

    if (VAR_15->is_keyframe) {
        VAR_15->blocks[VAR_14].pos = VAR_15->keyframedata + (FUNC_3(VAR_8) / 8);
        VAR_15->blocks[VAR_14].size = VAR_9;
    }

    VAR_13 += VAR_15->diff_start;

    if (!VAR_15->color_depth) {


        for (VAR_17 = 1; VAR_17 <= VAR_15->diff_height; VAR_17++) {
            FUNC_7(VAR_15->frame->data[0] + VAR_12 * 3 +
                   (VAR_15->image_height - VAR_13 - VAR_17) * VAR_15->frame->linesize[0],
                   VAR_16, VAR_10 * 3);

            VAR_16 += VAR_10 * 3;
        }
    } else {

        VAR_18 = FUNC_1(VAR_15->tmpblock, VAR_15->zstream.next_out,
                      VAR_15->frame->data[0],
                      VAR_15->image_height - (VAR_13 + 1 + VAR_15->diff_height),
                      VAR_12, VAR_15->diff_height, VAR_10,
                      VAR_15->frame->linesize[0], VAR_15->pal);
        if (VAR_18 < 0) {
            FUNC_0(VAR_6, VAR_1, "decode_hybrid failed\n");
            return VAR_18;
        }
    }
    FUNC_8(VAR_8, 8 * VAR_9);
    return 0;
}
