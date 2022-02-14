
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;


typedef int opj_stream_t ;
typedef int opj_image_t ;
typedef int opj_codec_t ;
struct TYPE_35__ {int pix_fmt; TYPE_2__* priv_data; } ;
struct TYPE_34__ {int * linesize; int * data; } ;
struct TYPE_33__ {int flags; } ;
struct TYPE_32__ {int enc_params; int format; } ;
struct TYPE_31__ {int pos; TYPE_3__* packet; int member_0; } ;
typedef TYPE_1__ PacketWriter ;
typedef TYPE_2__ LibOpenJPEGContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ const AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__ const* FUNC_1 (TYPE_4__ const*) ;
 int FUNC_2 (TYPE_4__ const**) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (TYPE_5__*,int ,char*,...) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int VAR_6 ;
 int FUNC_6 (TYPE_5__*,TYPE_3__*,int,int ) ;
 int VAR_7 ;
 int FUNC_7 (TYPE_5__*,TYPE_4__ const*,int *) ;
 int FUNC_8 (TYPE_5__*,TYPE_4__ const*,int *) ;
 int FUNC_9 (TYPE_5__*,TYPE_4__ const*,int *) ;
 int FUNC_10 (TYPE_5__*,TYPE_4__ const*,int *) ;
 int FUNC_11 (TYPE_5__*,TYPE_4__ const*,int *) ;
 int * FUNC_12 (TYPE_5__*,int *) ;
 int * FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int ,TYPE_5__*) ;
 int FUNC_19 (int *,int ,TYPE_5__*) ;
 int FUNC_20 (int *,int ,TYPE_5__*) ;
 int FUNC_21 (int *,int *,int *) ;
 int FUNC_22 (int *,int *,int *) ;
 int * FUNC_23 (int ) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *,int ) ;
 int FUNC_26 (int *,int ) ;
 int FUNC_27 (int *,TYPE_1__*,int *) ;
 int FUNC_28 (int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_29(AVCodecContext *VAR_12, AVPacket *VAR_13,
                                    const AVFrame *VAR_14, int *VAR_15)
{
    LibOpenJPEGContext *VAR_16 = VAR_12->priv_data;
    int VAR_17;
    AVFrame *VAR_18;
    int VAR_19 = 0;
    PacketWriter VAR_20 = { 0 };
    opj_codec_t *VAR_21 = ((void*)0);
    opj_stream_t *VAR_22 = ((void*)0);
    opj_image_t *VAR_23 = FUNC_12(VAR_12, &VAR_16->enc_params);
    if (!VAR_23) {
        FUNC_4(VAR_12, VAR_1, "Error creating the mj2 image\n");
        VAR_17 = FUNC_0(VAR_3);
        goto done;
    }

    switch (VAR_12->pix_fmt) {
    case 167:
    case 165:
    case 161:
        VAR_19 = FUNC_9(VAR_12, VAR_14, VAR_23);
        break;
    case 163:
        VAR_19 = FUNC_7(VAR_12, VAR_14, VAR_23);
        break;
    case 166:
    case 164:
    case 162:
        VAR_19 = FUNC_8(VAR_12, VAR_14, VAR_23);
        break;
    case 178:
    case 173:
    case 177:
    case 176:
    case 175:
    case 174:
        VAR_18 = FUNC_1(VAR_14);
        if (!VAR_18) {
            VAR_17 = FUNC_0(VAR_4);
            goto done;
        }
        VAR_18->data[0] = VAR_14->data[2];
        VAR_18->data[1] = VAR_14->data[0];
        VAR_18->data[2] = VAR_14->data[1];
        VAR_18->linesize[0] = VAR_14->linesize[2];
        VAR_18->linesize[1] = VAR_14->linesize[0];
        VAR_18->linesize[2] = VAR_14->linesize[1];
        if (VAR_12->pix_fmt == 178) {
            VAR_19 = FUNC_11(VAR_12, VAR_18, VAR_23);
        } else {
            VAR_19 = FUNC_10(VAR_12, VAR_18, VAR_23);
        }
        FUNC_2(&VAR_18);
        break;
    case 168:
    case 160:
    case 159:
    case 158:
    case 152:
    case 146:
    case 145:
    case 139:
    case 135:
    case 131:
        VAR_19 = FUNC_11(VAR_12, VAR_14, VAR_23);
        break;
    case 172:
    case 171:
    case 170:
    case 169:
    case 153:
    case 147:
    case 140:
    case 136:
    case 132:
    case 128:
    case 144:
    case 151:
    case 157:
    case 130:
    case 134:
    case 138:
    case 156:
    case 150:
    case 143:
    case 155:
    case 149:
    case 142:
    case 141:
    case 148:
    case 154:
    case 129:
    case 133:
    case 137:
        VAR_19 = FUNC_10(VAR_12, VAR_14, VAR_23);
        break;
    default:
        FUNC_4(VAR_12, VAR_1,
               "The frame's pixel format '%s' is not supported\n",
               FUNC_3(VAR_12->pix_fmt));
        VAR_17 = FUNC_0(VAR_3);
        goto done;
        break;
    }

    if (!VAR_19) {
        FUNC_4(VAR_12, VAR_1,
               "Could not copy the frame data to the internal image buffer\n");
        VAR_17 = -1;
        goto done;
    }

    if ((VAR_17 = FUNC_6(VAR_12, VAR_13, 1024, 0)) < 0) {
        goto done;
    }

    VAR_21 = FUNC_13(VAR_16->format);
    if (!VAR_21) {
        FUNC_4(VAR_12, VAR_1, "Error creating the compressor\n");
        VAR_17 = FUNC_0(VAR_4);
        goto done;
    }

    if (!FUNC_18(VAR_21, VAR_6, VAR_12) ||
        !FUNC_20(VAR_21, VAR_11, VAR_12) ||
        !FUNC_19(VAR_21, VAR_7, VAR_12)) {
        FUNC_4(VAR_12, VAR_1, "Error setting the compressor handlers\n");
        VAR_17 = VAR_0;
        goto done;
    }

    if (!FUNC_21(VAR_21, &VAR_16->enc_params, VAR_23)) {
        FUNC_4(VAR_12, VAR_1, "Error setting up the compressor\n");
        VAR_17 = VAR_0;
        goto done;
    }
    VAR_22 = FUNC_23(VAR_5);

    if (!VAR_22) {
        FUNC_4(VAR_12, VAR_1, "Error creating the cio stream\n");
        VAR_17 = FUNC_0(VAR_4);
        goto done;
    }

    VAR_20.packet = VAR_13;
    FUNC_28(VAR_22, VAR_10);
    FUNC_26(VAR_22, VAR_9);
    FUNC_25(VAR_22, VAR_8);
    FUNC_27(VAR_22, &VAR_20, ((void*)0));

    if (!FUNC_22(VAR_21, VAR_23, VAR_22) ||
        !FUNC_15(VAR_21, VAR_22) ||
        !FUNC_16(VAR_21, VAR_22)) {
        FUNC_4(VAR_12, VAR_1, "Error during the opj encode\n");
        VAR_17 = VAR_0;
        goto done;
    }

    FUNC_5(VAR_13, VAR_20.pos);

    VAR_13->flags |= VAR_2;
    *VAR_15 = 1;
    VAR_17 = 0;

done:
    FUNC_24(VAR_22);
    FUNC_14(VAR_21);
    FUNC_17(VAR_23);
    return VAR_17;
}
