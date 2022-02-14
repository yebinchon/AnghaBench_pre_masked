
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct qscanFilter {int minlen; int maxlen; int importrate; } ;
struct TYPE_5__ {int name; } ;
typedef TYPE_1__ queue ;
typedef int list ;
typedef int dictEntry ;


 TYPE_1__* FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

void FUNC_5(void *VAR_0, const dictEntry *VAR_1) {
    void **VAR_2 = (void**)VAR_0;
    list *VAR_3 = VAR_2[0];
    struct qscanFilter *VAR_4 = VAR_2[1];
    queue *VAR_5 = FUNC_0(VAR_1);
    long VAR_6 = (VAR_4->minlen != -1 || VAR_4->maxlen != -1) ?
                    (long) FUNC_4(VAR_5) : 0;


    if (VAR_4->minlen != -1 && VAR_6 < VAR_4->minlen) return;
    if (VAR_4->maxlen != -1 && VAR_6 > VAR_4->maxlen) return;
    if (VAR_4->importrate != -1 &&
        FUNC_1(VAR_5) < VAR_4->importrate) return;



    FUNC_2(VAR_5->name);
    FUNC_3(VAR_3,VAR_5->name);
}
