
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ duration; scalar_t__ pts; } ;
struct TYPE_5__ {int nb_subs; scalar_t__ sort; int keep_duplicates; TYPE_2__* subs; } ;
typedef TYPE_1__ FFDemuxSubtitlesQueue ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,int,int,int ) ;

void FUNC_2(void *VAR_3, FFDemuxSubtitlesQueue *VAR_4)
{
    int VAR_5;

    if (!VAR_4->nb_subs)
        return;

    FUNC_1(VAR_4->subs, VAR_4->nb_subs, sizeof(*VAR_4->subs),
          VAR_4->sort == VAR_0 ? VAR_2
                                     : VAR_1);
    for (VAR_5 = 0; VAR_5 < VAR_4->nb_subs; VAR_5++)
        if (VAR_4->subs[VAR_5].duration < 0 && VAR_5 < VAR_4->nb_subs - 1)
            VAR_4->subs[VAR_5].duration = VAR_4->subs[VAR_5 + 1].pts - VAR_4->subs[VAR_5].pts;

    if (!VAR_4->keep_duplicates)
        FUNC_0(VAR_3, VAR_4);
}
