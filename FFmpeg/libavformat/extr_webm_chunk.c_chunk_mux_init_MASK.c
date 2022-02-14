
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int chunk_duration; TYPE_3__* avf; int oformat; } ;
typedef TYPE_2__ WebMChunkContext ;
struct TYPE_10__ {int nb_streams; int streams; TYPE_2__* priv_data; TYPE_1__* oformat; int metadata; int max_delay; int interrupt_callback; } ;
struct TYPE_8__ {int * priv_class; } ;
typedef TYPE_3__ AVFormatContext ;
typedef int AVClass ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,char*,int,int ) ;
 int FUNC_3 (TYPE_3__**,int ,int *,int *) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_0)
{
    WebMChunkContext *VAR_1 = VAR_0->priv_data;
    AVFormatContext *VAR_2;
    int VAR_3;

    VAR_3 = FUNC_3(&VAR_1->avf, VAR_1->oformat, ((void*)0), ((void*)0));
    if (VAR_3 < 0)
        return VAR_3;
    VAR_2 = VAR_1->avf;

    VAR_2->interrupt_callback = VAR_0->interrupt_callback;
    VAR_2->max_delay = VAR_0->max_delay;
    FUNC_0(&VAR_2->metadata, VAR_0->metadata, 0);

    *(const AVClass**)VAR_2->priv_data = VAR_2->oformat->priv_class;
    FUNC_1(VAR_2->priv_data);
    FUNC_2(VAR_2->priv_data, "dash", 1, 0);
    FUNC_2(VAR_2->priv_data, "cluster_time_limit", VAR_1->chunk_duration, 0);
    FUNC_2(VAR_2->priv_data, "live", 1, 0);

    VAR_2->streams = VAR_0->streams;
    VAR_2->nb_streams = VAR_0->nb_streams;

    return 0;
}
