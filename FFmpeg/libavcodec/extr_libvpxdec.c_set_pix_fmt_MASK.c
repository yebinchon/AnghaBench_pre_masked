
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vpx_image {size_t range; size_t cs; int fmt; int bit_depth; } ;
typedef enum AVColorSpace { ____Placeholder_AVColorSpace } AVColorSpace ;
typedef enum AVColorRange { ____Placeholder_AVColorRange } AVColorRange ;
struct TYPE_3__ {int color_range; int colorspace; scalar_t__ codec_id; int pix_fmt; void* profile; } ;
typedef TYPE_1__ AVCodecContext ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
__attribute__((used)) static int FUNC_0(AVCodecContext *VAR_23, struct vpx_image *VAR_24,
                       int VAR_25)
{
    static const enum AVColorSpace VAR_26[8] = {
        136, 142, 141, 138,
        137, 143, 140, 139,
    };






    VAR_23->colorspace = VAR_26[VAR_24->cs];
    if (VAR_23->codec_id == VAR_1 && VAR_24->fmt != 135)
        return VAR_0;
    switch (VAR_24->fmt) {
    case 135:
        if (VAR_23->codec_id == VAR_2)
            VAR_23->profile = VAR_19;
        VAR_23->pix_fmt =
            VAR_25 ? VAR_18 : VAR_6;
        return 0;
    default:
        return VAR_0;
    }
}
