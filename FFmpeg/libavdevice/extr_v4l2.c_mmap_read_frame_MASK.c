
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct video_data {int buffers; scalar_t__ frame_size; int * buf_start; int buffers_queued; int fd; } ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct v4l2_buffer {int index; int flags; scalar_t__ bytesused; struct timeval timestamp; int memory; int type; } ;
struct buff_data {size_t index; struct video_data* s; } ;
struct TYPE_10__ {scalar_t__ video_codec_id; struct video_data* priv_data; } ;
struct TYPE_9__ {scalar_t__ size; scalar_t__ pts; int buf; int data; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,scalar_t__,int ,struct buff_data*,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct buff_data**) ;
 int FUNC_9 (TYPE_2__*,int ,char*,...) ;
 struct buff_data* FUNC_10 (int) ;
 int FUNC_11 (TYPE_1__*,scalar_t__) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_2__*,scalar_t__*) ;
 int FUNC_14 (struct video_data*,struct v4l2_buffer*) ;
 scalar_t__ VAR_11 ;
 int FUNC_15 (int ,int ,scalar_t__) ;
 int VAR_12 ;
 int FUNC_16 (int ,int ,struct v4l2_buffer*) ;

__attribute__((used)) static int FUNC_17(AVFormatContext *VAR_13, AVPacket *VAR_14)
{
    struct video_data *VAR_15 = VAR_13->priv_data;
    struct v4l2_buffer VAR_16 = {
        .type = VAR_8,
        .memory = VAR_9
    };
    struct timeval VAR_17;
    int VAR_18;

    VAR_14->size = 0;


    while ((VAR_18 = FUNC_16(VAR_15->fd, VAR_10, &VAR_16)) < 0 && (VAR_11 == VAR_4));
    if (VAR_18 < 0) {
        if (VAR_11 == VAR_3)
            return FUNC_0(VAR_3);

        VAR_18 = FUNC_0(VAR_11);
        FUNC_9(VAR_13, VAR_1, "ioctl(VIDIOC_DQBUF): %s\n",
               FUNC_7(VAR_18));
        return VAR_18;
    }

    VAR_17 = VAR_16.timestamp;

    if (VAR_16.index >= VAR_15->buffers) {
        FUNC_9(VAR_13, VAR_1, "Invalid buffer index received.\n");
        return FUNC_0(VAR_5);
    }
    FUNC_3(&VAR_15->buffers_queued, -1);

    FUNC_5(FUNC_4(&VAR_15->buffers_queued) >= 1);
    {


        if (VAR_13->video_codec_id == VAR_0)
            VAR_15->frame_size = VAR_16.bytesused;

        if (VAR_15->frame_size > 0 && VAR_16.bytesused != VAR_15->frame_size) {
            FUNC_9(VAR_13, VAR_2,
                   "Dequeued v4l2 buffer contains %d bytes, but %d were expected. Flags: 0x%08X.\n",
                   VAR_16.bytesused, VAR_15->frame_size, VAR_16.flags);
            VAR_16.bytesused = 0;
        }
    }


    if (FUNC_4(&VAR_15->buffers_queued) == FUNC_1(VAR_15->buffers / 8, 1)) {

        VAR_18 = FUNC_11(VAR_14, VAR_16.bytesused);
        if (VAR_18 < 0) {
            FUNC_9(VAR_13, VAR_1, "Error allocating a packet.\n");
            FUNC_14(VAR_15, &VAR_16);
            return VAR_18;
        }
        FUNC_15(VAR_14->data, VAR_15->buf_start[VAR_16.index], VAR_16.bytesused);

        VAR_18 = FUNC_14(VAR_15, &VAR_16);
        if (VAR_18) {
            FUNC_12(VAR_14);
            return VAR_18;
        }
    } else {
        struct buff_data *VAR_19;

        VAR_14->data = VAR_15->buf_start[VAR_16.index];
        VAR_14->size = VAR_16.bytesused;

        VAR_19 = FUNC_10(sizeof(struct buff_data));
        if (!VAR_19) {



            FUNC_9(VAR_13, VAR_1, "Failed to allocate a buffer descriptor\n");
            FUNC_14(VAR_15, &VAR_16);

            return FUNC_0(VAR_6);
        }
        VAR_19->index = VAR_16.index;
        VAR_19->s = VAR_15;

        VAR_14->buf = FUNC_6(VAR_14->data, VAR_14->size, VAR_12,
                                    VAR_19, 0);
        if (!VAR_14->buf) {
            FUNC_9(VAR_13, VAR_1, "Failed to create a buffer\n");
            FUNC_14(VAR_15, &VAR_16);
            FUNC_8(&VAR_19);
            return FUNC_0(VAR_6);
        }
    }
    VAR_14->pts = VAR_17.tv_sec * FUNC_2(1000000) + VAR_17.tv_usec;
    FUNC_13(VAR_13, &VAR_14->pts);

    return VAR_14->size;
}
