
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int lock; TYPE_2__* q_tail; TYPE_2__* q_head; int cv_sample_sent; } ;
typedef TYPE_1__ VTEncContext ;
struct TYPE_7__ {struct TYPE_7__* next; int * sei; int cm_buffer; } ;
typedef int ExtraSEI ;
typedef int CMSampleBufferRef ;
typedef TYPE_2__ BufNode ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_7(VTEncContext *VAR_1, CMSampleBufferRef VAR_2, ExtraSEI *VAR_3)
{
    BufNode *VAR_4 = FUNC_2(sizeof(BufNode));
    if (!VAR_4) {
        FUNC_6(VAR_1, FUNC_0(VAR_0));
        return;
    }

    FUNC_1(VAR_2);
    VAR_4->cm_buffer = VAR_2;
    VAR_4->sei = VAR_3;
    VAR_4->next = ((void*)0);

    FUNC_4(&VAR_1->lock);
    FUNC_3(&VAR_1->cv_sample_sent);

    if (!VAR_1->q_head) {
        VAR_1->q_head = VAR_4;
    } else {
        VAR_1->q_tail->next = VAR_4;
    }

    VAR_1->q_tail = VAR_4;

    FUNC_5(&VAR_1->lock);
}
