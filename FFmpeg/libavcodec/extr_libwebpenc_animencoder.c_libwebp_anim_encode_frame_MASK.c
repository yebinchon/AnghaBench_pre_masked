
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_12__ ;


struct TYPE_26__ {int error_code; } ;
typedef TYPE_2__ WebPPicture ;
struct TYPE_27__ {int size; int bytes; int member_0; } ;
typedef TYPE_3__ WebPData ;
struct TYPE_30__ {int pts; } ;
struct TYPE_29__ {int pts; int dts; int flags; int data; } ;
struct TYPE_24__ {int config; } ;
struct TYPE_25__ {int num; int den; } ;
struct TYPE_28__ {int done; int prev_frame_pts; TYPE_12__ cc; int enc; TYPE_1__ time_base; struct TYPE_28__* priv_data; } ;
typedef TYPE_4__ LibWebPAnimContext ;
typedef TYPE_5__ AVPacket ;
typedef TYPE_6__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,TYPE_2__*,int,int *) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_6__**) ;
 int FUNC_5 (TYPE_2__**) ;
 int FUNC_6 (TYPE_4__*,int ,char*,int ) ;
 int FUNC_7 (TYPE_4__*,TYPE_5__*,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_4__*,TYPE_12__*,TYPE_6__ const*,TYPE_6__**,TYPE_2__**) ;
 int FUNC_10 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_11(AVCodecContext *VAR_4, AVPacket *VAR_5,
                                     const AVFrame *VAR_6, int *VAR_7) {
    LibWebPAnimContext *VAR_8 = VAR_4->priv_data;
    int VAR_9;

    if (!VAR_6) {
        if (VAR_8->done) {
            *VAR_7 = 0;
            return 0;
        } else {
            WebPData VAR_10 = { 0 };
            VAR_9 = FUNC_2(VAR_8->enc, &VAR_10);
            if (VAR_9) {
                VAR_9 = FUNC_7(VAR_4, VAR_5, VAR_10.size, VAR_10.size);
                if (VAR_9 < 0)
                    return VAR_9;
                FUNC_10(VAR_5->data, VAR_10.bytes, VAR_10.size);
                VAR_8->done = 1;
                VAR_5->flags |= VAR_1;
                VAR_5->pts = VAR_5->dts = VAR_8->prev_frame_pts + 1;
                *VAR_7 = 1;
                return 0;
            } else {
                FUNC_6(VAR_8, VAR_0,
                       "WebPAnimEncoderAssemble() failed with error: %d\n",
                       VAR_3);
                return FUNC_0(VAR_2);
            }
        }
    } else {
        int VAR_11;
        WebPPicture *VAR_12 = ((void*)0);
        AVFrame *VAR_13 = ((void*)0);
        VAR_9 = FUNC_9(VAR_4, &VAR_8->cc, VAR_6, &VAR_13, &VAR_12);
        if (VAR_9 < 0)
            goto end;

        VAR_11 =
            VAR_4->time_base.num * VAR_6->pts * 1000 / VAR_4->time_base.den;
        VAR_9 = FUNC_1(VAR_8->enc, VAR_12, VAR_11, &VAR_8->cc.config);
        if (!VAR_9) {
                FUNC_6(VAR_4, VAR_0,
                       "Encoding WebP frame failed with error: %d\n",
                   VAR_12->error_code);
            VAR_9 = FUNC_8(VAR_12->error_code);
            goto end;
        }

        VAR_5->pts = VAR_5->dts = VAR_6->pts;
        VAR_8->prev_frame_pts = VAR_6->pts;
        VAR_9 = 0;
        *VAR_7 = 1;

end:
        FUNC_3(VAR_12);
        FUNC_5(&VAR_12);
        FUNC_4(&VAR_13);
        return VAR_9;
    }
}
