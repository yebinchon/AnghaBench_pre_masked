
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* entries; } ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {TYPE_4__* tracks; TYPE_4__* attachments; TYPE_4__* cues; TYPE_4__* seekhead; int tags_bc; int tracks_bc; int info_bc; int cluster_bc; } ;
typedef TYPE_1__ MatroskaMuxContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (TYPE_4__**) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(AVFormatContext *VAR_0)
{
    MatroskaMuxContext *VAR_1 = VAR_0->priv_data;

    FUNC_1(&VAR_1->cluster_bc);
    FUNC_1(&VAR_1->info_bc);
    FUNC_1(&VAR_1->tracks_bc);
    FUNC_1(&VAR_1->tags_bc);

    if (VAR_1->seekhead) {
        FUNC_0(&VAR_1->seekhead->entries);
        FUNC_0(&VAR_1->seekhead);
    }
    if (VAR_1->cues) {
        FUNC_0(&VAR_1->cues->entries);
        FUNC_0(&VAR_1->cues);
    }
    if (VAR_1->attachments) {
        FUNC_0(&VAR_1->attachments->entries);
        FUNC_0(&VAR_1->attachments);
    }
    FUNC_0(&VAR_1->tracks);
}
