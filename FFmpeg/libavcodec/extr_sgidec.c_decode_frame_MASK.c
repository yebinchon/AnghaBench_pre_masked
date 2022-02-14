
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_16__ {int pix_fmt; TYPE_1__* priv_data; } ;
struct TYPE_15__ {int key_frame; int* linesize; int ** data; int pict_type; } ;
struct TYPE_14__ {int size; int data; } ;
struct TYPE_13__ {int bytes_per_channel; int height; int linesize; int g; void* width; void* depth; } ;
typedef TYPE_1__ SgiState ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
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
 void* VAR_10 ;
 scalar_t__ VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int FUNC_0 (TYPE_4__*,int ,char*,...) ;
 void* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,scalar_t__,int ) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_4__*,void*,int) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_10(AVCodecContext *VAR_15,
                        void *VAR_16, int *VAR_17,
                        AVPacket *VAR_18)
{
    SgiState *VAR_19 = VAR_15->priv_data;
    AVFrame *VAR_20 = VAR_16;
    unsigned int VAR_21, VAR_22;
    int VAR_23 = 0;
    uint8_t *VAR_24, *VAR_25;

    FUNC_4(&VAR_19->g, VAR_18->data, VAR_18->size);
    if (FUNC_2(&VAR_19->g) < VAR_11) {
        FUNC_0(VAR_15, VAR_1, "buf_size too small (%d)\n", VAR_18->size);
        return VAR_0;
    }


    if (FUNC_1(&VAR_19->g) != VAR_12) {
        FUNC_0(VAR_15, VAR_1, "bad magic number\n");
        return VAR_0;
    }

    VAR_22 = FUNC_3(&VAR_19->g);
    VAR_19->bytes_per_channel = FUNC_3(&VAR_19->g);
    VAR_21 = FUNC_1(&VAR_19->g);
    VAR_19->width = FUNC_1(&VAR_19->g);
    VAR_19->height = FUNC_1(&VAR_19->g);
    VAR_19->depth = FUNC_1(&VAR_19->g);

    if (VAR_19->bytes_per_channel != 1 && VAR_19->bytes_per_channel != 2) {
        FUNC_0(VAR_15, VAR_1, "wrong channel number\n");
        return VAR_0;
    }


    if (VAR_21 != 2 && VAR_21 != 3) {
        FUNC_0(VAR_15, VAR_1, "wrong dimension number\n");
        return VAR_0;
    }

    if (VAR_19->depth == VAR_10) {
        VAR_15->pix_fmt = VAR_19->bytes_per_channel == 2 ? VAR_3 : VAR_4;
    } else if (VAR_19->depth == VAR_13) {
        VAR_15->pix_fmt = VAR_19->bytes_per_channel == 2 ? VAR_6 : VAR_5;
    } else if (VAR_19->depth == VAR_14) {
        VAR_15->pix_fmt = VAR_19->bytes_per_channel == 2 ? VAR_8 : VAR_7;
    } else {
        FUNC_0(VAR_15, VAR_1, "wrong picture format\n");
        return VAR_0;
    }

    VAR_23 = FUNC_7(VAR_15, VAR_19->width, VAR_19->height);
    if (VAR_23 < 0)
        return VAR_23;

    if ((VAR_23 = FUNC_6(VAR_15, VAR_20, 0)) < 0)
        return VAR_23;

    VAR_20->pict_type = VAR_2;
    VAR_20->key_frame = 1;
    VAR_24 = VAR_20->data[0];

    VAR_25 = VAR_24 + VAR_20->linesize[0] * VAR_19->height;

    VAR_19->linesize = VAR_20->linesize[0];


    FUNC_5(&VAR_19->g, VAR_11, VAR_9);
    if (VAR_22) {
        VAR_23 = FUNC_8(VAR_25, VAR_19);
    } else {
        VAR_23 = FUNC_9(VAR_24, VAR_19);
    }
    if (VAR_23)
        return VAR_23;

    *VAR_17 = 1;
    return VAR_18->size;
}
