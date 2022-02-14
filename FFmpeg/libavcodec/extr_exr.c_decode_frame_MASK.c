
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_16__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_20__ {void* f; } ;
typedef TYPE_2__ ThreadFrame ;
struct TYPE_24__ {scalar_t__ color_trc; int width; int height; int (* execute2 ) (TYPE_6__*,int ,int ,int *,int) ;int pix_fmt; TYPE_3__* priv_data; } ;
struct TYPE_23__ {int* linesize; int pict_type; int ** data; } ;
struct TYPE_22__ {int size; int * data; } ;
struct TYPE_19__ {int xSize; int ySize; } ;
struct TYPE_21__ {int pixel_type; scalar_t__ apply_trc_type; int compression; int scan_lines_per_block; scalar_t__ xmin; scalar_t__ xmax; int ymin; int ymax; int xdelta; scalar_t__ w; int h; int ydelta; int buf_size; int thread_data; TYPE_5__* picture; int * buf; int gb; TYPE_6__* avctx; scalar_t__ is_tile; TYPE_1__ tile_attr; TYPE_16__* desc; int is_luma; int * channel_offsets; } ;
struct TYPE_18__ {int nb_components; } ;
typedef int PutByteContext ;
typedef TYPE_3__ EXRContext ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVFrame ;
typedef TYPE_6__ AVCodecContext ;


 scalar_t__ VAR_0 ;
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
 int FUNC_0 (TYPE_6__*,int ,char*) ;
 TYPE_16__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_6__*,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int *,int) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int,int ) ;
 int FUNC_10 (int *) ;
 int VAR_11 ;
 int FUNC_11 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_12 (TYPE_6__*,scalar_t__,int) ;
 int FUNC_13 (TYPE_6__*,TYPE_2__*,int ) ;
 int FUNC_14 (int *,int ,int) ;
 int FUNC_15 (TYPE_6__*,int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_16(AVCodecContext *VAR_12, void *VAR_13,
                        int *VAR_14, AVPacket *VAR_15)
{
    EXRContext *VAR_16 = VAR_12->priv_data;
    ThreadFrame VAR_17 = { .f = VAR_13 };
    AVFrame *VAR_18 = VAR_13;
    uint8_t *VAR_19;

    int VAR_20, VAR_21;
    int VAR_22;
    int VAR_23;
    uint64_t VAR_24;
    uint64_t VAR_25;
    PutByteContext VAR_26;

    FUNC_5(&VAR_16->gb, VAR_15->data, VAR_15->size);

    if ((VAR_21 = FUNC_11(VAR_16, VAR_18)) < 0)
        return VAR_21;

    switch (VAR_16->pixel_type) {
    case 136:
    case 135:
    case 130:
        if (VAR_16->channel_offsets[3] >= 0) {
            if (!VAR_16->is_luma) {
                VAR_12->pix_fmt = VAR_8;
            } else {
                VAR_12->pix_fmt = VAR_9;
            }
        } else {
            if (!VAR_16->is_luma) {
                VAR_12->pix_fmt = VAR_7;
            } else {
                VAR_12->pix_fmt = VAR_6;
            }
        }
        break;
    default:
        FUNC_0(VAR_12, VAR_4, "Missing channel list.\n");
        return VAR_1;
    }

    if (VAR_16->apply_trc_type != VAR_0)
        VAR_12->color_trc = VAR_16->apply_trc_type;

    switch (VAR_16->compression) {
    case 132:
    case 131:
    case 129:
        VAR_16->scan_lines_per_block = 1;
        break;
    case 133:
    case 128:
        VAR_16->scan_lines_per_block = 16;
        break;
    case 134:
    case 138:
    case 137:
        VAR_16->scan_lines_per_block = 32;
        break;
    default:
        FUNC_2(VAR_12, "Compression %d", VAR_16->compression);
        return VAR_2;
    }



    if (VAR_16->xmin > VAR_16->xmax ||
        VAR_16->ymin > VAR_16->ymax ||
        VAR_16->xdelta != VAR_16->xmax - VAR_16->xmin + 1 ||
        VAR_16->xmax >= VAR_16->w ||
        VAR_16->ymax >= VAR_16->h) {
        FUNC_0(VAR_12, VAR_4, "Wrong or missing size information.\n");
        return VAR_1;
    }

    if ((VAR_21 = FUNC_12(VAR_12, VAR_16->w, VAR_16->h)) < 0)
        return VAR_21;

    VAR_16->desc = FUNC_1(VAR_12->pix_fmt);
    if (!VAR_16->desc)
        return VAR_1;
    VAR_22 = VAR_12->width * 2 * VAR_16->desc->nb_components;

    if (VAR_16->is_tile) {
        VAR_23 = ((VAR_16->xdelta + VAR_16->tile_attr.xSize - 1) / VAR_16->tile_attr.xSize) *
        ((VAR_16->ydelta + VAR_16->tile_attr.ySize - 1) / VAR_16->tile_attr.ySize);
    } else {
        VAR_23 = (VAR_16->ydelta + VAR_16->scan_lines_per_block - 1) /
        VAR_16->scan_lines_per_block;
    }

    if ((VAR_21 = FUNC_13(VAR_12, &VAR_17, 0)) < 0)
        return VAR_21;

    if (FUNC_3(&VAR_16->gb) < VAR_23 * 8)
        return VAR_1;


    if (!VAR_16->is_tile && FUNC_7(&VAR_16->gb) == 0) {
        FUNC_0(VAR_16->avctx, VAR_3, "recreating invalid scanline offset table\n");

        VAR_24 = FUNC_10(&VAR_16->gb);
        VAR_25 = VAR_24 + VAR_23 * 8;
        FUNC_6(&VAR_26, &VAR_15->data[VAR_24], VAR_23 * 8);

        for (VAR_20 = 0; VAR_20 < VAR_23; VAR_20++) {

            FUNC_8(&VAR_26, VAR_25);


            FUNC_9(&VAR_16->gb, VAR_25 + 4, VAR_10);
            VAR_25 += (FUNC_4(&VAR_16->gb) + 8);
        }
        FUNC_9(&VAR_16->gb, VAR_24, VAR_10);
    }


    VAR_16->buf = VAR_15->data;
    VAR_16->buf_size = VAR_15->size;
    VAR_19 = VAR_18->data[0];


    for (VAR_20 = 0; VAR_20 < VAR_16->ymin; VAR_20++) {
        FUNC_14(VAR_19, 0, VAR_22);
        VAR_19 += VAR_18->linesize[0];
    }

    VAR_16->picture = VAR_18;

    VAR_12->execute2(VAR_12, VAR_11, VAR_16->thread_data, ((void*)0), VAR_23);


    VAR_19 = VAR_18->data[0] + ((VAR_16->ymax+1) * VAR_18->linesize[0]);
    for (VAR_20 = VAR_16->ymax + 1; VAR_20 < VAR_12->height; VAR_20++) {
        FUNC_14(VAR_19, 0, VAR_22);
        VAR_19 += VAR_18->linesize[0];
    }

    VAR_18->pict_type = VAR_5;
    *VAR_14 = 1;

    return VAR_15->size;
}
