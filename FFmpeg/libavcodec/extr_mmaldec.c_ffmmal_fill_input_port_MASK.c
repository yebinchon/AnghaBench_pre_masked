
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_21__ {int buffer_size; } ;
struct TYPE_20__ {TYPE_4__* priv_data; } ;
struct TYPE_19__ {int flags; int ref; struct TYPE_19__* next; int length; int data; int dts; int pts; } ;
struct TYPE_18__ {int packets_buffered; TYPE_2__* decoder; TYPE_5__* waiting_buffers_tail; TYPE_5__* waiting_buffers; TYPE_1__* pool_in; } ;
struct TYPE_17__ {int flags; int alloc_size; TYPE_5__* user_data; int length; int data; int dts; int pts; scalar_t__ cmd; } ;
struct TYPE_16__ {TYPE_8__** input; } ;
struct TYPE_15__ {int queue; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_BUFFER_HEADER_T ;
typedef TYPE_4__ MMALDecodeContext ;
typedef TYPE_5__ FFBufferEntry ;
typedef TYPE_6__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_6__*,int ,char*,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_8__*,TYPE_3__*) ;
 TYPE_3__* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_3)
{
    MMALDecodeContext *VAR_4 = VAR_3->priv_data;

    while (VAR_4->waiting_buffers) {
        MMAL_BUFFER_HEADER_T *VAR_5;
        FFBufferEntry *VAR_6;
        MMAL_STATUS_T VAR_7;

        VAR_5 = FUNC_7(VAR_4->pool_in->queue);
        if (!VAR_5)
            return 0;

        VAR_6 = VAR_4->waiting_buffers;

        FUNC_5(VAR_5);
        VAR_5->cmd = 0;
        VAR_5->pts = VAR_6->pts;
        VAR_5->dts = VAR_6->dts;
        VAR_5->flags = VAR_6->flags;
        VAR_5->data = VAR_6->data;
        VAR_5->length = VAR_6->length;
        VAR_5->user_data = VAR_6;
        VAR_5->alloc_size = VAR_4->decoder->input[0]->buffer_size;


        VAR_4->waiting_buffers = VAR_6->next;
        if (VAR_4->waiting_buffers_tail == VAR_6)
            VAR_4->waiting_buffers_tail = ((void*)0);

        if ((VAR_7 = FUNC_6(VAR_4->decoder->input[0], VAR_5))) {
            FUNC_4(VAR_5);
            FUNC_1(&VAR_6->ref);
            if (VAR_6->flags & VAR_2)
                FUNC_0(&VAR_4->packets_buffered, -1);
            FUNC_2(VAR_6);
        }

        if (VAR_7) {
            FUNC_3(VAR_3, VAR_1, "MMAL error %d when sending input\n", (int)VAR_7);
            return VAR_0;
        }
    }

    return 0;
}
