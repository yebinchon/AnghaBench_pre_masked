
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_7__ {int nb_samples; struct TYPE_7__* next; int pts; } ;
struct TYPE_6__ {int nb_samples; int nb_frames; TYPE_2__* end; TYPE_2__* list; } ;
typedef TYPE_1__ FrameList ;
typedef TYPE_2__ FrameInfo ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(FrameList *VAR_1, int VAR_2, int64_t VAR_3)
{
    FrameInfo *VAR_4 = FUNC_2(sizeof(*VAR_4));
    if (!VAR_4)
        return FUNC_0(VAR_0);
    VAR_4->nb_samples = VAR_2;
    VAR_4->pts = VAR_3;
    VAR_4->next = ((void*)0);

    if (!VAR_1->list) {
        VAR_1->list = VAR_4;
        VAR_1->end = VAR_4;
    } else {
        FUNC_1(VAR_1->end);
        VAR_1->end->next = VAR_4;
        VAR_1->end = VAR_4;
    }
    VAR_1->nb_frames++;
    VAR_1->nb_samples += VAR_2;

    return 0;
}
