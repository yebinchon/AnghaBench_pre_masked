
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {int width; int height; int bits_per_raw_sample; int color_primaries; int color_trc; int colorspace; int color_range; int pix_fmt; scalar_t__ skip_alpha; } ;
struct TYPE_11__ {int idct_permutation; } ;
struct TYPE_12__ {int frame_type; int alpha_info; int qmat_chroma; TYPE_2__ prodsp; int qmat_luma; TYPE_1__* frame; int interlaced_scan; int scan; int progressive_scan; } ;
struct TYPE_10__ {int interlaced_frame; int top_field_first; } ;
typedef TYPE_3__ ProresContext ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_4__*,int ,char*,...) ;
 int FUNC_2 (TYPE_4__*,char*,...) ;
 int FUNC_3 (TYPE_4__*,int,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int ,int const*) ;

__attribute__((used)) static int FUNC_6(ProresContext *VAR_13, const uint8_t *VAR_14,
                               const int VAR_15, AVCodecContext *VAR_16)
{
    int VAR_17, VAR_18, VAR_19, VAR_20;
    int VAR_21;
    const uint8_t *VAR_22;

    VAR_17 = FUNC_0(VAR_14);
    FUNC_2(VAR_16, "header size %d\n", VAR_17);
    if (VAR_17 > VAR_15) {
        FUNC_1(VAR_16, VAR_3, "error, wrong header size\n");
        return VAR_1;
    }

    VAR_21 = FUNC_0(VAR_14 + 2);
    FUNC_2(VAR_16, "%.4s version %d\n", VAR_14+4, VAR_21);
    if (VAR_21 > 1) {
        FUNC_1(VAR_16, VAR_3, "unsupported version: %d\n", VAR_21);
        return VAR_2;
    }

    VAR_18 = FUNC_0(VAR_14 + 8);
    VAR_19 = FUNC_0(VAR_14 + 10);

    if (VAR_18 != VAR_16->width || VAR_19 != VAR_16->height) {
        int VAR_23;

        FUNC_1(VAR_16, VAR_4, "picture resolution change: %dx%d -> %dx%d\n",
               VAR_16->width, VAR_16->height, VAR_18, VAR_19);
        if ((VAR_23 = FUNC_3(VAR_16, VAR_18, VAR_19)) < 0)
            return VAR_23;
    }

    VAR_13->frame_type = (VAR_14[12] >> 2) & 3;
    VAR_13->alpha_info = VAR_14[17] & 0xf;

    if (VAR_13->alpha_info > 2) {
        FUNC_1(VAR_16, VAR_3, "Invalid alpha mode %d\n", VAR_13->alpha_info);
        return VAR_1;
    }
    if (VAR_16->skip_alpha) VAR_13->alpha_info = 0;

    FUNC_2(VAR_16, "frame type %d\n", VAR_13->frame_type);

    if (VAR_13->frame_type == 0) {
        VAR_13->scan = VAR_13->progressive_scan;
    } else {
        VAR_13->scan = VAR_13->interlaced_scan;
        VAR_13->frame->interlaced_frame = 1;
        VAR_13->frame->top_field_first = VAR_13->frame_type == 1;
    }

    if (VAR_13->alpha_info) {
        if (VAR_16->bits_per_raw_sample == 10) {
            VAR_16->pix_fmt = (VAR_14[12] & 0xC0) == 0xC0 ? VAR_11 : VAR_9;
        } else {
            VAR_16->pix_fmt = (VAR_14[12] & 0xC0) == 0xC0 ? VAR_12 : VAR_10;
        }
    } else {
        if (VAR_16->bits_per_raw_sample == 10) {
            VAR_16->pix_fmt = (VAR_14[12] & 0xC0) == 0xC0 ? VAR_7 : VAR_5;
        } else {
            VAR_16->pix_fmt = (VAR_14[12] & 0xC0) == 0xC0 ? VAR_8 : VAR_6;
        }
    }

    VAR_16->color_primaries = VAR_14[14];
    VAR_16->color_trc = VAR_14[15];
    VAR_16->colorspace = VAR_14[16];
    VAR_16->color_range = VAR_0;

    VAR_22 = VAR_14 + 20;
    VAR_20 = VAR_14[19];
    FUNC_2(VAR_16, "flags %x\n", VAR_20);

    if (VAR_20 & 2) {
        if(VAR_14 + VAR_15 - VAR_22 < 64) {
            FUNC_1(VAR_16, VAR_3, "Header truncated\n");
            return VAR_1;
        }
        FUNC_5(VAR_13->qmat_luma, VAR_13->prodsp.idct_permutation, VAR_22);
        VAR_22 += 64;
    } else {
        FUNC_4(VAR_13->qmat_luma, 4, 64);
    }

    if (VAR_20 & 1) {
        if(VAR_14 + VAR_15 - VAR_22 < 64) {
            FUNC_1(VAR_16, VAR_3, "Header truncated\n");
            return VAR_1;
        }
        FUNC_5(VAR_13->qmat_chroma, VAR_13->prodsp.idct_permutation, VAR_22);
    } else {
        FUNC_4(VAR_13->qmat_chroma, 4, 64);
    }

    return VAR_17;
}
