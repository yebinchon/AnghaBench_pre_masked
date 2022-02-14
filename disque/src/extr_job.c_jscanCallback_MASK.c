
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct jscanFilter {int * state; scalar_t__ numstates; scalar_t__ queue; } ;
typedef int list ;
struct TYPE_4__ {size_t state; int queue; int nodes_delivered; } ;
typedef TYPE_1__ job ;
typedef int dictEntry ;


 TYPE_1__* FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int *,TYPE_1__*) ;

void FUNC_4(void *VAR_0, const dictEntry *VAR_1) {
    void **VAR_2 = (void**)VAR_0;
    list *VAR_3 = VAR_2[0];
    struct jscanFilter *VAR_4 = VAR_2[1];
    job *VAR_5 = FUNC_0(VAR_1);


    if (FUNC_1(VAR_5->nodes_delivered) == 0) return;


    if (VAR_4->queue && !FUNC_2(VAR_5->queue,VAR_4->queue)) return;
    if (VAR_4->numstates && !VAR_4->state[VAR_5->state]) return;



    FUNC_3(VAR_3,VAR_5);
}
