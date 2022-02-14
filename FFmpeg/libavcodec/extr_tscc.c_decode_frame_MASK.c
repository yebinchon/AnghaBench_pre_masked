
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_22__ {int avail_in; scalar_t__ avail_out; int next_out; int const* next_in; } ;
struct TYPE_21__ {TYPE_2__* priv_data; } ;
struct TYPE_20__ {int palette_has_changed; int const** data; } ;
struct TYPE_19__ {int size; int * data; } ;
struct TYPE_18__ {int const* pal; TYPE_1__* avctx; int gb; int bpp; TYPE_6__ zstream; scalar_t__ decomp_size; int decomp_buf; TYPE_4__* frame; } ;
struct TYPE_17__ {scalar_t__ pix_fmt; } ;
typedef TYPE_2__ CamtasiaContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (void*,TYPE_4__*) ;
 int FUNC_1 (TYPE_5__*,int ,char*,int) ;
 int * FUNC_2 (TYPE_3__*,int ,int*) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 int FUNC_4 (TYPE_5__*,TYPE_4__*,int ,int *) ;
 int FUNC_5 (TYPE_5__*,TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_6__*,int ) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (int const*,int const*,int) ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_9, void *VAR_10, int *VAR_11,
                        AVPacket *VAR_12)
{
    const uint8_t *VAR_13 = VAR_12->data;
    int VAR_14 = VAR_12->size;
    CamtasiaContext * const VAR_15 = VAR_9->priv_data;
    AVFrame *VAR_16 = VAR_15->frame;
    int VAR_17;
    int VAR_18 = 0;

    if (VAR_15->avctx->pix_fmt == VAR_3) {
        int VAR_19;
        const uint8_t *VAR_20 = FUNC_2(VAR_12, VAR_4, &VAR_19);

        if (VAR_20 && VAR_19 == VAR_1) {
            VAR_18 = 1;
            FUNC_8(VAR_15->pal, VAR_20, VAR_1);
        } else if (VAR_20) {
            FUNC_1(VAR_9, VAR_2, "Palette size %d is wrong\n", VAR_19);
        }
    }

    VAR_17 = FUNC_7(&VAR_15->zstream);
    if (VAR_17 != VAR_7) {
        FUNC_1(VAR_9, VAR_2, "Inflate reset error: %d\n", VAR_17);
        return VAR_0;
    }
    VAR_15->zstream.next_in = VAR_13;
    VAR_15->zstream.avail_in = VAR_14;
    VAR_15->zstream.next_out = VAR_15->decomp_buf;
    VAR_15->zstream.avail_out = VAR_15->decomp_size;
    VAR_17 = FUNC_6(&VAR_15->zstream, VAR_6);

    if (VAR_17 == VAR_5 && !VAR_18) {
        return VAR_14;
    }

    if ((VAR_17 != VAR_7) && (VAR_17 != VAR_8) && (VAR_17 != VAR_5)) {
        FUNC_1(VAR_9, VAR_2, "Inflate error: %d\n", VAR_17);
        return VAR_0;
    }

    if ((VAR_17 = FUNC_5(VAR_9, VAR_16, 0)) < 0)
        return VAR_17;

    if (VAR_17 != VAR_5) {
        FUNC_3(&VAR_15->gb, VAR_15->decomp_buf,
                         VAR_15->decomp_size - VAR_15->zstream.avail_out);
        FUNC_4(VAR_9, VAR_16, VAR_15->bpp, &VAR_15->gb);
    }


    if (VAR_15->avctx->pix_fmt == VAR_3) {
        VAR_16->palette_has_changed = VAR_18;
        FUNC_8(VAR_16->data[1], VAR_15->pal, VAR_1);
    }

    if ((VAR_17 = FUNC_0(VAR_10, VAR_16)) < 0)
        return VAR_17;
    *VAR_11 = 1;


    return VAR_14;
}
