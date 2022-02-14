
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int size; scalar_t__ time; scalar_t__ duration; scalar_t__ tfrf_offset; int offset; } ;
struct TYPE_11__ {int nb_streams; TYPE_2__* tracks; } ;
struct TYPE_10__ {unsigned int nb_frag_info; unsigned int frag_info_capacity; scalar_t__ start_dts; scalar_t__ frag_start; scalar_t__ end_pts; TYPE_1__* cluster; TYPE_4__* frag_info; int entry; } ;
struct TYPE_9__ {scalar_t__ cts; scalar_t__ dts; } ;
typedef TYPE_2__ MOVTrack ;
typedef TYPE_3__ MOVMuxContext ;
typedef TYPE_4__ MOVFragmentInfo ;
typedef int AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_4__**,unsigned int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(AVIOContext *VAR_2, MOVMuxContext *VAR_3, int VAR_4,
                                int VAR_5)
{
    int VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_3->nb_streams; VAR_6++) {
        MOVTrack *VAR_7 = &VAR_3->tracks[VAR_6];
        MOVFragmentInfo *VAR_8;
        if ((VAR_4 >= 0 && VAR_6 != VAR_4) || !VAR_7->entry)
            continue;
        VAR_7->nb_frag_info++;
        if (VAR_7->nb_frag_info >= VAR_7->frag_info_capacity) {
            unsigned VAR_9 = VAR_7->nb_frag_info + VAR_1;
            if (FUNC_1(&VAR_7->frag_info,
                                  VAR_9,
                                  sizeof(*VAR_7->frag_info)))
                return FUNC_0(VAR_0);
            VAR_7->frag_info_capacity = VAR_9;
        }
        VAR_8 = &VAR_7->frag_info[VAR_7->nb_frag_info - 1];
        VAR_8->offset = FUNC_2(VAR_2);
        VAR_8->size = VAR_5;


        VAR_8->time = VAR_7->start_dts + VAR_7->frag_start +
                         VAR_7->cluster[0].cts;
        VAR_8->duration = VAR_7->end_pts -
                         (VAR_7->cluster[0].dts + VAR_7->cluster[0].cts);



        if (VAR_8->time < 0) {
            VAR_8->duration += VAR_8->time;
            VAR_8->time = 0;
        }
        VAR_8->tfrf_offset = 0;
        FUNC_3(VAR_2, VAR_3, VAR_7);
    }
    return 0;
}
