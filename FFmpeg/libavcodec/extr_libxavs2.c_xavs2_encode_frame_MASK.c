
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_15__ ;


struct TYPE_25__ {int enc_sample_size; int in_sample_size; } ;
struct TYPE_27__ {int i_type; int i_pts; scalar_t__ i_state; TYPE_1__ img; } ;
typedef TYPE_3__ xavs2_picture_t ;
struct TYPE_24__ {scalar_t__ state; scalar_t__ len; int stream; int dts; int pts; } ;
struct TYPE_28__ {TYPE_15__ packet; int encoder; TYPE_2__* api; int param; } ;
typedef TYPE_4__ XAVS2EContext ;
struct TYPE_31__ {TYPE_4__* priv_data; } ;
struct TYPE_30__ {int format; int pts; } ;
struct TYPE_29__ {scalar_t__ size; int data; int dts; int pts; } ;
struct TYPE_26__ {scalar_t__ (* encoder_get_buffer ) (int ,TYPE_3__*) ;int (* encoder_encode ) (int ,TYPE_3__*,TYPE_15__*) ;int (* encoder_packet_unref ) (int ,TYPE_15__*) ;int (* opt_get ) (int ,char*) ;} ;
typedef TYPE_5__ AVPacket ;
typedef TYPE_6__ AVFrame ;
typedef TYPE_7__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_7__*,int ,char*) ;
 scalar_t__ FUNC_3 (TYPE_5__*,scalar_t__) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,TYPE_3__*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,TYPE_3__*,TYPE_15__*) ;
 int FUNC_8 (int ,TYPE_3__*,TYPE_15__*) ;
 int FUNC_9 (int ,TYPE_15__*) ;
 int FUNC_10 (int ,TYPE_15__*) ;
 int FUNC_11 (TYPE_3__*,TYPE_6__ const*) ;
 int FUNC_12 (TYPE_3__*,TYPE_6__ const*,int const) ;

__attribute__((used)) static int FUNC_13(AVCodecContext *VAR_6, AVPacket *VAR_7,
                              const AVFrame *VAR_8, int *VAR_9)
{
    XAVS2EContext *VAR_10 = VAR_6->priv_data;
    xavs2_picture_t VAR_11;
    int VAR_12;



    if (VAR_10->api->encoder_get_buffer(VAR_10->encoder, &VAR_11) < 0) {
        FUNC_2(VAR_6,VAR_1, "failed to get frame buffer\n");
        return VAR_0;
    }
    if (VAR_8) {
        switch (VAR_8->format) {
        case 129:
            if (VAR_11.img.in_sample_size == VAR_11.img.enc_sample_size) {
                FUNC_11(&VAR_11, VAR_8);
            } else {
                const int VAR_13 = FUNC_1(VAR_10->api->opt_get(VAR_10->param, "SampleShift"));
                FUNC_12(&VAR_11, VAR_8, VAR_13);
            }
            break;
        case 128:
            if (VAR_11.img.in_sample_size == VAR_11.img.enc_sample_size) {
                FUNC_11(&VAR_11, VAR_8);
                break;
            }
        default:
            FUNC_2(VAR_6, VAR_1, "Unsupported pixel format\n");
            return FUNC_0(VAR_2);
            break;
        }

        VAR_11.i_state = 0;
        VAR_11.i_pts = VAR_8->pts;
        VAR_11.i_type = VAR_5;

        VAR_12 = VAR_10->api->encoder_encode(VAR_10->encoder, &VAR_11, &VAR_10->packet);

        if (VAR_12) {
            FUNC_2(VAR_6, VAR_1, "encode failed\n");
            return VAR_0;
        }

    } else {
        VAR_10->api->encoder_encode(VAR_10->encoder, ((void*)0), &VAR_10->packet);
    }

    if ((VAR_10->packet.len) && (VAR_10->packet.state != VAR_4)){

        if (FUNC_3(VAR_7, VAR_10->packet.len) < 0){
            FUNC_2(VAR_6, VAR_1, "packet alloc failed\n");
            VAR_10->api->encoder_packet_unref(VAR_10->encoder, &VAR_10->packet);
            return FUNC_0(VAR_3);
        }

        VAR_7->pts = VAR_10->packet.pts;
        VAR_7->dts = VAR_10->packet.dts;

        FUNC_4(VAR_7->data, VAR_10->packet.stream, VAR_10->packet.len);
        VAR_7->size = VAR_10->packet.len;

        VAR_10->api->encoder_packet_unref(VAR_10->encoder, &VAR_10->packet);

        *VAR_9 = 1;
    } else {
        *VAR_9 = 0;
    }

    return 0;
}
