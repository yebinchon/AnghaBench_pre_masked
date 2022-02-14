
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int pts; int dts; } ;
struct TYPE_7__ {int current_sub_idx; scalar_t__ nb_subs; TYPE_2__* subs; } ;
typedef TYPE_1__ FFDemuxSubtitlesQueue ;
typedef TYPE_2__ AVPacket ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_2__*) ;

int FUNC_2(FFDemuxSubtitlesQueue *VAR_2, AVPacket *VAR_3)
{
    AVPacket *VAR_4 = VAR_2->subs + VAR_2->current_sub_idx;

    if (VAR_2->current_sub_idx == VAR_2->nb_subs)
        return VAR_0;
    if (FUNC_1(VAR_3, VAR_4) < 0) {
        return FUNC_0(VAR_1);
    }

    VAR_3->dts = VAR_3->pts;
    VAR_2->current_sub_idx++;
    return 0;
}
