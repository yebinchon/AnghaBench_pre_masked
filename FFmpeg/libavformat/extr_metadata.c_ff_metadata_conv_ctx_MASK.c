
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int nb_streams; int nb_chapters; int nb_programs; TYPE_3__** programs; TYPE_2__** chapters; TYPE_1__** streams; int metadata; } ;
struct TYPE_8__ {int metadata; } ;
struct TYPE_7__ {int metadata; } ;
struct TYPE_6__ {int metadata; } ;
typedef int AVMetadataConv ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int *,int const*,int const*) ;

void FUNC_1(AVFormatContext *VAR_0, const AVMetadataConv *VAR_1,
                                                const AVMetadataConv *VAR_2)
{
    int VAR_3;
    FUNC_0(&VAR_0->metadata, VAR_1, VAR_2);
    for (VAR_3=0; VAR_3<VAR_0->nb_streams ; VAR_3++)
        FUNC_0(&VAR_0->streams [VAR_3]->metadata, VAR_1, VAR_2);
    for (VAR_3=0; VAR_3<VAR_0->nb_chapters; VAR_3++)
        FUNC_0(&VAR_0->chapters[VAR_3]->metadata, VAR_1, VAR_2);
    for (VAR_3=0; VAR_3<VAR_0->nb_programs; VAR_3++)
        FUNC_0(&VAR_0->programs[VAR_3]->metadata, VAR_1, VAR_2);
}
