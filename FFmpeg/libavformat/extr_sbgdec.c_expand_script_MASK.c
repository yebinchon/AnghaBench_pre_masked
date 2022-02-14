
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbg_script {int nb_tseq; int nb_events; TYPE_1__* events; int end_ts; scalar_t__ opt_end_at_last; int * tseq; } ;
struct TYPE_2__ {int ts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ,char*) ;
 int FUNC_1 (void*,struct sbg_script*) ;
 int FUNC_2 (void*,struct sbg_script*,int*,int ,int *) ;

__attribute__((used)) static int FUNC_3(void *VAR_2, struct sbg_script *VAR_3)
{
    int VAR_4, VAR_5, VAR_6 = 0;

    FUNC_1(VAR_2, VAR_3);
    for (VAR_4 = 0; VAR_4 < VAR_3->nb_tseq; VAR_4++) {
        VAR_5 = FUNC_2(VAR_2, VAR_3, &VAR_6, 0, &VAR_3->tseq[VAR_4]);
        if (VAR_5 < 0)
            return VAR_5;
    }
    if (!VAR_3->nb_events) {
        FUNC_0(VAR_2, VAR_1, "No events in script\n");
        return VAR_0;
    }
    if (VAR_3->opt_end_at_last)
        VAR_3->end_ts = VAR_3->events[VAR_3->nb_events - 1].ts;
    return 0;
}
