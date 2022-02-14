
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_20__ {int pix_fmt; scalar_t__ codec_id; } ;
struct TYPE_19__ {int key_frame; int interlaced_frame; int * data; int * linesize; int pict_type; } ;
struct TYPE_17__ {int avail_out; scalar_t__ next_out; } ;
struct TYPE_18__ {int bit_depth; int hdr_state; int pic_state; int channels; scalar_t__ color_type; int bits_per_pixel; int bpp; int row_size; int cur_w; scalar_t__ last_dispose_op; int crow_size; int pass_row_size; int gb; scalar_t__ has_trns; scalar_t__ crow_buf; TYPE_1__ zstream; scalar_t__ buffer; int buffer_size; scalar_t__ tmp_row; int tmp_row_size; scalar_t__ interlace_type; int last_row; int last_row_size; int palette; int image_linesize; int image_buf; scalar_t__ pass; int previous_picture; int picture; int height; int width; } ;
typedef TYPE_2__ PNGDecContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;
 int VAR_8 ;


 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (scalar_t__*,int *,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (TYPE_4__*,int ,char*) ;
 int FUNC_4 (TYPE_4__*,char*,int,scalar_t__) ;
 int FUNC_5 (TYPE_4__*,char*,int,scalar_t__) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (TYPE_4__*,char*,int,int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,int,int) ;
 int FUNC_10 (TYPE_4__*,int ,int ) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*,int *,int ) ;
 int FUNC_13 (TYPE_4__*,int *) ;
 int FUNC_14 (int ,int ,int) ;
 int FUNC_15 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_16(AVCodecContext *VAR_21, PNGDecContext *VAR_22,
                             uint32_t VAR_23, AVFrame *VAR_24)
{
    int VAR_25;
    size_t VAR_26 = VAR_22->bit_depth > 8 ? 2 : 1;

    if (!(VAR_22->hdr_state & VAR_20)) {
        FUNC_3(VAR_21, VAR_5, "IDAT without IHDR\n");
        return VAR_1;
    }
    if (!(VAR_22->pic_state & VAR_19)) {

        VAR_25 = FUNC_10(VAR_21, VAR_22->width, VAR_22->height);
        if (VAR_25 < 0)
            return VAR_25;

        VAR_22->channels = FUNC_8(VAR_22->color_type);
        VAR_22->bits_per_pixel = VAR_22->bit_depth * VAR_22->channels;
        VAR_22->bpp = (VAR_22->bits_per_pixel + 7) >> 3;
        VAR_22->row_size = (VAR_22->cur_w * VAR_22->bits_per_pixel + 7) >> 3;

        if ((VAR_22->bit_depth == 2 || VAR_22->bit_depth == 4 || VAR_22->bit_depth == 8) &&
                VAR_22->color_type == VAR_17) {
            VAR_21->pix_fmt = 129;
        } else if ((VAR_22->bit_depth == 2 || VAR_22->bit_depth == 4 || VAR_22->bit_depth == 8) &&
                VAR_22->color_type == VAR_18) {
            VAR_21->pix_fmt = VAR_9;
        } else if ((VAR_22->bit_depth == 2 || VAR_22->bit_depth == 4 || VAR_22->bit_depth == 8) &&
                VAR_22->color_type == VAR_14) {
            VAR_21->pix_fmt = 130;
        } else if (VAR_22->bit_depth == 16 &&
                VAR_22->color_type == VAR_14) {
            VAR_21->pix_fmt = 131;
        } else if (VAR_22->bit_depth == 16 &&
                VAR_22->color_type == VAR_17) {
            VAR_21->pix_fmt = 128;
        } else if (VAR_22->bit_depth == 16 &&
                VAR_22->color_type == VAR_18) {
            VAR_21->pix_fmt = VAR_10;
        } else if ((VAR_22->bits_per_pixel == 1 || VAR_22->bits_per_pixel == 2 || VAR_22->bits_per_pixel == 4 || VAR_22->bits_per_pixel == 8) &&
                VAR_22->color_type == VAR_16) {
            VAR_21->pix_fmt = VAR_8;
        } else if (VAR_22->bit_depth == 1 && VAR_22->bits_per_pixel == 1 && VAR_21->codec_id != VAR_3) {
            VAR_21->pix_fmt = VAR_7;
        } else if (VAR_22->bit_depth == 8 &&
                VAR_22->color_type == VAR_15) {
            VAR_21->pix_fmt = VAR_12;
        } else if (VAR_22->bit_depth == 16 &&
                VAR_22->color_type == VAR_15) {
            VAR_21->pix_fmt = VAR_11;
        } else {
            FUNC_4(VAR_21,
                                          "Bit depth %d color type %d",
                                          VAR_22->bit_depth, VAR_22->color_type);
            return VAR_2;
        }

        if (VAR_22->has_trns && VAR_22->color_type != VAR_16) {
            switch (VAR_21->pix_fmt) {
            case 129:
                VAR_21->pix_fmt = VAR_9;
                break;

            case 128:
                VAR_21->pix_fmt = VAR_10;
                break;

            case 130:
                VAR_21->pix_fmt = VAR_12;
                break;

            case 131:
                VAR_21->pix_fmt = VAR_11;
                break;

            default:
                FUNC_5(VAR_21, "bit depth %d "
                        "and color type %d with TRNS",
                        VAR_22->bit_depth, VAR_22->color_type);
                return VAR_1;
            }

            VAR_22->bpp += VAR_26;
        }

        if ((VAR_25 = FUNC_12(VAR_21, &VAR_22->picture, VAR_4)) < 0)
            return VAR_25;
        if (VAR_21->codec_id == VAR_3 && VAR_22->last_dispose_op != VAR_0) {
            FUNC_13(VAR_21, &VAR_22->previous_picture);
            if ((VAR_25 = FUNC_12(VAR_21, &VAR_22->previous_picture, VAR_4)) < 0)
                return VAR_25;
        }
        VAR_24->pict_type = VAR_6;
        VAR_24->key_frame = 1;
        VAR_24->interlaced_frame = !!VAR_22->interlace_type;

        FUNC_11(VAR_21);


        if (!VAR_22->interlace_type) {
            VAR_22->crow_size = VAR_22->row_size + 1;
        } else {
            VAR_22->pass = 0;
            VAR_22->pass_row_size = FUNC_9(VAR_22->pass,
                    VAR_22->bits_per_pixel,
                    VAR_22->cur_w);
            VAR_22->crow_size = VAR_22->pass_row_size + 1;
        }
        FUNC_7(VAR_21, "row_size=%d crow_size =%d\n",
                VAR_22->row_size, VAR_22->crow_size);
        VAR_22->image_buf = VAR_24->data[0];
        VAR_22->image_linesize = VAR_24->linesize[0];

        if (VAR_21->pix_fmt == VAR_8)
            FUNC_14(VAR_24->data[1], VAR_22->palette, 256 * sizeof(uint32_t));

        FUNC_2(&VAR_22->last_row, &VAR_22->last_row_size, VAR_22->row_size);
        if (!VAR_22->last_row)
            return VAR_1;
        if (VAR_22->interlace_type ||
                VAR_22->color_type == VAR_18) {
            FUNC_1(&VAR_22->tmp_row, &VAR_22->tmp_row_size, VAR_22->row_size);
            if (!VAR_22->tmp_row)
                return VAR_1;
        }

        FUNC_1(&VAR_22->buffer, &VAR_22->buffer_size, VAR_22->row_size + 16);
        if (!VAR_22->buffer)
            return FUNC_0(VAR_13);


        VAR_22->crow_buf = VAR_22->buffer + 15;
        VAR_22->zstream.avail_out = VAR_22->crow_size;
        VAR_22->zstream.next_out = VAR_22->crow_buf;
    }

    VAR_22->pic_state |= VAR_19;


    if (VAR_22->has_trns && VAR_22->color_type != VAR_16)
        VAR_22->bpp -= VAR_26;

    VAR_25 = FUNC_15(VAR_22, VAR_23);

    if (VAR_22->has_trns && VAR_22->color_type != VAR_16)
        VAR_22->bpp += VAR_26;

    if (VAR_25 < 0)
        return VAR_25;

    FUNC_6(&VAR_22->gb, 4);

    return 0;
}
