
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int bsf; int ctx; } ;
typedef TYPE_2__ librav1eContext ;
struct TYPE_21__ {int flags; int ticks_per_frame; TYPE_1__* internal; TYPE_2__* priv_data; } ;
struct TYPE_20__ {int pts; int dts; int flags; int data; } ;
struct TYPE_19__ {scalar_t__ frame_type; int input_frameno; int len; int data; } ;
struct TYPE_17__ {int draining; } ;
typedef TYPE_3__ RaPacket ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVCodecContext ;


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





 scalar_t__ VAR_9 ;
 int FUNC_1 (int ,TYPE_4__*) ;
 int FUNC_2 (int ,TYPE_4__*) ;
 int FUNC_3 (TYPE_5__*,int ,char*,...) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_5__*,int) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int ,TYPE_3__**) ;
 int FUNC_10 (int) ;
 int FUNC_11 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_12(AVCodecContext *VAR_10, AVPacket *VAR_11)
{
    librav1eContext *VAR_12 = VAR_10->priv_data;
    RaPacket *VAR_13 = ((void*)0);
    int VAR_14;

retry:

    if (VAR_10->flags & VAR_4) {
        int VAR_15 = FUNC_6(VAR_10, 0);
        if (VAR_15 < 0)
            return VAR_15;
    } else if (VAR_10->flags & VAR_5) {
        int VAR_16 = FUNC_11(VAR_10);
        if (VAR_16 < 0)
            return VAR_16;
    }

    VAR_14 = FUNC_9(VAR_12->ctx, &VAR_13);
    switch (VAR_14) {
    case 128:
        break;
    case 130:
        if (VAR_10->flags & VAR_4) {
            int VAR_17 = FUNC_6(VAR_10, 1);
            if (VAR_17 < 0)
                return VAR_17;
        }
        return VAR_0;
    case 132:
        if (VAR_10->internal->draining)
            goto retry;
        return FUNC_0(VAR_8);
    case 129:
        if (VAR_10->internal->draining) {
            FUNC_3(VAR_10, VAR_6, "Unexpected error when receiving packet after EOF.\n");
            return VAR_1;
        }
        return FUNC_0(VAR_8);
    case 131:
        FUNC_3(VAR_10, VAR_6, "Could not encode frame: %s\n", FUNC_10(VAR_14));
        return VAR_1;
    default:
        FUNC_3(VAR_10, VAR_6, "Unknown return code %d from rav1e_receive_packet: %s\n", VAR_14, FUNC_10(VAR_14));
        return VAR_2;
    }

    VAR_14 = FUNC_4(VAR_11, VAR_13->len);
    if (VAR_14 < 0) {
        FUNC_3(VAR_10, VAR_6, "Could not allocate packet.\n");
        FUNC_8(VAR_13);
        return VAR_14;
    }

    FUNC_7(VAR_11->data, VAR_13->data, VAR_13->len);

    if (VAR_13->frame_type == VAR_9)
        VAR_11->flags |= VAR_7;

    VAR_11->pts = VAR_11->dts = VAR_13->input_frameno * VAR_10->ticks_per_frame;
    FUNC_8(VAR_13);

    if (VAR_10->flags & VAR_3) {
        int VAR_18 = FUNC_2(VAR_12->bsf, VAR_11);
        if (VAR_18 < 0) {
            FUNC_3(VAR_10, VAR_6, "extradata extraction send failed.\n");
            FUNC_5(VAR_11);
            return VAR_18;
        }

        VAR_18 = FUNC_1(VAR_12->bsf, VAR_11);
        if (VAR_18 < 0) {
            FUNC_3(VAR_10, VAR_6, "extradata extraction receive failed.\n");
            FUNC_5(VAR_11);
            return VAR_18;
        }
    }

    return 0;
}
