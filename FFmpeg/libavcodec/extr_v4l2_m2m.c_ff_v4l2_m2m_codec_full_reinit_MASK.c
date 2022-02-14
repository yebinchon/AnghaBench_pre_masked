
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int capture; TYPE_1__* avctx; int output; scalar_t__ reinit; scalar_t__ draining; int refsync; int refcount; int devname; } ;
typedef TYPE_2__ V4L2m2mContext ;
struct TYPE_4__ {int codec; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,int ,char*,...) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;

int FUNC_9(V4L2m2mContext *VAR_5)
{
    void *VAR_6 = VAR_5->avctx;
    int VAR_7;

    FUNC_2(VAR_6, VAR_0, "%s full reinit\n", VAR_5->devname);


    if (FUNC_0(&VAR_5->refcount))
        while(FUNC_8(&VAR_5->refsync) == -1 && VAR_4 == VAR_2);

    VAR_7 = FUNC_7(&VAR_5->output, VAR_3);
    if (VAR_7) {
        FUNC_2(VAR_6, VAR_1, "output VIDIOC_STREAMOFF\n");
        goto error;
    }

    VAR_7 = FUNC_7(&VAR_5->capture, VAR_3);
    if (VAR_7) {
            FUNC_2(VAR_6, VAR_1, "capture VIDIOC_STREAMOFF\n");
            goto error;
    }


    FUNC_5(&VAR_5->output);
    FUNC_5(&VAR_5->capture);


    VAR_5->draining = 0;
    VAR_5->reinit = 0;

    VAR_7 = FUNC_3(&VAR_5->output, 0);
    if (VAR_7) {
        FUNC_2(VAR_6, VAR_0, "v4l2 output format not supported\n");
        goto error;
    }

    VAR_7 = FUNC_3(&VAR_5->capture, 0);
    if (VAR_7) {
        FUNC_2(VAR_6, VAR_0, "v4l2 capture format not supported\n");
        goto error;
    }

    VAR_7 = FUNC_6(&VAR_5->output);
    if (VAR_7) {
        FUNC_2(VAR_6, VAR_1, "can't set v4l2 output format\n");
        goto error;
    }

    VAR_7 = FUNC_6(&VAR_5->capture);
    if (VAR_7) {
        FUNC_2(VAR_6, VAR_1, "can't to set v4l2 capture format\n");
        goto error;
    }

    VAR_7 = FUNC_4(&VAR_5->output);
    if (VAR_7) {
        FUNC_2(VAR_6, VAR_1, "no v4l2 output context's buffers\n");
        goto error;
    }


    if (!VAR_5->avctx || !FUNC_1(VAR_5->avctx->codec)) {
        VAR_7 = FUNC_4(&VAR_5->capture);
        if (VAR_7) {
            FUNC_2(VAR_6, VAR_1, "no v4l2 capture context's buffers\n");
            goto error;
        }
    }

    return 0;

error:
    return VAR_7;
}
