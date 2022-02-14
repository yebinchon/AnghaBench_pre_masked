
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int size; scalar_t__ data; scalar_t__ dts; scalar_t__ pts; int flags; } ;
struct TYPE_9__ {scalar_t__ nb_subs; TYPE_2__* subs; int allocated_size; } ;
typedef TYPE_1__ FFDemuxSubtitlesQueue ;
typedef TYPE_2__ AVPacket ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_2__*,int *,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,size_t) ;
 scalar_t__ FUNC_2 (TYPE_2__*,size_t) ;
 int FUNC_3 (scalar_t__,int const*,size_t) ;

AVPacket *FUNC_4(FFDemuxSubtitlesQueue *VAR_2,
                                    const uint8_t *VAR_3, size_t VAR_4, int VAR_5)
{
    AVPacket *VAR_6, *VAR_7;

    if (VAR_5 && VAR_2->nb_subs > 0) {


        int VAR_8;
        VAR_7 = &VAR_2->subs[VAR_2->nb_subs - 1];
        VAR_8 = VAR_7->size;
        if (FUNC_1(VAR_7, VAR_4) < 0)
            return ((void*)0);
        FUNC_3(VAR_7->data + VAR_8, VAR_3, VAR_4);
    } else {


        if (VAR_2->nb_subs >= VAR_1/sizeof(*VAR_2->subs) - 1)
            return ((void*)0);
        VAR_6 = FUNC_0(VAR_2->subs, &VAR_2->allocated_size,
                               (VAR_2->nb_subs + 1) * sizeof(*VAR_2->subs));
        if (!VAR_6)
            return ((void*)0);
        VAR_2->subs = VAR_6;
        VAR_7 = &VAR_6[VAR_2->nb_subs++];
        if (FUNC_2(VAR_7, VAR_4) < 0)
            return ((void*)0);
        VAR_7->flags |= VAR_0;
        VAR_7->pts = VAR_7->dts = 0;
        FUNC_3(VAR_7->data, VAR_3, VAR_4);
    }
    return VAR_7;
}
