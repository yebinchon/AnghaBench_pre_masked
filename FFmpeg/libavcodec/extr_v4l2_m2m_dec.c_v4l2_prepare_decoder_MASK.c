
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sub ;
struct v4l2_event_subscription {int type; } ;
struct TYPE_5__ {scalar_t__ height; scalar_t__ width; } ;
struct TYPE_4__ {int avctx; int fd; TYPE_2__ output; } ;
typedef TYPE_1__ V4L2m2mContext ;
typedef TYPE_2__ V4L2Context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ,int ,struct v4l2_event_subscription*) ;
 int FUNC_2 (struct v4l2_event_subscription*,int ,int) ;

__attribute__((used)) static int FUNC_3(V4L2m2mContext *VAR_3)
{
    struct v4l2_event_subscription VAR_4;
    V4L2Context *VAR_5 = &VAR_3->output;
    int VAR_6;




    FUNC_2(&VAR_4, 0, sizeof(VAR_4));
    VAR_4.type = VAR_1;
    VAR_6 = FUNC_1(VAR_3->fd, VAR_2, &VAR_4);
    if ( VAR_6 < 0) {
        if (VAR_5->height == 0 || VAR_5->width == 0) {
            FUNC_0(VAR_3->avctx, VAR_0,
                "the v4l2 driver does not support VIDIOC_SUBSCRIBE_EVENT\n"
                "you must provide codec_height and codec_width on input\n");
            return VAR_6;
        }
    }

    return 0;
}
