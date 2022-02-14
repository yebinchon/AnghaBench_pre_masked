
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct aom_image {size_t range; int fmt; int bit_depth; int monochrome; int tc; int mc; int cp; } ;
typedef enum AVColorRange { ____Placeholder_AVColorRange } AVColorRange ;
struct TYPE_3__ {int color_range; void* profile; int pix_fmt; int color_trc; int colorspace; int color_primaries; } ;
typedef TYPE_1__ AVCodecContext ;
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
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;

__attribute__((used)) static int FUNC_0(AVCodecContext *VAR_16, struct aom_image *VAR_17)
{
    static const enum AVColorRange VAR_18[] = {
        128, 129
    };
    VAR_16->color_range = VAR_18[VAR_17->range];
    VAR_16->color_primaries = VAR_17->cp;
    VAR_16->colorspace = VAR_17->mc;
    VAR_16->color_trc = VAR_17->tc;

    switch (VAR_17->fmt) {
    case 135:
    case 134:
        if (VAR_17->bit_depth == 8) {
            VAR_16->pix_fmt = VAR_17->monochrome ?
                             VAR_3 : VAR_4;
            VAR_16->profile = VAR_14;
            return 0;
        } else if (VAR_17->bit_depth == 10) {
            VAR_16->pix_fmt = VAR_17->monochrome ?
                             VAR_1 : VAR_5;
            VAR_16->profile = VAR_14;
            return 0;
        } else if (VAR_17->bit_depth == 12) {
            VAR_16->pix_fmt = VAR_17->monochrome ?
                             VAR_2 : VAR_6;
            VAR_16->profile = VAR_15;
            return 0;
        } else {
            return VAR_0;
        }
    case 133:
    case 132:
        if (VAR_17->bit_depth == 8) {
            VAR_16->pix_fmt = VAR_7;
            VAR_16->profile = VAR_15;
            return 0;
        } else if (VAR_17->bit_depth == 10) {
            VAR_16->pix_fmt = VAR_8;
            VAR_16->profile = VAR_15;
            return 0;
        } else if (VAR_17->bit_depth == 12) {
            VAR_16->pix_fmt = VAR_9;
            VAR_16->profile = VAR_15;
            return 0;
        } else {
            return VAR_0;
        }
    case 131:
    case 130:
        if (VAR_17->bit_depth == 8) {
            VAR_16->pix_fmt = VAR_10;
            VAR_16->profile = VAR_13;
            return 0;
        } else if (VAR_17->bit_depth == 10) {
            VAR_16->pix_fmt = VAR_11;
            VAR_16->profile = VAR_13;
            return 0;
        } else if (VAR_17->bit_depth == 12) {
            VAR_16->pix_fmt = VAR_12;
            VAR_16->profile = VAR_15;
            return 0;
        } else {
            return VAR_0;
        }

    default:
        return VAR_0;
    }
}
