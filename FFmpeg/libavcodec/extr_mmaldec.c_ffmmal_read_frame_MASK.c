
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_25__ {int format; } ;
struct TYPE_24__ {TYPE_4__* priv_data; } ;
struct TYPE_23__ {int eos_received; int frames_output; int queue_decoded_frames; TYPE_2__* decoder; scalar_t__ eos_sent; scalar_t__ packets_sent; int packets_buffered; } ;
struct TYPE_22__ {int flags; scalar_t__ cmd; scalar_t__ length; } ;
struct TYPE_21__ {TYPE_8__** output; } ;
struct TYPE_20__ {int format; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_EVENT_FORMAT_CHANGED_T ;
typedef TYPE_2__ MMAL_COMPONENT_T ;
typedef TYPE_3__ MMAL_BUFFER_HEADER_T ;
typedef TYPE_4__ MMALDecodeContext ;
typedef int AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_5__*,int ,char*,...) ;
 int FUNC_3 (TYPE_5__*,int *,TYPE_3__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_3__*) ;
 TYPE_1__* FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (TYPE_8__*) ;
 scalar_t__ FUNC_11 (TYPE_8__*,int ) ;
 TYPE_3__* FUNC_12 (int ) ;
 TYPE_3__* FUNC_13 (int ,int) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_14(AVCodecContext *VAR_8, AVFrame *VAR_9, int *VAR_10)
{
    MMALDecodeContext *VAR_11 = VAR_8->priv_data;
    MMAL_BUFFER_HEADER_T *VAR_12 = ((void*)0);
    MMAL_STATUS_T VAR_13 = 0;
    int VAR_14 = 0;

    if (VAR_11->eos_received)
        goto done;

    while (1) {
        if (FUNC_0(&VAR_11->packets_buffered) > VAR_4 ||
            (VAR_11->packets_sent && VAR_11->eos_sent)) {




            VAR_12 = FUNC_13(VAR_11->queue_decoded_frames, 100);
            if (!VAR_12) {
                FUNC_2(VAR_8, VAR_1, "Did not get output frame from MMAL.\n");
                VAR_14 = VAR_0;
                goto done;
            }
        } else {
            VAR_12 = FUNC_12(VAR_11->queue_decoded_frames);
            if (!VAR_12)
                goto done;
        }

        VAR_11->eos_received |= !!(VAR_12->flags & VAR_5);
        if (VAR_11->eos_received)
            goto done;

        if (VAR_12->cmd == VAR_6) {
            MMAL_COMPONENT_T *VAR_15 = VAR_11->decoder;
            MMAL_EVENT_FORMAT_CHANGED_T *VAR_16 = FUNC_8(VAR_12);
            MMAL_BUFFER_HEADER_T *VAR_17;

            FUNC_2(VAR_8, VAR_2, "Changing output format.\n");

            if ((VAR_13 = FUNC_10(VAR_15->output[0])))
                goto done;

            while ((VAR_17 = FUNC_12(VAR_11->queue_decoded_frames)))
                FUNC_7(VAR_17);

            FUNC_9(VAR_15->output[0]->format, VAR_16->format);

            if ((VAR_14 = FUNC_4(VAR_8)) < 0)
                goto done;

            if ((VAR_13 = FUNC_11(VAR_15->output[0], VAR_7)))
                goto done;

            if ((VAR_14 = FUNC_6(VAR_8)) < 0)
                goto done;

            if ((VAR_14 = FUNC_5(VAR_8)) < 0)
                goto done;

            FUNC_7(VAR_12);
            continue;
        } else if (VAR_12->cmd) {
            FUNC_2(VAR_8, VAR_3, "Unknown MMAL event %s on output port\n",
                   FUNC_1(VAR_12->cmd));
            goto done;
        } else if (VAR_12->length == 0) {

            FUNC_7(VAR_12);
            continue;
        }

        VAR_11->frames_output++;

        if ((VAR_14 = FUNC_3(VAR_8, VAR_9, VAR_12)) < 0)
            goto done;

        *VAR_10 = 1;
        break;
    }

done:
    if (VAR_12)
        FUNC_7(VAR_12);
    if (VAR_13 && VAR_14 >= 0)
        VAR_14 = VAR_0;
    return VAR_14;
}
