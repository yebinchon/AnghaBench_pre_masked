
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct v4l2_format {scalar_t__ type; int member_0; } ;
struct v4l2_event {scalar_t__ type; int member_0; } ;
struct TYPE_13__ {void* height; void* width; void* sample_aspect_ratio; int name; struct v4l2_format format; } ;
struct TYPE_11__ {int reinit; TYPE_3__ capture; scalar_t__ avctx; TYPE_3__ output; int fd; } ;
typedef TYPE_1__ V4L2m2mContext ;
struct TYPE_12__ {int name; } ;
typedef TYPE_2__ V4L2Context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,char*,...) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__,void*,void*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ,struct v4l2_format*) ;
 int FUNC_6 (TYPE_2__*) ;
 void* FUNC_7 (struct v4l2_format*) ;
 void* FUNC_8 (TYPE_3__*) ;
 void* FUNC_9 (struct v4l2_format*) ;
 int FUNC_10 (TYPE_3__*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_11(V4L2Context *VAR_6)
{
    V4L2m2mContext *VAR_7 = FUNC_1(VAR_6);
    struct v4l2_format VAR_8 = VAR_7->capture.format;
    struct v4l2_format VAR_9 = VAR_7->output.format;
    struct v4l2_event VAR_10 = { 0 };
    int VAR_11, VAR_12, VAR_13;

    VAR_13 = FUNC_5(VAR_7->fd, VAR_4, &VAR_10);
    if (VAR_13 < 0) {
        FUNC_0(FUNC_6(VAR_6), VAR_0, "%s VIDIOC_DQEVENT\n", VAR_6->name);
        return 0;
    }

    if (VAR_10.type != VAR_3)
        return 0;

    VAR_13 = FUNC_5(VAR_7->fd, VAR_5, &VAR_9);
    if (VAR_13) {
        FUNC_0(FUNC_6(VAR_6), VAR_0, "%s VIDIOC_G_FMT\n", VAR_7->output.name);
        return 0;
    }

    VAR_13 = FUNC_5(VAR_7->fd, VAR_5, &VAR_8);
    if (VAR_13) {
        FUNC_0(FUNC_6(VAR_6), VAR_0, "%s VIDIOC_G_FMT\n", VAR_7->capture.name);
        return 0;
    }

    VAR_11 = FUNC_10(&VAR_7->output, &VAR_9);
    if (VAR_11) {
        VAR_7->output.height = FUNC_7(&VAR_9);
        VAR_7->output.width = FUNC_9(&VAR_9);
        VAR_7->output.sample_aspect_ratio = FUNC_8(&VAR_7->output);
    }

    VAR_12 = FUNC_10(&VAR_7->capture, &VAR_8);
    if (VAR_12) {
        VAR_7->capture.height = FUNC_7(&VAR_8);
        VAR_7->capture.width = FUNC_9(&VAR_8);
        VAR_7->capture.sample_aspect_ratio = FUNC_8(&VAR_7->capture);
    }

    if (VAR_11 || VAR_12)
        VAR_7->reinit = 1;

    if (VAR_11) {
        VAR_13 = FUNC_3(VAR_7);
        if (VAR_13) {
            FUNC_0(FUNC_6(VAR_6), VAR_0, "v4l2_m2m_codec_full_reinit\n");
            return -VAR_2;
        }
        goto reinit_run;
    }

    if (VAR_12) {
        if (VAR_7->avctx)
            VAR_13 = FUNC_2(VAR_7->avctx, VAR_7->capture.width, VAR_7->capture.height);
        if (VAR_13 < 0)
            FUNC_0(FUNC_6(VAR_6), VAR_1, "update avcodec height and width\n");

        VAR_13 = FUNC_4(VAR_7);
        if (VAR_13) {
            FUNC_0(FUNC_6(VAR_6), VAR_0, "v4l2_m2m_codec_reinit\n");
            return -VAR_2;
        }
        goto reinit_run;
    }


    return 0;


reinit_run:
    return 1;
}
