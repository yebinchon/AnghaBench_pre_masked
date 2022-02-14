
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct playlist {scalar_t__ has_noheader_flag; } ;
struct TYPE_5__ {int ctx_flags; TYPE_1__* priv_data; } ;
struct TYPE_4__ {int n_playlists; struct playlist** playlists; } ;
typedef TYPE_1__ HLSContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(AVFormatContext *VAR_1)
{
    HLSContext *VAR_2 = VAR_1->priv_data;
    int VAR_3 = 0;
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_2->n_playlists; VAR_4++) {
        struct playlist *VAR_5 = VAR_2->playlists[VAR_4];

        if (VAR_5->has_noheader_flag) {
            VAR_3 = 1;
            break;
        }
    }

    if (VAR_3)
        VAR_1->ctx_flags |= VAR_0;
    else
        VAR_1->ctx_flags &= ~VAR_0;
}
