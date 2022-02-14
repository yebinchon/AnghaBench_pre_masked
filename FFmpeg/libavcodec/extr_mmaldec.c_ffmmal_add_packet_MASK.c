
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_21__ {int size; int * data; } ;
struct TYPE_20__ {TYPE_3__* priv_data; } ;
struct TYPE_19__ {int size; scalar_t__ pts; scalar_t__ dts; int * data; TYPE_7__* buf; } ;
struct TYPE_18__ {struct TYPE_18__* next; void* ref; int flags; scalar_t__ length; void* dts; void* pts; int * data; } ;
struct TYPE_17__ {int eos_sent; int eos_received; TYPE_4__* waiting_buffers_tail; TYPE_4__* waiting_buffers; int packets_buffered; TYPE_2__* decoder; int packets_sent; } ;
struct TYPE_16__ {TYPE_1__** input; } ;
struct TYPE_15__ {int buffer_size; } ;
typedef TYPE_3__ MMALDecodeContext ;
typedef TYPE_4__ FFBufferEntry ;
typedef TYPE_5__ AVPacket ;
typedef TYPE_6__ AVCodecContext ;
typedef TYPE_7__ AVBufferRef ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_2 (int *,int) ;
 TYPE_7__* FUNC_3 (int) ;
 void* FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (TYPE_7__**) ;
 int FUNC_6 (TYPE_4__*) ;
 TYPE_4__* FUNC_7 (int) ;
 int FUNC_8 (int *,int *,int) ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_7, AVPacket *VAR_8,
                             int VAR_9)
{
    MMALDecodeContext *VAR_10 = VAR_7->priv_data;
    AVBufferRef *VAR_11 = ((void*)0);
    int VAR_12 = 0;
    uint8_t *VAR_13 = (uint8_t *)"";
    uint8_t *VAR_14;
    int VAR_15 = 0;

    if (VAR_8->size) {
        if (VAR_8->buf) {
            VAR_11 = FUNC_4(VAR_8->buf);
            VAR_12 = VAR_8->size;
            VAR_13 = VAR_8->data;
        } else {
            VAR_11 = FUNC_3(VAR_8->size);
            if (VAR_11) {
                FUNC_8(VAR_11->data, VAR_8->data, VAR_8->size);
                VAR_12 = VAR_11->size;
                VAR_13 = VAR_11->data;
            }
        }
        if (!VAR_11) {
            VAR_15 = FUNC_0(VAR_1);
            goto done;
        }
        if (!VAR_9)
            VAR_10->packets_sent++;
    } else {
        if (VAR_10->eos_sent)
            goto done;
        if (!VAR_10->packets_sent) {

            VAR_10->eos_sent = 1;
            VAR_10->eos_received = 1;
            goto done;
        }
    }

    VAR_14 = VAR_13;

    do {
        FFBufferEntry *VAR_16 = FUNC_7(sizeof(*VAR_16));
        if (!VAR_16) {
            VAR_15 = FUNC_0(VAR_1);
            goto done;
        }

        VAR_16->data = VAR_13;
        VAR_16->length = FUNC_1(VAR_12, VAR_10->decoder->input[0]->buffer_size);

        if (VAR_9)
            VAR_16->flags |= VAR_2;

        if (VAR_13 == VAR_14)
            VAR_16->flags |= VAR_5;

        VAR_13 += VAR_16->length;
        VAR_12 -= VAR_16->length;

        VAR_16->pts = VAR_8->pts == VAR_0 ? VAR_6 : VAR_8->pts;
        VAR_16->dts = VAR_8->dts == VAR_0 ? VAR_6 : VAR_8->dts;

        if (!VAR_12) {
            VAR_16->flags |= VAR_4;
            FUNC_2(&VAR_10->packets_buffered, 1);
        }

        if (!VAR_16->length) {
            VAR_16->flags |= VAR_3;
            VAR_10->eos_sent = 1;
        }

        if (VAR_11) {
            VAR_16->ref = FUNC_4(VAR_11);
            if (!VAR_16->ref) {
                FUNC_6(VAR_16);
                VAR_15 = FUNC_0(VAR_1);
                goto done;
            }
        }


        if (!VAR_10->waiting_buffers)
            VAR_10->waiting_buffers = VAR_16;
        if (VAR_10->waiting_buffers_tail)
            VAR_10->waiting_buffers_tail->next = VAR_16;
        VAR_10->waiting_buffers_tail = VAR_16;
    } while (VAR_12);

done:
    FUNC_5(&VAR_11);
    return VAR_15;
}
