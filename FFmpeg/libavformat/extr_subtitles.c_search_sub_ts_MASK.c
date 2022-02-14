
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_5__ {int nb_subs; TYPE_1__* subs; } ;
struct TYPE_4__ {scalar_t__ pts; } ;
typedef TYPE_2__ FFDemuxSubtitlesQueue ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(const FFDemuxSubtitlesQueue *VAR_1, int64_t VAR_2)
{
    int VAR_3 = 0, VAR_4 = VAR_1->nb_subs - 1;

    if (VAR_4 < VAR_3)
        return FUNC_0(VAR_0);

    for (;;) {
        int VAR_5;

        if (VAR_3 == VAR_4)
            return VAR_3;
        if (VAR_3 == VAR_4 - 1)
            return VAR_1->subs[VAR_3].pts <= VAR_1->subs[VAR_4].pts ? VAR_3 : VAR_4;
        VAR_5 = (VAR_3 + VAR_4) / 2;
        if (VAR_1->subs[VAR_5].pts <= VAR_2)
            VAR_3 = VAR_5;
        else
            VAR_4 = VAR_5;
    }
}
