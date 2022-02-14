
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_12__ ;


struct TYPE_24__ {TYPE_12__* f; } ;
struct TYPE_23__ {scalar_t__ codec_id; TYPE_1__* hwaccel; scalar_t__ height; scalar_t__ width; int pix_fmt; int codec; } ;
struct TYPE_22__ {TYPE_12__* f; TYPE_14__* hwaccel_priv_buf; scalar_t__ hwaccel_picture_private; scalar_t__ reference; TYPE_6__ tf; } ;
struct TYPE_21__ {int edge_emu_buffer; } ;
struct TYPE_20__ {scalar_t__ frame_priv_data_size; } ;
struct TYPE_19__ {scalar_t__ data; } ;
struct TYPE_18__ {int* linesize; int format; scalar_t__ height; scalar_t__ width; scalar_t__* data; int * buf; } ;
typedef TYPE_2__ ScratchpadContext ;
typedef TYPE_3__ Picture ;
typedef int MotionEstContext ;
typedef TYPE_4__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 TYPE_14__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,int ,char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,TYPE_12__*,int ) ;
 int FUNC_6 (TYPE_4__*,int *,TYPE_2__*,int) ;
 int FUNC_7 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_8 (TYPE_4__*,TYPE_6__*,int ) ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_6, Picture *VAR_7,
                              MotionEstContext *VAR_8, ScratchpadContext *VAR_9,
                              int VAR_10, int VAR_11,
                              int VAR_12, int VAR_13)
{
    int VAR_14 = FUNC_2(VAR_6->codec);
    int VAR_15, VAR_16;

    VAR_7->tf.f = VAR_7->f;
    if (VAR_6->codec_id != VAR_2 &&
        VAR_6->codec_id != VAR_1 &&
        VAR_6->codec_id != VAR_0) {
        if (VAR_14) {
            VAR_7->f->width = VAR_6->width + 2 * VAR_5;
            VAR_7->f->height = VAR_6->height + 2 * VAR_5;
        }

        VAR_15 = FUNC_8(VAR_6, &VAR_7->tf,
                                 VAR_7->reference ? VAR_3 : 0);
    } else {
        VAR_7->f->width = VAR_6->width;
        VAR_7->f->height = VAR_6->height;
        VAR_7->f->format = VAR_6->pix_fmt;
        VAR_15 = FUNC_5(VAR_6, VAR_7->f, 0);
    }

    if (VAR_15 < 0 || !VAR_7->f->buf[0]) {
        FUNC_3(VAR_6, VAR_4, "get_buffer() failed (%d %p)\n",
               VAR_15, VAR_7->f->data[0]);
        return -1;
    }

    if (VAR_14) {
        int VAR_17;
        for (VAR_17 = 0; VAR_7->f->data[VAR_17]; VAR_17++) {
            int VAR_18 = (VAR_5 >> (VAR_17 ? VAR_11 : 0)) *
                         VAR_7->f->linesize[VAR_17] +
                         (VAR_5 >> (VAR_17 ? VAR_10 : 0));
            VAR_7->f->data[VAR_17] += VAR_18;
        }
        VAR_7->f->width = VAR_6->width;
        VAR_7->f->height = VAR_6->height;
    }

    if (VAR_6->hwaccel) {
        FUNC_0(!VAR_7->hwaccel_picture_private);
        if (VAR_6->hwaccel->frame_priv_data_size) {
            VAR_7->hwaccel_priv_buf = FUNC_1(VAR_6->hwaccel->frame_priv_data_size);
            if (!VAR_7->hwaccel_priv_buf) {
                FUNC_3(VAR_6, VAR_4, "alloc_frame_buffer() failed (hwaccel private data allocation)\n");
                return -1;
            }
            VAR_7->hwaccel_picture_private = VAR_7->hwaccel_priv_buf->data;
        }
    }

    if ((VAR_12 && VAR_12 != VAR_7->f->linesize[0]) ||
        (VAR_13 && VAR_13 != VAR_7->f->linesize[1])) {
        FUNC_3(VAR_6, VAR_4,
               "get_buffer() failed (stride changed: linesize=%d/%d uvlinesize=%d/%d)\n",
               VAR_12, VAR_7->f->linesize[0],
               VAR_13, VAR_7->f->linesize[1]);
        FUNC_7(VAR_6, VAR_7);
        return -1;
    }

    if (FUNC_4(VAR_7->f->format) > 2 &&
        VAR_7->f->linesize[1] != VAR_7->f->linesize[2]) {
        FUNC_3(VAR_6, VAR_4,
               "get_buffer() failed (uv stride mismatch)\n");
        FUNC_7(VAR_6, VAR_7);
        return -1;
    }

    if (!VAR_9->edge_emu_buffer &&
        (VAR_16 = FUNC_6(VAR_6, VAR_8, VAR_9,
                                       VAR_7->f->linesize[0])) < 0) {
        FUNC_3(VAR_6, VAR_4,
               "get_buffer() failed to allocate context scratch buffers.\n");
        FUNC_7(VAR_6, VAR_7);
        return VAR_16;
    }

    return 0;
}
