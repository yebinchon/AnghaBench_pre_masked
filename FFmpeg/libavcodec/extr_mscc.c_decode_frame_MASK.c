
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_18__ {int avail_in; int total_out; int avail_out; int next_out; int * next_in; } ;
struct TYPE_17__ {scalar_t__ codec_id; scalar_t__ pix_fmt; int height; int width; TYPE_1__* priv_data; } ;
struct TYPE_16__ {int palette_has_changed; int* linesize; int key_frame; int pict_type; scalar_t__* data; } ;
struct TYPE_15__ {int size; int * data; } ;
struct TYPE_14__ {int* pal; int* uncomp_buf; int bpp; int uncomp_size; TYPE_6__ zstream; int decomp_buf; int decomp_size; } ;
typedef int PutByteContext ;
typedef TYPE_1__ MSCCContext ;
typedef int GetByteContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int const*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (TYPE_4__*,int ,char*,int) ;
 int * FUNC_2 (TYPE_2__*,int ,int*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int*,int ) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_6__*,int ) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (scalar_t__,int*,int) ;
 int FUNC_9 (TYPE_4__*,int *,int *) ;

__attribute__((used)) static int FUNC_10(AVCodecContext *VAR_10,
                        void *VAR_11, int *VAR_12,
                        AVPacket *VAR_13)
{
    MSCCContext *VAR_14 = VAR_10->priv_data;
    AVFrame *VAR_15 = VAR_11;
    uint8_t *VAR_16 = VAR_13->data;
    int VAR_17 = VAR_13->size;
    GetByteContext VAR_18;
    PutByteContext VAR_19;
    int VAR_20, VAR_21;

    if (VAR_13->size < 3)
        return VAR_17;

    if ((VAR_20 = FUNC_5(VAR_10, VAR_15, 0)) < 0)
        return VAR_20;

    if (VAR_10->codec_id == VAR_2) {
        VAR_13->data[2] ^= VAR_13->data[0];
        VAR_16 += 2;
        VAR_17 -= 2;
    }

    if (VAR_10->pix_fmt == VAR_5) {
        int VAR_22;
        const uint8_t *VAR_23 = FUNC_2(VAR_13, VAR_6, &VAR_22);

        if (VAR_23 && VAR_22 == VAR_1) {
            VAR_15->palette_has_changed = 1;
            for (VAR_21 = 0; VAR_21 < 256; VAR_21++)
                VAR_14->pal[VAR_21] = 0xFF000000 | FUNC_0(VAR_23 + VAR_21 * 4);
        } else if (VAR_23) {
            FUNC_1(VAR_10, VAR_3, "Palette size %d is wrong\n", VAR_22);
        }
        FUNC_8(VAR_15->data[1], VAR_14->pal, VAR_1);
    }

    VAR_20 = FUNC_7(&VAR_14->zstream);
    if (VAR_20 != VAR_8) {
        FUNC_1(VAR_10, VAR_3, "Inflate reset error: %d\n", VAR_20);
        return VAR_0;
    }
    VAR_14->zstream.next_in = VAR_16;
    VAR_14->zstream.avail_in = VAR_17;
    VAR_14->zstream.next_out = VAR_14->decomp_buf;
    VAR_14->zstream.avail_out = VAR_14->decomp_size;
    VAR_20 = FUNC_6(&VAR_14->zstream, VAR_7);
    if (VAR_20 != VAR_9) {
        FUNC_1(VAR_10, VAR_3, "Inflate error: %d\n", VAR_20);
        return VAR_0;
    }

    FUNC_3(&VAR_18, VAR_14->decomp_buf, VAR_14->zstream.total_out);
    FUNC_4(&VAR_19, VAR_14->uncomp_buf, VAR_14->uncomp_size);

    VAR_20 = FUNC_9(VAR_10, &VAR_18, &VAR_19);
    if (VAR_20)
        return VAR_20;

    for (VAR_21 = 0; VAR_21 < VAR_10->height; VAR_21++) {
        FUNC_8(VAR_15->data[0] + (VAR_10->height - VAR_21 - 1) * VAR_15->linesize[0],
               VAR_14->uncomp_buf + VAR_14->bpp * VAR_21 * VAR_10->width, VAR_14->bpp * VAR_10->width);
    }

    VAR_15->key_frame = 1;
    VAR_15->pict_type = VAR_4;

    *VAR_12 = 1;

    return VAR_13->size;
}
