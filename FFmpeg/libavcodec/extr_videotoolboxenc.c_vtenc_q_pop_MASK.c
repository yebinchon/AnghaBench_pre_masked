
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int async_error; scalar_t__ frame_ct_in; scalar_t__ frame_ct_out; int lock; int * q_tail; TYPE_2__* q_head; int cv_sample_sent; scalar_t__ flushing; } ;
typedef TYPE_1__ VTEncContext ;
struct TYPE_8__ {struct TYPE_8__* sei; struct TYPE_8__* data; int * cm_buffer; struct TYPE_8__* next; } ;
typedef TYPE_2__ ExtraSEI ;
typedef int * CMSampleBufferRef ;
typedef TYPE_2__ BufNode ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(VTEncContext *VAR_0, bool VAR_1, CMSampleBufferRef *VAR_2, ExtraSEI **VAR_3)
{
    BufNode *VAR_4;

    FUNC_2(&VAR_0->lock);

    if (VAR_0->async_error) {
        FUNC_3(&VAR_0->lock);
        return VAR_0->async_error;
    }

    if (VAR_0->flushing && VAR_0->frame_ct_in == VAR_0->frame_ct_out) {
        *VAR_2 = ((void*)0);

        FUNC_3(&VAR_0->lock);
        return 0;
    }

    while (!VAR_0->q_head && !VAR_0->async_error && VAR_1) {
        FUNC_1(&VAR_0->cv_sample_sent, &VAR_0->lock);
    }

    if (!VAR_0->q_head) {
        FUNC_3(&VAR_0->lock);
        *VAR_2 = ((void*)0);
        return 0;
    }

    VAR_4 = VAR_0->q_head;
    VAR_0->q_head = VAR_0->q_head->next;
    if (!VAR_0->q_head) {
        VAR_0->q_tail = ((void*)0);
    }

    FUNC_3(&VAR_0->lock);

    *VAR_2 = VAR_4->cm_buffer;
    if (VAR_3 && *VAR_2) {
        *VAR_3 = VAR_4->sei;
    } else if (VAR_4->sei) {
        if (VAR_4->sei->data) FUNC_0(VAR_4->sei->data);
        FUNC_0(VAR_4->sei);
    }
    FUNC_0(VAR_4);

    VAR_0->frame_ct_out++;

    return 0;
}
