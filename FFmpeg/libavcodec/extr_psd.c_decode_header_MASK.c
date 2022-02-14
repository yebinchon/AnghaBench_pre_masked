
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_7__ {int strict_std_compliance; } ;
struct TYPE_6__ {int channel_count; int height; int width; int compression; TYPE_2__* avctx; int gb; int * palette; int color_mode; void* channel_depth; } ;
typedef TYPE_1__ PSDContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char,char,char,char) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (TYPE_2__*,int ,char*,...) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 void* FUNC_4 (int *) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (TYPE_2__*,int,int) ;
 int FUNC_11 (int *,int,int ) ;

__attribute__((used)) static int FUNC_12(PSDContext * VAR_15)
{
    int VAR_16, VAR_17, VAR_18;
    int64_t VAR_19;
    int VAR_20 = 0;

    if (FUNC_6(&VAR_15->gb) < 30) {
        FUNC_2(VAR_15->avctx, VAR_4, "Header too short to parse.\n");
        return VAR_1;
    }

    VAR_16 = FUNC_8(&VAR_15->gb);
    if (VAR_16 != FUNC_1('8','B','P','S')) {
        FUNC_2(VAR_15->avctx, VAR_4, "Wrong signature %d.\n", VAR_16);
        return VAR_1;
    }

    VAR_17 = FUNC_4(&VAR_15->gb);
    if (VAR_17 != 1) {
        FUNC_2(VAR_15->avctx, VAR_4, "Wrong version %d.\n", VAR_17);
        return VAR_1;
    }

    FUNC_9(&VAR_15->gb, 6);

    VAR_15->channel_count = FUNC_4(&VAR_15->gb);
    if ((VAR_15->channel_count < 1) || (VAR_15->channel_count > 56)) {
        FUNC_2(VAR_15->avctx, VAR_4, "Invalid channel count %d.\n", VAR_15->channel_count);
        return VAR_1;
    }

    VAR_15->height = FUNC_5(&VAR_15->gb);

    if ((VAR_15->height > 30000) && (VAR_15->avctx->strict_std_compliance > VAR_5)) {
        FUNC_2(VAR_15->avctx, VAR_4,
               "Height > 30000 is experimental, add "
               "'-strict %d' if you want to try to decode the picture.\n",
               VAR_5);
        return VAR_0;
    }

    VAR_15->width = FUNC_5(&VAR_15->gb);
    if ((VAR_15->width > 30000) && (VAR_15->avctx->strict_std_compliance > VAR_5)) {
        FUNC_2(VAR_15->avctx, VAR_4,
               "Width > 30000 is experimental, add "
               "'-strict %d' if you want to try to decode the picture.\n",
               VAR_5);
        return VAR_0;
    }

    if ((VAR_20 = FUNC_10(VAR_15->avctx, VAR_15->width, VAR_15->height)) < 0)
        return VAR_20;

    VAR_15->channel_depth = FUNC_4(&VAR_15->gb);

    VAR_18 = FUNC_4(&VAR_15->gb);
    switch (VAR_18) {
    case 0:
        VAR_15->color_mode = VAR_7;
        break;
    case 1:
        VAR_15->color_mode = VAR_10;
        break;
    case 2:
        VAR_15->color_mode = VAR_11;
        break;
    case 3:
        VAR_15->color_mode = VAR_14;
        break;
    case 4:
        VAR_15->color_mode = VAR_8;
        break;
    case 7:
        VAR_15->color_mode = VAR_13;
        break;
    case 8:
        VAR_15->color_mode = VAR_9;
        break;
    case 9:
        VAR_15->color_mode = VAR_12;
        break;
    default:
        FUNC_2(VAR_15->avctx, VAR_4, "Unknown color mode %d.\n", VAR_18);
        return VAR_1;
    }


    VAR_19 = FUNC_5(&VAR_15->gb);
    if (VAR_19 < 0) {
        FUNC_2(VAR_15->avctx, VAR_4, "Negative size for color map data section.\n");
        return VAR_1;
    }

    if (FUNC_6(&VAR_15->gb) < (VAR_19 + 4)) {
        FUNC_2(VAR_15->avctx, VAR_4, "Incomplete file.\n");
        return VAR_1;
    }
    if (VAR_19) {
        int VAR_21,VAR_22;
        FUNC_11(VAR_15->palette, 0xff, VAR_3);
        for (VAR_22 = VAR_6; VAR_22 < 3 + VAR_6; VAR_22++)
            for (VAR_21 = 0; VAR_21 < FUNC_0(256, VAR_19 / 3); VAR_21++)
                VAR_15->palette[VAR_21 * 4 + (VAR_6 ? VAR_22 : 2 - VAR_22)] = FUNC_7(&VAR_15->gb);
        VAR_19 -= VAR_21 * 3;
    }
    FUNC_9(&VAR_15->gb, VAR_19);


    VAR_19 = FUNC_5(&VAR_15->gb);
    if (VAR_19 < 0) {
        FUNC_2(VAR_15->avctx, VAR_4, "Negative size for image ressources section.\n");
        return VAR_1;
    }

    if (FUNC_6(&VAR_15->gb) < (VAR_19 + 4)) {
        FUNC_2(VAR_15->avctx, VAR_4, "Incomplete file.\n");
        return VAR_1;
    }
    FUNC_9(&VAR_15->gb, VAR_19);


    VAR_19 = FUNC_5(&VAR_15->gb);
    if (VAR_19 < 0) {
        FUNC_2(VAR_15->avctx, VAR_4, "Negative size for layers and masks data section.\n");
        return VAR_1;
    }

    if (FUNC_6(&VAR_15->gb) < VAR_19) {
        FUNC_2(VAR_15->avctx, VAR_4, "Incomplete file.\n");
        return VAR_1;
    }
    FUNC_9(&VAR_15->gb, VAR_19);


    if (FUNC_6(&VAR_15->gb) < 2) {
        FUNC_2(VAR_15->avctx, VAR_4, "File without image data section.\n");
        return VAR_1;
    }

    VAR_15->compression = FUNC_4(&VAR_15->gb);
    switch (VAR_15->compression) {
    case 0:
    case 1:
        break;
    case 2:
        FUNC_3(VAR_15->avctx, "ZIP without predictor compression");
        return VAR_2;
    case 3:
        FUNC_3(VAR_15->avctx, "ZIP with predictor compression");
        return VAR_2;
    default:
        FUNC_2(VAR_15->avctx, VAR_4, "Unknown compression %d.\n", VAR_15->compression);
        return VAR_1;
    }

    return VAR_20;
}
