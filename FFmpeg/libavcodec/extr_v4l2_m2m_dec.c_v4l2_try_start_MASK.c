
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int width; int height; } ;
struct TYPE_12__ {int pixelformat; } ;
struct TYPE_13__ {TYPE_1__ pix_mp; } ;
struct v4l2_selection {TYPE_3__ r; int type; TYPE_2__ fmt; } ;
struct TYPE_15__ {TYPE_5__* context; } ;
typedef TYPE_4__ V4L2m2mPriv ;
struct TYPE_17__ {int buffers; int width; int height; int av_pix_fmt; struct v4l2_selection format; int type; scalar_t__ streamon; } ;
struct TYPE_16__ {int fd; TYPE_6__ output; TYPE_6__ capture; } ;
typedef TYPE_5__ V4L2m2mContext ;
typedef TYPE_6__ V4L2Context ;
struct TYPE_18__ {int coded_width; int coded_height; int pix_fmt; scalar_t__ priv_data; } ;
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
 int FUNC_1 (TYPE_7__*,int ,char*,...) ;
 int FUNC_2 (TYPE_6__* const) ;
 int FUNC_3 (TYPE_6__* const,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,struct v4l2_selection*) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_10)
{
    V4L2m2mContext *VAR_11 = ((V4L2m2mPriv*)VAR_10->priv_data)->context;
    V4L2Context *const VAR_12 = &VAR_11->capture;
    V4L2Context *const VAR_13 = &VAR_11->output;
    struct v4l2_selection VAR_14;
    int VAR_15;


    if (!VAR_13->streamon) {
        VAR_15 = FUNC_3(VAR_13, VAR_8);
        if (VAR_15 < 0) {
            FUNC_1(VAR_10, VAR_1, "VIDIOC_STREAMON on output context\n");
            return VAR_15;
        }
    }

    if (VAR_12->streamon)
        return 0;


    VAR_12->format.type = VAR_12->type;
    VAR_15 = FUNC_5(VAR_11->fd, VAR_6, &VAR_12->format);
    if (VAR_15) {
        FUNC_1(VAR_10, VAR_3, "VIDIOC_G_FMT ioctl\n");
        return VAR_15;
    }


    VAR_10->pix_fmt = FUNC_4(VAR_12->format.fmt.pix_mp.pixelformat, VAR_0);
    VAR_12->av_pix_fmt = VAR_10->pix_fmt;


    VAR_14.type = VAR_5;
    VAR_14.r.height = VAR_10->coded_height;
    VAR_14.r.width = VAR_10->coded_width;
    VAR_15 = FUNC_5(VAR_11->fd, VAR_9, &VAR_14);
    if (!VAR_15) {
        VAR_15 = FUNC_5(VAR_11->fd, VAR_7, &VAR_14);
        if (VAR_15) {
            FUNC_1(VAR_10, VAR_3, "VIDIOC_G_SELECTION ioctl\n");
        } else {
            FUNC_1(VAR_10, VAR_1, "crop output %dx%d\n", VAR_14.r.width, VAR_14.r.height);

            VAR_12->height = VAR_14.r.height;
            VAR_12->width = VAR_14.r.width;
        }
    }


    if (!VAR_12->buffers) {
        VAR_15 = FUNC_2(VAR_12);
        if (VAR_15) {
            FUNC_1(VAR_10, VAR_2, "can't request capture buffers\n");
            return FUNC_0(VAR_4);
        }
    }


    VAR_15 = FUNC_3(VAR_12, VAR_8);
    if (VAR_15) {
        FUNC_1(VAR_10, VAR_1, "VIDIOC_STREAMON, on capture context\n");
        return VAR_15;
    }

    return 0;
}
