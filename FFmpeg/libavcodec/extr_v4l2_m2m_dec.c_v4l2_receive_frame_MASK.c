
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* context; } ;
typedef TYPE_1__ V4L2m2mPriv ;
struct TYPE_14__ {scalar_t__ size; int member_0; } ;
struct TYPE_13__ {TYPE_3__ buf_pkt; scalar_t__ draining; int output; int capture; } ;
typedef TYPE_2__ V4L2m2mContext ;
typedef int V4L2Context ;
struct TYPE_15__ {scalar_t__ priv_data; } ;
typedef TYPE_3__ AVPacket ;
typedef int AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_3 (int * const,int *,int) ;
 int FUNC_4 (int * const,TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;
 int FUNC_6 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_3, AVFrame *VAR_4)
{
    V4L2m2mContext *VAR_5 = ((V4L2m2mPriv*)VAR_3->priv_data)->context;
    V4L2Context *const VAR_6 = &VAR_5->capture;
    V4L2Context *const VAR_7 = &VAR_5->output;
    AVPacket VAR_8 = {0};
    int VAR_9;

    if (VAR_5->buf_pkt.size) {
        VAR_8 = VAR_5->buf_pkt;
        FUNC_5(&VAR_5->buf_pkt, 0, sizeof(AVPacket));
    } else {
        VAR_9 = FUNC_2(VAR_3, &VAR_8);
        if (VAR_9 < 0 && VAR_9 != VAR_0)
            return VAR_9;
    }

    if (VAR_5->draining)
        goto dequeue;

    VAR_9 = FUNC_4(VAR_7, &VAR_8);
    if (VAR_9 < 0) {
        if (VAR_9 != FUNC_0(VAR_1))
           return VAR_9;

        VAR_5->buf_pkt = VAR_8;

    }

    if (VAR_8.size) {
        VAR_9 = FUNC_6(VAR_3);
        if (VAR_9) {
            FUNC_1(&VAR_8);


            if (VAR_9 == FUNC_0(VAR_2))
                return VAR_9;

            return 0;
        }
    }

dequeue:
    if (!VAR_5->buf_pkt.size)
        FUNC_1(&VAR_8);
    return FUNC_3(VAR_6, VAR_4, -1);
}
