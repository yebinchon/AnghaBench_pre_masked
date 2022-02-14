
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nchsets; int nframesegs; int nsegsamples_log2; int nsegsamples; int nframesamples_log2; int nframesamples; int seg_size_nbits; int band_crc_present; int ch_mask_nbits; int fixed_lsb_width; int avctx; int gb; scalar_t__ scalable_lsbs; int frame_size; } ;
typedef TYPE_1__ DCAXllDecoder ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,char*,...) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (int ,int *,int,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8(DCAXllDecoder *VAR_8)
{
    int VAR_9, VAR_10, VAR_11, VAR_12;


    if (FUNC_7(&VAR_8->gb, 32) != VAR_4) {
        FUNC_1(VAR_8->avctx, VAR_3, "Invalid XLL sync word\n");
        return FUNC_0(VAR_7);
    }


    VAR_9 = FUNC_5(&VAR_8->gb, 4) + 1;
    if (VAR_9 > 1) {
        FUNC_2(VAR_8->avctx, "XLL stream version %d", VAR_9);
        return VAR_1;
    }


    VAR_10 = FUNC_5(&VAR_8->gb, 8) + 1;


    if (FUNC_3(VAR_8->avctx, &VAR_8->gb, 32, VAR_10 * 8)) {
        FUNC_1(VAR_8->avctx, VAR_2, "Invalid XLL common header checksum\n");
        return VAR_0;
    }


    VAR_11 = FUNC_5(&VAR_8->gb, 5) + 1;


    VAR_8->frame_size = FUNC_7(&VAR_8->gb, VAR_11);
    if (VAR_8->frame_size < 0 || VAR_8->frame_size >= VAR_6) {
        FUNC_1(VAR_8->avctx, VAR_2, "Invalid XLL frame size (%d bytes)\n", VAR_8->frame_size);
        return VAR_0;
    }
    VAR_8->frame_size++;


    VAR_8->nchsets = FUNC_5(&VAR_8->gb, 4) + 1;
    if (VAR_8->nchsets > VAR_5) {
        FUNC_2(VAR_8->avctx, "%d XLL channel sets", VAR_8->nchsets);
        return VAR_1;
    }


    VAR_12 = FUNC_5(&VAR_8->gb, 4);
    VAR_8->nframesegs = 1 << VAR_12;
    if (VAR_8->nframesegs > 1024) {
        FUNC_1(VAR_8->avctx, VAR_2, "Too many segments per XLL frame\n");
        return VAR_0;
    }




    VAR_8->nsegsamples_log2 = FUNC_5(&VAR_8->gb, 4);
    if (!VAR_8->nsegsamples_log2) {
        FUNC_1(VAR_8->avctx, VAR_2, "Too few samples per XLL segment\n");
        return VAR_0;
    }
    VAR_8->nsegsamples = 1 << VAR_8->nsegsamples_log2;
    if (VAR_8->nsegsamples > 512) {
        FUNC_1(VAR_8->avctx, VAR_2, "Too many samples per XLL segment\n");
        return VAR_0;
    }


    VAR_8->nframesamples_log2 = VAR_8->nsegsamples_log2 + VAR_12;
    VAR_8->nframesamples = 1 << VAR_8->nframesamples_log2;
    if (VAR_8->nframesamples > 65536) {
        FUNC_1(VAR_8->avctx, VAR_2, "Too many samples per XLL frame\n");
        return VAR_0;
    }


    VAR_8->seg_size_nbits = FUNC_5(&VAR_8->gb, 5) + 1;






    VAR_8->band_crc_present = FUNC_5(&VAR_8->gb, 2);


    VAR_8->scalable_lsbs = FUNC_6(&VAR_8->gb);


    VAR_8->ch_mask_nbits = FUNC_5(&VAR_8->gb, 5) + 1;


    if (VAR_8->scalable_lsbs)
        VAR_8->fixed_lsb_width = FUNC_5(&VAR_8->gb, 4);
    else
        VAR_8->fixed_lsb_width = 0;




    if (FUNC_4(&VAR_8->gb, VAR_10 * 8)) {
        FUNC_1(VAR_8->avctx, VAR_2, "Read past end of XLL common header\n");
        return VAR_0;
    }

    return 0;
}
