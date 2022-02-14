
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* priv_data; } ;
struct TYPE_9__ {int flags; int ref; struct TYPE_9__* next; } ;
struct TYPE_8__ {scalar_t__ extradata_sent; scalar_t__ packets_sent; scalar_t__ eos_sent; scalar_t__ eos_received; scalar_t__ frames_output; int packets_buffered; int * waiting_buffers_tail; TYPE_3__* waiting_buffers; int queue_decoded_frames; TYPE_1__* decoder; } ;
struct TYPE_7__ {int control; int * output; int * input; } ;
typedef TYPE_1__ MMAL_COMPONENT_T ;
typedef int MMAL_BUFFER_HEADER_T ;
typedef TYPE_2__ MMALDecodeContext ;
typedef TYPE_3__ FFBufferEntry ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(AVCodecContext *VAR_1)
{
    MMALDecodeContext *VAR_2 = VAR_1->priv_data;
    MMAL_COMPONENT_T *VAR_3 = VAR_2->decoder;
    MMAL_BUFFER_HEADER_T *VAR_4;

    FUNC_6(VAR_3->input[0]);
    FUNC_6(VAR_3->output[0]);
    FUNC_6(VAR_3->control);

    FUNC_7(VAR_3->input[0]);
    FUNC_7(VAR_3->output[0]);
    FUNC_7(VAR_3->control);

    while ((VAR_4 = FUNC_8(VAR_2->queue_decoded_frames)))
        FUNC_5(VAR_4);

    while (VAR_2->waiting_buffers) {
        FFBufferEntry *VAR_5 = VAR_2->waiting_buffers;

        VAR_2->waiting_buffers = VAR_5->next;

        if (VAR_5->flags & VAR_0)
            FUNC_0(&VAR_2->packets_buffered, -1);

        FUNC_3(&VAR_5->ref);
        FUNC_4(VAR_5);
    }
    VAR_2->waiting_buffers_tail = ((void*)0);

    FUNC_2(FUNC_1(&VAR_2->packets_buffered) == 0);

    VAR_2->frames_output = VAR_2->eos_received = VAR_2->eos_sent = VAR_2->packets_sent = VAR_2->extradata_sent = 0;
}
