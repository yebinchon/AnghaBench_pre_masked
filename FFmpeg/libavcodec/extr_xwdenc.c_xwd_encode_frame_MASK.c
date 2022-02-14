
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int pal ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_16__ {int pix_fmt; int width; int height; } ;
struct TYPE_15__ {int key_frame; int** data; int * linesize; int pict_type; } ;
struct TYPE_14__ {int* data; int flags; } ;
struct TYPE_13__ {int flags; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int) ;
 int* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (TYPE_4__*,int ,char*) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (int*,int) ;
 int FUNC_6 (int**,int) ;
 int FUNC_7 (int**,int) ;
 int FUNC_8 (int**,int*,int) ;
 int FUNC_9 (int**,int) ;
 int FUNC_10 (TYPE_4__*,TYPE_2__*,int,int ) ;
 int FUNC_11 (int*,int*,int) ;

__attribute__((used)) static int FUNC_12(AVCodecContext *VAR_14, AVPacket *VAR_15,
                            const AVFrame *VAR_16, int *VAR_17)
{
    enum AVPixelFormat VAR_18 = VAR_14->pix_fmt;
    const AVPixFmtDescriptor *VAR_19 = FUNC_4(VAR_18);
    uint32_t VAR_20, VAR_21, VAR_22, VAR_23 = 0, VAR_24, VAR_25, VAR_26 = 0;
    uint32_t VAR_27[3] = { 0 }, VAR_28 = 0;
    uint32_t VAR_29;
    int VAR_30, VAR_31, VAR_32;
    uint8_t *VAR_33, *VAR_34;
    AVFrame * const VAR_35 = (AVFrame *)VAR_16;
    uint32_t VAR_36[256];

    VAR_20 = FUNC_2(VAR_19);
    if (VAR_19->flags & VAR_2)
        VAR_26 = 1;
    switch (VAR_18) {
    case 147:
    case 139:
    case 128:
    case 148:
        if (VAR_18 == 147 ||
            VAR_18 == 148)
            VAR_26 = 1;
        if (VAR_18 == 148 ||
            VAR_18 == 128) {
            VAR_27[0] = 0xFF;
            VAR_27[1] = 0xFF00;
            VAR_27[2] = 0xFF0000;
        } else {
            VAR_27[0] = 0xFF0000;
            VAR_27[1] = 0xFF00;
            VAR_27[2] = 0xFF;
        }
        VAR_21 = 32;
        VAR_20 = 24;
        VAR_25 = VAR_11;
        VAR_22 = 32;
        break;
    case 146:
    case 135:
        if (VAR_18 == 135)
            VAR_26 = 1;
        VAR_21 = 24;
        VAR_25 = VAR_11;
        VAR_22 = 32;
        VAR_27[0] = 0xFF0000;
        VAR_27[1] = 0xFF00;
        VAR_27[2] = 0xFF;
        break;
    case 130:
    case 131:
    case 141:
    case 142:
        if (VAR_18 == 141 ||
            VAR_18 == 142) {
            VAR_27[0] = 0x1F;
            VAR_27[1] = 0x7E0;
            VAR_27[2] = 0xF800;
        } else {
            VAR_27[0] = 0xF800;
            VAR_27[1] = 0x7E0;
            VAR_27[2] = 0x1F;
        }
        VAR_21 = 16;
        VAR_25 = VAR_11;
        VAR_22 = 16;
        break;
    case 132:
    case 133:
    case 143:
    case 144:
        if (VAR_18 == 143 ||
            VAR_18 == 144) {
            VAR_27[0] = 0x1F;
            VAR_27[1] = 0x3E0;
            VAR_27[2] = 0x7C00;
        } else {
            VAR_27[0] = 0x7C00;
            VAR_27[1] = 0x3E0;
            VAR_27[2] = 0x1F;
        }
        VAR_21 = 16;
        VAR_25 = VAR_11;
        VAR_22 = 16;
        break;
    case 129:
    case 140:
    case 134:
    case 145:
    case 136:
        VAR_21 = 8;
        VAR_25 = VAR_9;
        VAR_22 = 8;
        VAR_23 = 256;
        break;
    case 138:
        VAR_21 = 8;
        VAR_22 = 8;
        VAR_25 = VAR_10;
        break;
    case 137:
        VAR_26 = 1;
        VAR_28 = 1;
        VAR_21 = 1;
        VAR_22 = 8;
        VAR_25 = VAR_10;
        break;
    default:
        FUNC_3(VAR_14, VAR_0, "unsupported pixel format\n");
        return FUNC_0(VAR_4);
    }

    VAR_24 = FUNC_1(VAR_21 * VAR_14->width, VAR_22) / 8;
    VAR_29 = VAR_8 + VAR_6;
    VAR_31 = VAR_29 + VAR_23 * VAR_7 + VAR_14->height * VAR_24;

    if ((VAR_32 = FUNC_10(VAR_14, VAR_15, VAR_31, 0)) < 0)
        return VAR_32;
    VAR_34 = VAR_15->data;

    VAR_35->key_frame = 1;
    VAR_35->pict_type = VAR_1;

    FUNC_7(&VAR_34, VAR_29);
    FUNC_7(&VAR_34, VAR_12);
    FUNC_7(&VAR_34, VAR_13);
    FUNC_7(&VAR_34, VAR_20);
    FUNC_7(&VAR_34, VAR_14->width);
    FUNC_7(&VAR_34, VAR_14->height);
    FUNC_7(&VAR_34, 0);
    FUNC_7(&VAR_34, VAR_26);
    FUNC_7(&VAR_34, 32);
    FUNC_7(&VAR_34, VAR_28);
    FUNC_7(&VAR_34, VAR_22);
    FUNC_7(&VAR_34, VAR_21);
    FUNC_7(&VAR_34, VAR_24);
    FUNC_7(&VAR_34, VAR_25);
    FUNC_7(&VAR_34, VAR_27[0]);
    FUNC_7(&VAR_34, VAR_27[1]);
    FUNC_7(&VAR_34, VAR_27[2]);
    FUNC_7(&VAR_34, 8);
    FUNC_7(&VAR_34, VAR_23);
    FUNC_7(&VAR_34, VAR_23);
    FUNC_7(&VAR_34, VAR_14->width);
    FUNC_7(&VAR_34, VAR_14->height);
    FUNC_7(&VAR_34, 0);
    FUNC_7(&VAR_34, 0);
    FUNC_7(&VAR_34, 0);
    FUNC_8(&VAR_34, VAR_5, VAR_6);

    if (VAR_18 == 136) {
        FUNC_11(VAR_36, VAR_35->data[1], sizeof(VAR_36));
    } else {
        FUNC_5(VAR_36, VAR_18);
    }

    for (VAR_30 = 0; VAR_30 < VAR_23; VAR_30++) {
        uint32_t VAR_37;
        uint8_t VAR_38, VAR_39, VAR_40;

        VAR_37 = VAR_36[VAR_30];
        VAR_38 = (VAR_37 >> 16) & 0xFF;
        VAR_39 = (VAR_37 >> 8) & 0xFF;
        VAR_40 = VAR_37 & 0xFF;

        FUNC_7(&VAR_34, VAR_30);
        FUNC_6(&VAR_34, VAR_38 << 8);
        FUNC_6(&VAR_34, VAR_39 << 8);
        FUNC_6(&VAR_34, VAR_40 << 8);
        FUNC_9(&VAR_34, 0x7);
        FUNC_9(&VAR_34, 0);
    }

    VAR_33 = VAR_35->data[0];
    for (VAR_30 = 0; VAR_30 < VAR_14->height; VAR_30++) {
        FUNC_8(&VAR_34, VAR_33, VAR_24);
        VAR_33 += VAR_35->linesize[0];
    }

    VAR_15->flags |= VAR_3;
    *VAR_17 = 1;
    return 0;
}
