
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct video_data {int buffers; scalar_t__* buf_len; scalar_t__ frame_size; int * buf_start; int fd; } ;
struct TYPE_5__ {int offset; } ;
struct v4l2_requestbuffers {int count; int index; scalar_t__ length; TYPE_1__ m; int memory; int type; } ;
struct v4l2_buffer {int count; int index; scalar_t__ length; TYPE_1__ m; int memory; int type; } ;
struct TYPE_6__ {struct video_data* priv_data; } ;
typedef TYPE_2__ AVFormatContext ;


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
 int FUNC_1 (int) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (TYPE_2__*,int ,char*,...) ;
 void* FUNC_4 (int,int) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_5 (int ,int ,struct v4l2_requestbuffers*) ;
 int FUNC_6 (int *,scalar_t__,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_12)
{
    int VAR_13, VAR_14;
    struct video_data *VAR_15 = VAR_12->priv_data;
    struct v4l2_requestbuffers VAR_16 = {
        .type = VAR_6,
        .count = VAR_10,
        .memory = VAR_7
    };

    if (FUNC_5(VAR_15->fd, VAR_9, &VAR_16) < 0) {
        VAR_14 = FUNC_0(VAR_11);
        FUNC_3(VAR_12, VAR_0, "ioctl(VIDIOC_REQBUFS): %s\n", FUNC_1(VAR_14));
        return VAR_14;
    }

    if (VAR_16.count < 2) {
        FUNC_3(VAR_12, VAR_0, "Insufficient buffer memory\n");
        return FUNC_0(VAR_1);
    }
    VAR_15->buffers = VAR_16.count;
    VAR_15->buf_start = FUNC_4(VAR_15->buffers, sizeof(void *));
    if (!VAR_15->buf_start) {
        FUNC_3(VAR_12, VAR_0, "Cannot allocate buffer pointers\n");
        return FUNC_0(VAR_1);
    }
    VAR_15->buf_len = FUNC_4(VAR_15->buffers, sizeof(unsigned int));
    if (!VAR_15->buf_len) {
        FUNC_3(VAR_12, VAR_0, "Cannot allocate buffer sizes\n");
        FUNC_2(&VAR_15->buf_start);
        return FUNC_0(VAR_1);
    }

    for (VAR_13 = 0; VAR_13 < VAR_16.count; VAR_13++) {
        struct v4l2_buffer VAR_17 = {
            .type = VAR_6,
            .index = VAR_13,
            .memory = VAR_7
        };
        if (FUNC_5(VAR_15->fd, VAR_8, &VAR_17) < 0) {
            VAR_14 = FUNC_0(VAR_11);
            FUNC_3(VAR_12, VAR_0, "ioctl(VIDIOC_QUERYBUF): %s\n", FUNC_1(VAR_14));
            return VAR_14;
        }

        VAR_15->buf_len[VAR_13] = VAR_17.length;
        if (VAR_15->frame_size > 0 && VAR_15->buf_len[VAR_13] < VAR_15->frame_size) {
            FUNC_3(VAR_12, VAR_0,
                   "buf_len[%d] = %d < expected frame size %d\n",
                   VAR_13, VAR_15->buf_len[VAR_13], VAR_15->frame_size);
            return FUNC_0(VAR_1);
        }
        VAR_15->buf_start[VAR_13] = FUNC_6(((void*)0), VAR_17.length,
                               VAR_4 | VAR_5, VAR_3,
                               VAR_15->fd, VAR_17.m.offset);

        if (VAR_15->buf_start[VAR_13] == VAR_2) {
            VAR_14 = FUNC_0(VAR_11);
            FUNC_3(VAR_12, VAR_0, "mmap: %s\n", FUNC_1(VAR_14));
            return VAR_14;
        }
    }

    return 0;
}
