
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* context; } ;
typedef TYPE_1__ V4L2m2mPriv ;
struct TYPE_11__ {int streamon; } ;
struct TYPE_10__ {scalar_t__ draining; TYPE_3__ output; TYPE_3__ capture; } ;
typedef TYPE_2__ V4L2m2mContext ;
typedef TYPE_3__ V4L2Context ;
struct TYPE_12__ {scalar_t__ priv_data; } ;
typedef int AVPacket ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int ,char*) ;
 int FUNC_1 (TYPE_3__* const,int *) ;
 int FUNC_2 (TYPE_3__* const,int ) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_2, AVPacket *VAR_3)
{
    V4L2m2mContext *VAR_4 = ((V4L2m2mPriv*)VAR_2->priv_data)->context;
    V4L2Context *const VAR_5 = &VAR_4->capture;
    V4L2Context *const VAR_6 = &VAR_4->output;
    int VAR_7;

    if (VAR_4->draining)
        goto dequeue;

    if (!VAR_6->streamon) {
        VAR_7 = FUNC_2(VAR_6, VAR_1);
        if (VAR_7) {
            FUNC_0(VAR_2, VAR_0, "VIDIOC_STREAMON failed on output context\n");
            return VAR_7;
        }
    }

    if (!VAR_5->streamon) {
        VAR_7 = FUNC_2(VAR_5, VAR_1);
        if (VAR_7) {
            FUNC_0(VAR_2, VAR_0, "VIDIOC_STREAMON failed on capture context\n");
            return VAR_7;
        }
    }

dequeue:
    return FUNC_1(VAR_5, VAR_3);
}
