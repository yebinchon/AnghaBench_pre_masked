
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int nb_samples; int pts; struct TYPE_8__* next; } ;
struct TYPE_7__ {int nb_samples; int nb_frames; int * end; TYPE_2__* list; } ;
typedef TYPE_1__ FrameList ;
typedef TYPE_2__ FrameInfo ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(FrameList *VAR_0, int VAR_1)
{
    if (VAR_1 >= VAR_0->nb_samples) {
        FUNC_2(VAR_0);
    } else {
        int VAR_2 = VAR_1;
        while (VAR_2 > 0) {
            FrameInfo *VAR_3 = VAR_0->list;
            FUNC_0(VAR_3);
            if (VAR_3->nb_samples <= VAR_2) {
                VAR_2 -= VAR_3->nb_samples;
                VAR_0->list = VAR_3->next;
                if (!VAR_0->list)
                    VAR_0->end = ((void*)0);
                VAR_0->nb_frames--;
                VAR_0->nb_samples -= VAR_3->nb_samples;
                FUNC_1(VAR_3);
            } else {
                VAR_3->nb_samples -= VAR_2;
                VAR_3->pts += VAR_2;
                VAR_0->nb_samples -= VAR_2;
                VAR_2 = 0;
            }
        }
    }
}
