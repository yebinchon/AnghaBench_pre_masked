
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_21__ {void* f; } ;
typedef TYPE_3__ ThreadFrame ;
struct TYPE_25__ {int thread_count; scalar_t__ width; scalar_t__ height; scalar_t__ pix_fmt; int (* execute2 ) (TYPE_7__*,int ,TYPE_6__*,int *,int ) ;TYPE_4__* priv_data; } ;
struct TYPE_24__ {int key_frame; scalar_t__ interlaced_frame; int pict_type; } ;
struct TYPE_23__ {int size; int * data; } ;
struct TYPE_22__ {scalar_t__ width; scalar_t__ height; scalar_t__ pix_fmt; int buf_size; int data_offset; int bit_depth; int avctx; TYPE_2__* rows; scalar_t__ act; TYPE_1__* cid_table; int mb_height; int const* buf; } ;
struct TYPE_20__ {int format; scalar_t__ errors; } ;
struct TYPE_19__ {scalar_t__ coding_unit_size; } ;
typedef TYPE_4__ DNXHDContext ;
typedef TYPE_5__ AVPacket ;
typedef TYPE_6__ AVFrame ;
typedef TYPE_7__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_7__*,int ,char*,...) ;
 int FUNC_2 (TYPE_4__*,TYPE_6__*,int const*,int,int) ;
 int VAR_9 ;
 int FUNC_3 (TYPE_7__*,char*,int) ;
 int FUNC_4 (TYPE_7__*,scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_7__*,TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_7__*,int ,TYPE_6__*,int *,int ) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_10, void *VAR_11,
                              int *VAR_12, AVPacket *VAR_13)
{
    const uint8_t *VAR_14 = VAR_13->data;
    int VAR_15 = VAR_13->size;
    DNXHDContext *VAR_16 = VAR_10->priv_data;
    ThreadFrame VAR_17 = { .f = VAR_11 };
    AVFrame *VAR_18 = VAR_11;
    int VAR_19 = 1;
    int VAR_20, VAR_21;

    FUNC_3(VAR_10, "frame size %d\n", VAR_15);

    for (VAR_21 = 0; VAR_21 < VAR_10->thread_count; VAR_21++)
        VAR_16->rows[VAR_21].format = -1;

decode_coding_unit:
    if ((VAR_20 = FUNC_2(VAR_16, VAR_18, VAR_14, VAR_15, VAR_19)) < 0)
        return VAR_20;

    if ((VAR_10->width || VAR_10->height) &&
        (VAR_16->width != VAR_10->width || VAR_16->height != VAR_10->height)) {
        FUNC_1(VAR_10, VAR_2, "frame size changed: %dx%d -> %ux%u\n",
               VAR_10->width, VAR_10->height, VAR_16->width, VAR_16->height);
        VAR_19 = 1;
    }
    if (VAR_10->pix_fmt != VAR_6 && VAR_10->pix_fmt != VAR_16->pix_fmt) {
        FUNC_1(VAR_10, VAR_2, "pix_fmt changed: %s -> %s\n",
               FUNC_0(VAR_10->pix_fmt), FUNC_0(VAR_16->pix_fmt));
        VAR_19 = 1;
    }

    VAR_10->pix_fmt = VAR_16->pix_fmt;
    VAR_20 = FUNC_4(VAR_10, VAR_16->width, VAR_16->height);
    if (VAR_20 < 0)
        return VAR_20;

    if (VAR_19) {
        if ((VAR_20 = FUNC_5(VAR_10, &VAR_17, 0)) < 0)
            return VAR_20;
        VAR_18->pict_type = VAR_3;
        VAR_18->key_frame = 1;
    }

    VAR_16->buf_size = VAR_15 - VAR_16->data_offset;
    VAR_16->buf = VAR_14 + VAR_16->data_offset;
    VAR_10->execute2(VAR_10, VAR_9, VAR_18, ((void*)0), VAR_16->mb_height);

    if (VAR_19 && VAR_18->interlaced_frame) {
        VAR_14 += VAR_16->cid_table->coding_unit_size;
        VAR_15 -= VAR_16->cid_table->coding_unit_size;
        VAR_19 = 0;
        goto decode_coding_unit;
    }

    VAR_20 = 0;
    for (VAR_21 = 0; VAR_21 < VAR_10->thread_count; VAR_21++) {
        VAR_20 += VAR_16->rows[VAR_21].errors;
        VAR_16->rows[VAR_21].errors = 0;
    }

    if (VAR_16->act) {
        static int VAR_22;
        int VAR_23 = VAR_16->rows[0].format;
        for (VAR_21 = 1; VAR_21 < VAR_10->thread_count; VAR_21++) {
            if (VAR_16->rows[VAR_21].format != VAR_23 &&
                VAR_16->rows[VAR_21].format != -1 ) {
                VAR_23 = 2;
                break;
            }
        }
        switch (VAR_23) {
        case -1:
        case 2:
            if (!VAR_22) {
                VAR_22 = 1;
                FUNC_1(VAR_16->avctx, VAR_1,
                       "Unsupported: variable ACT flag.\n");
            }
            break;
        case 0:
            VAR_16->pix_fmt = VAR_16->bit_depth==10
                         ? VAR_4 : VAR_5;
            break;
        case 1:
            VAR_16->pix_fmt = VAR_16->bit_depth==10
                         ? VAR_7 : VAR_8;
            break;
        }
    }
    VAR_10->pix_fmt = VAR_16->pix_fmt;
    if (VAR_20) {
        FUNC_1(VAR_16->avctx, VAR_1, "%d lines with errors\n", VAR_20);
        return VAR_0;
    }

    *VAR_12 = 1;
    return VAR_13->size;
}
