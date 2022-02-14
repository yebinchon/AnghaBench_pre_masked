
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; } ;
struct TYPE_5__ {int * end; scalar_t__ nb_samples; scalar_t__ nb_frames; TYPE_2__* list; } ;
typedef TYPE_1__ FrameList ;
typedef TYPE_2__ FrameInfo ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(FrameList *VAR_0)
{
    if (VAR_0) {
        while (VAR_0->list) {
            FrameInfo *VAR_1 = VAR_0->list;
            VAR_0->list = VAR_1->next;
            FUNC_0(VAR_1);
        }
        VAR_0->nb_frames = 0;
        VAR_0->nb_samples = 0;
        VAR_0->end = ((void*)0);
    }
}
