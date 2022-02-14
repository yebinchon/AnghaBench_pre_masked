
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


struct TYPE_17__ {int output_bit_depth; int frame_rate; int height; int width; } ;
typedef TYPE_3__ davs2_seq_info_t ;
struct TYPE_18__ {int bytes_per_sample; int type; int* widths; int* lines; int* strides; scalar_t__* planes; } ;
typedef TYPE_4__ davs2_picture_t ;
struct TYPE_21__ {int pix_fmt; int framerate; int height; int width; TYPE_5__* priv_data; } ;
struct TYPE_20__ {int* linesize; int format; int pts; int height; int width; scalar_t__* data; TYPE_13__** buf; int pict_type; } ;
struct TYPE_16__ {int pts; } ;
struct TYPE_15__ {int height; int width; } ;
struct TYPE_19__ {TYPE_2__ out_frame; TYPE_1__ headerset; } ;
struct TYPE_14__ {scalar_t__ data; } ;
typedef TYPE_5__ DAVS2Context ;
typedef TYPE_6__ AVFrame ;
typedef TYPE_7__ AVCodecContext ;


 int FUNC_0 (int ) ;
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
 TYPE_13__* FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_7__*,int ,char*) ;
 int FUNC_4 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_10, davs2_picture_t *VAR_11, int *VAR_12,
                             davs2_seq_info_t *VAR_13, int VAR_14, AVFrame *VAR_15)
{
    DAVS2Context *VAR_16 = VAR_10->priv_data;
    int VAR_17 = VAR_11->bytes_per_sample;
    int VAR_18 = 0;
    int VAR_19 = 0;

    if (!VAR_13) {
        *VAR_12 = 0;
        return 0;
    }

    if (!VAR_11 || VAR_14 == VAR_8) {
        VAR_10->width = VAR_13->width;
        VAR_10->height = VAR_13->height;
        VAR_10->pix_fmt = VAR_13->output_bit_depth == 10 ?
                           VAR_7 : VAR_6;

        VAR_10->framerate = FUNC_2(VAR_13->frame_rate,4096);
        *VAR_12 = 0;
        return 0;
    }

    switch (VAR_11->type) {
    case 130:
    case 131:
        VAR_15->pict_type = VAR_3;
        break;
    case 129:
    case 128:
        VAR_15->pict_type = VAR_4;
        break;
    case 133:
        VAR_15->pict_type = VAR_2;
        break;
    case 132:
        VAR_15->pict_type = VAR_5;
        break;
    default:
        FUNC_3(VAR_10, VAR_1, "Decoder error: unknown frame type\n");
        return VAR_0;
    }

    for (VAR_18 = 0; VAR_18 < 3; ++VAR_18) {
        int VAR_20 = VAR_11->widths[VAR_18] * VAR_17;
        VAR_15->buf[VAR_18] = FUNC_1(VAR_20 * VAR_11->lines[VAR_18]);

        if (!VAR_15->buf[VAR_18]){
            FUNC_3(VAR_10, VAR_1, "Decoder error: allocation failure, can't dump frames.\n");
            return FUNC_0(VAR_9);
        }

        VAR_15->data[VAR_18] = VAR_15->buf[VAR_18]->data;
        VAR_15->linesize[VAR_18] = VAR_20;

        for (VAR_19 = 0; VAR_19 < VAR_11->lines[VAR_18]; ++VAR_19)
            FUNC_4(VAR_15->data[VAR_18] + VAR_19 * VAR_20,
                   VAR_11->planes[VAR_18] + VAR_19 * VAR_11->strides[VAR_18],
                   VAR_11->widths[VAR_18] * VAR_17);
    }

    VAR_15->width = VAR_16->headerset.width;
    VAR_15->height = VAR_16->headerset.height;
    VAR_15->pts = VAR_16->out_frame.pts;
    VAR_15->format = VAR_10->pix_fmt;

    *VAR_12 = 1;
    return 0;
}
