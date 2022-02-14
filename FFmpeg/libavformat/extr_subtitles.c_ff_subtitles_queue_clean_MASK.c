
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nb_subs; int allocated_size; int current_sub_idx; int * subs; } ;
typedef TYPE_1__ FFDemuxSubtitlesQueue ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int *) ;

void FUNC_2(FFDemuxSubtitlesQueue *VAR_0)
{
    int VAR_1;

    for (VAR_1 = 0; VAR_1 < VAR_0->nb_subs; VAR_1++)
        FUNC_1(&VAR_0->subs[VAR_1]);
    FUNC_0(&VAR_0->subs);
    VAR_0->nb_subs = VAR_0->allocated_size = VAR_0->current_sub_idx = 0;
}
