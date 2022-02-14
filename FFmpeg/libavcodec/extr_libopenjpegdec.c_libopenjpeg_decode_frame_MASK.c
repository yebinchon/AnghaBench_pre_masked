
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_47__ TYPE_9__ ;
typedef struct TYPE_46__ TYPE_8__ ;
typedef struct TYPE_45__ TYPE_7__ ;
typedef struct TYPE_44__ TYPE_6__ ;
typedef struct TYPE_43__ TYPE_5__ ;
typedef struct TYPE_42__ TYPE_4__ ;
typedef struct TYPE_41__ TYPE_3__ ;
typedef struct TYPE_40__ TYPE_2__ ;
typedef struct TYPE_39__ TYPE_1__ ;
typedef struct TYPE_38__ TYPE_12__ ;
typedef struct TYPE_37__ TYPE_10__ ;


typedef char uint8_t ;
typedef int opj_stream_t ;
struct TYPE_41__ {int x1; int x0; int y1; int y0; int numcomps; TYPE_1__* comps; } ;
typedef TYPE_3__ opj_image_t ;
typedef int opj_codec_t ;
struct TYPE_42__ {void* f; } ;
typedef TYPE_4__ ThreadFrame ;
struct TYPE_47__ {int key_frame; int pict_type; } ;
struct TYPE_46__ {char* data; int size; } ;
struct TYPE_45__ {TYPE_2__* comp; } ;
struct TYPE_44__ {int member_1; char* member_2; int member_0; } ;
struct TYPE_38__ {int cp_reduce; int cp_layer; } ;
struct TYPE_43__ {TYPE_12__ dec_params; int lowqual; } ;
struct TYPE_40__ {int step; } ;
struct TYPE_39__ {scalar_t__ prec; int data; } ;
struct TYPE_37__ {scalar_t__ bits_per_raw_sample; int pix_fmt; int lowres; TYPE_5__* priv_data; } ;
typedef TYPE_5__ LibOpenJPEGContext ;
typedef TYPE_6__ BufferReader ;
typedef TYPE_7__ AVPixFmtDescriptor ;
typedef TYPE_8__ AVPacket ;
typedef TYPE_9__ AVFrame ;
typedef TYPE_10__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_10__*,int ,char*,...) ;
 TYPE_7__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_10__*,char*,int) ;
 int VAR_12 ;
 int FUNC_4 (TYPE_10__*,int,int) ;
 int FUNC_5 (TYPE_10__*,TYPE_4__*,int ) ;
 int VAR_13 ;
 int FUNC_6 (TYPE_9__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_9__*,TYPE_3__*) ;
 int FUNC_8 (TYPE_9__*,TYPE_3__*) ;
 int FUNC_9 (TYPE_9__*,TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_3__*,int ) ;
 int * FUNC_13 (int ) ;
 int FUNC_14 (int *,int *,TYPE_3__*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (int *,int *,TYPE_3__**) ;
 int FUNC_18 (int *,int ,TYPE_10__*) ;
 int FUNC_19 (int *,int ,TYPE_10__*) ;
 int FUNC_20 (int *,int ,TYPE_10__*) ;
 int FUNC_21 (int *,TYPE_12__*) ;
 int * FUNC_22 (int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *,int ) ;
 int FUNC_25 (int *,int ) ;
 int FUNC_26 (int *,int ) ;
 int FUNC_27 (int *,TYPE_6__*,int *) ;
 int FUNC_28 (int *,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static int FUNC_29(AVCodecContext *VAR_18,
                                    void *VAR_19, int *VAR_20,
                                    AVPacket *VAR_21)
{
    uint8_t *VAR_22 = VAR_21->data;
    int VAR_23 = VAR_21->size;
    LibOpenJPEGContext *VAR_24 = VAR_18->priv_data;
    ThreadFrame VAR_25 = { .f = VAR_19 };
    AVFrame *VAR_26 = VAR_19;
    const AVPixFmtDescriptor *VAR_27;
    int VAR_28, VAR_29, VAR_30;
    int VAR_31 = 0;
    int VAR_32 = 0;
    int VAR_33;
    opj_image_t *VAR_34 = ((void*)0);
    BufferReader VAR_35 = {0, VAR_21->size, VAR_21->data};
    opj_codec_t *VAR_36 = ((void*)0);
    opj_stream_t *VAR_37 = ((void*)0);

    *VAR_20 = 0;


    if ((FUNC_0(VAR_22) == 12) &&
        (FUNC_0(VAR_22 + 4) == VAR_7) &&
        (FUNC_0(VAR_22 + 8) == VAR_8)) {
        VAR_36 = FUNC_13(VAR_10);
    } else {


        if (FUNC_0(VAR_22 + 4) == FUNC_0("jp2c"))
            VAR_22 += 8;
        VAR_36 = FUNC_13(VAR_9);
    }

    if (!VAR_36) {
        FUNC_1(VAR_18, VAR_4, "Error initializing decoder.\n");
        VAR_30 = VAR_0;
        goto done;
    }

    if (!FUNC_18(VAR_36, VAR_12, VAR_18) ||
        !FUNC_20(VAR_36, VAR_17, VAR_18) ||
        !FUNC_19(VAR_36, VAR_13, VAR_18)) {
        FUNC_1(VAR_18, VAR_4, "Error setting decoder handlers.\n");
        VAR_30 = VAR_0;
        goto done;
    }

    VAR_24->dec_params.cp_layer = VAR_24->lowqual;
    VAR_24->dec_params.cp_reduce = VAR_18->lowres;


    FUNC_21(VAR_36, &VAR_24->dec_params);

    VAR_37 = FUNC_22(VAR_11);

    if (!VAR_37) {
        FUNC_1(VAR_18, VAR_4,
               "Codestream could not be opened for reading.\n");
        VAR_30 = VAR_0;
        goto done;
    }

    FUNC_24(VAR_37, VAR_14);
    FUNC_26(VAR_37, VAR_16);
    FUNC_25(VAR_37, VAR_15);
    FUNC_27(VAR_37, &VAR_35, ((void*)0));
    FUNC_28(VAR_37, VAR_21->size);

    VAR_30 = !FUNC_17(VAR_37, VAR_36, &VAR_34);

    if (VAR_30) {
        FUNC_1(VAR_18, VAR_4, "Error decoding codestream header.\n");
        VAR_30 = VAR_0;
        goto done;
    }

    VAR_28 = VAR_34->x1 - VAR_34->x0;
    VAR_29 = VAR_34->y1 - VAR_34->y0;

    VAR_30 = FUNC_4(VAR_18, VAR_28, VAR_29);
    if (VAR_30 < 0)
        goto done;

    if (VAR_18->pix_fmt != VAR_6)
        if (!FUNC_12(VAR_34, VAR_18->pix_fmt))
            VAR_18->pix_fmt = VAR_6;

    if (VAR_18->pix_fmt == VAR_6)
        VAR_18->pix_fmt = FUNC_10(VAR_34);

    if (VAR_18->pix_fmt == VAR_6) {
        FUNC_1(VAR_18, VAR_4, "Unable to determine pixel format.\n");
        VAR_30 = VAR_3;
        goto done;
    }
    for (VAR_33 = 0; VAR_33 < VAR_34->numcomps; VAR_33++)
        if (VAR_34->comps[VAR_33].prec > VAR_18->bits_per_raw_sample)
            VAR_18->bits_per_raw_sample = VAR_34->comps[VAR_33].prec;

    if ((VAR_30 = FUNC_5(VAR_18, &VAR_25, 0)) < 0)
        goto done;

    VAR_30 = !FUNC_14(VAR_36, VAR_37, VAR_34);

    if (VAR_30) {
        FUNC_1(VAR_18, VAR_4, "Error decoding codestream.\n");
        VAR_30 = VAR_0;
        goto done;
    }

    for (VAR_33 = 0; VAR_33 < VAR_34->numcomps; VAR_33++) {
        if (!VAR_34->comps[VAR_33].data) {
            FUNC_1(VAR_18, VAR_4,
                   "Image component %d contains no data.\n", VAR_33);
            VAR_30 = VAR_1;
            goto done;
        }
    }

    VAR_27 = FUNC_2(VAR_18->pix_fmt);
    VAR_31 = VAR_27->comp[0].step;
    VAR_32 = FUNC_11(VAR_18->pix_fmt);

    switch (VAR_31) {
    case 1:
        if (VAR_32) {
            FUNC_7(VAR_26, VAR_34);
        } else {
            FUNC_9(VAR_26, VAR_34);
        }
        break;
    case 2:
        if (VAR_32) {
            FUNC_7(VAR_26, VAR_34);
        } else {
            FUNC_8(VAR_26, VAR_34);
        }
        break;
    case 3:
    case 4:
        if (VAR_32) {
            FUNC_7(VAR_26, VAR_34);
        }
        break;
    case 6:
    case 8:
        if (VAR_32) {
            FUNC_6(VAR_26, VAR_34);
        }
        break;
    default:
        FUNC_3(VAR_18, "Pixel size %d", VAR_31);
        VAR_30 = VAR_2;
        goto done;
    }

    *VAR_20 = 1;
    VAR_26->pict_type = VAR_5;
    VAR_26->key_frame = 1;
    VAR_30 = VAR_23;

done:
    FUNC_16(VAR_34);
    FUNC_23(VAR_37);
    FUNC_15(VAR_36);
    return VAR_30;
}
