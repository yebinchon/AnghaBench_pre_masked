
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct eac3_info {scalar_t__ tag; int cenc; struct eac3_info* vos_data; scalar_t__ vos_len; struct eac3_info* eac3_priv; int pkt; int cover_image; struct eac3_info* frag_info; struct eac3_info* cluster; struct eac3_info* par; struct eac3_info* extradata; } ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int chapter_track; int nb_streams; struct eac3_info* tracks; scalar_t__ nb_meta_tmcd; } ;
typedef TYPE_1__ MOVMuxContext ;
typedef TYPE_2__ AVFormatContext ;


 scalar_t__ FUNC_0 (char,char,char,char) ;
 int FUNC_1 (struct eac3_info**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct eac3_info*) ;

__attribute__((used)) static void FUNC_5(AVFormatContext *VAR_0)
{
    MOVMuxContext *VAR_1 = VAR_0->priv_data;
    int VAR_2;

    if (VAR_1->chapter_track) {
        if (VAR_1->tracks[VAR_1->chapter_track].par)
            FUNC_1(&VAR_1->tracks[VAR_1->chapter_track].par->extradata);
        FUNC_1(&VAR_1->tracks[VAR_1->chapter_track].par);
    }

    for (VAR_2 = 0; VAR_2 < VAR_1->nb_streams; VAR_2++) {
        if (VAR_1->tracks[VAR_2].tag == FUNC_0('r','t','p',' '))
            FUNC_4(&VAR_1->tracks[VAR_2]);
        else if (VAR_1->tracks[VAR_2].tag == FUNC_0('t','m','c','d') && VAR_1->nb_meta_tmcd)
            FUNC_1(&VAR_1->tracks[VAR_2].par);
        FUNC_1(&VAR_1->tracks[VAR_2].cluster);
        FUNC_1(&VAR_1->tracks[VAR_2].frag_info);
        FUNC_2(&VAR_1->tracks[VAR_2].cover_image);

        if (VAR_1->tracks[VAR_2].eac3_priv) {
            struct eac3_info *VAR_3 = VAR_1->tracks[VAR_2].eac3_priv;
            FUNC_2(&VAR_3->pkt);
            FUNC_1(&VAR_1->tracks[VAR_2].eac3_priv);
        }
        if (VAR_1->tracks[VAR_2].vos_len)
            FUNC_1(&VAR_1->tracks[VAR_2].vos_data);

        FUNC_3(&VAR_1->tracks[VAR_2].cenc);
    }

    FUNC_1(&VAR_1->tracks);
}
