
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_16__ {scalar_t__ pix_fmt; } ;
struct TYPE_15__ {int palette_has_changed; int key_frame; int pict_type; int * linesize; scalar_t__* data; } ;
struct TYPE_14__ {int size; scalar_t__ data; } ;
struct TYPE_13__ {int format; unsigned int width; unsigned int height; } ;
typedef TYPE_1__ PixHeader ;
typedef int GetByteContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int FUNC_0 (scalar_t__,int ,scalar_t__,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (TYPE_4__*,int ,char*,...) ;
 int FUNC_2 (TYPE_4__*,char*,...) ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,scalar_t__,int) ;
 int FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_10 (TYPE_4__*,unsigned int,unsigned int) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (TYPE_1__*,int *) ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_13(AVCodecContext *VAR_16, void *VAR_17, int *VAR_18,
                            AVPacket *VAR_19)
{
    AVFrame *VAR_20 = VAR_17;

    int VAR_21, VAR_22;
    GetByteContext VAR_23;

    unsigned int VAR_24;
    unsigned int VAR_25[4];
    unsigned int VAR_26;
    unsigned int VAR_27;
    unsigned int VAR_28;
    unsigned int VAR_29;
    PixHeader VAR_30;

    FUNC_6(&VAR_23, VAR_19->data, VAR_19->size);

    VAR_25[0] = FUNC_3(&VAR_23);
    VAR_25[1] = FUNC_3(&VAR_23);
    VAR_25[2] = FUNC_3(&VAR_23);
    VAR_25[3] = FUNC_3(&VAR_23);

    if (VAR_25[0] != 0x12 ||
        VAR_25[1] != 0x08 ||
        VAR_25[2] != 0x02 ||
        VAR_25[3] != 0x02) {
        FUNC_1(VAR_16, VAR_2, "Not a BRender PIX file.\n");
        return VAR_0;
    }

    VAR_26 = FUNC_3(&VAR_23);
    if (VAR_26 != VAR_12 && VAR_26 != VAR_13) {
        FUNC_1(VAR_16, VAR_2, "Invalid chunk type %d.\n", VAR_26);
        return VAR_0;
    }

    VAR_21 = FUNC_12(&VAR_30, &VAR_23);
    if (VAR_21 < 0) {
        FUNC_1(VAR_16, VAR_2, "Invalid header length.\n");
        return VAR_21;
    }
    switch (VAR_30.format) {
    case 3:
        VAR_16->pix_fmt = VAR_7;
        VAR_24 = 1;
        break;
    case 4:
        VAR_16->pix_fmt = VAR_9;
        VAR_24 = 2;
        break;
    case 5:
        VAR_16->pix_fmt = VAR_10;
        VAR_24 = 2;
        break;
    case 6:
        VAR_16->pix_fmt = VAR_8;
        VAR_24 = 3;
        break;
    case 7:
        VAR_16->pix_fmt = VAR_5;
        VAR_24 = 4;
        break;
    case 8:
        VAR_16->pix_fmt = VAR_6;
        VAR_24 = 4;
        break;
    case 18:
        VAR_16->pix_fmt = VAR_11;
        VAR_24 = 2;
        break;
    default:
        FUNC_2(VAR_16, "Format %d", VAR_30.format);
        return VAR_1;
    }
    VAR_28 = VAR_24 * VAR_30.width;

    if (FUNC_5(&VAR_23) < VAR_30.height * VAR_28)
        return VAR_0;

    if ((VAR_21 = FUNC_10(VAR_16, VAR_30.width, VAR_30.height)) < 0)
        return VAR_21;

    if ((VAR_21 = FUNC_9(VAR_16, VAR_20, 0)) < 0)
        return VAR_21;

    VAR_26 = FUNC_3(&VAR_23);

    if (VAR_16->pix_fmt == VAR_7 &&
        (VAR_26 == VAR_12 ||
         VAR_26 == VAR_13)) {

        PixHeader VAR_31;
        uint32_t *VAR_32 = (uint32_t *)VAR_20->data[1];

        VAR_21 = FUNC_12(&VAR_31, &VAR_23);
        if (VAR_21 < 0) {
            FUNC_1(VAR_16, VAR_2, "Invalid palette header length.\n");
            return VAR_21;
        }
        if (VAR_31.format != 7)
            FUNC_2(VAR_16, "Palette not in RGB format");

        VAR_26 = FUNC_3(&VAR_23);
        VAR_27 = FUNC_3(&VAR_23);
        FUNC_7(&VAR_23, 8);
        if (VAR_26 != VAR_14 || VAR_27 != 1032 ||
            FUNC_5(&VAR_23) < 1032) {
            FUNC_1(VAR_16, VAR_2, "Invalid palette data.\n");
            return VAR_0;
        }


        for (VAR_22 = 0; VAR_22 < 256; ++VAR_22)
            *VAR_32++ = (0xFFU << 24) | FUNC_4(&VAR_23);
        FUNC_7(&VAR_23, 8);

        VAR_20->palette_has_changed = 1;

        VAR_26 = FUNC_3(&VAR_23);
    } else if (VAR_16->pix_fmt == VAR_7) {

        uint32_t *VAR_33 = (uint32_t *)VAR_20->data[1];


        FUNC_1(VAR_16, VAR_3,
               "Using default palette, colors might be off.\n");
        FUNC_11(VAR_33, VAR_15, sizeof(uint32_t) * 256);

        VAR_20->palette_has_changed = 1;
    }

    VAR_27 = FUNC_3(&VAR_23);
    FUNC_7(&VAR_23, 8);


    VAR_29 = FUNC_5(&VAR_23);

    if (VAR_26 != VAR_14 || VAR_27 != VAR_29 ||
        VAR_29 / VAR_28 < VAR_30.height) {
        FUNC_1(VAR_16, VAR_2, "Invalid image data.\n");
        return VAR_0;
    }

    FUNC_0(VAR_20->data[0], VAR_20->linesize[0],
                        VAR_19->data + FUNC_8(&VAR_23),
                        VAR_28,
                        VAR_28, VAR_30.height);

    VAR_20->pict_type = VAR_4;
    VAR_20->key_frame = 1;
    *VAR_18 = 1;

    return VAR_19->size;
}
