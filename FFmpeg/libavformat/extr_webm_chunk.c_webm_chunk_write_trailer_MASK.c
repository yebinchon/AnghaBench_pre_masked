
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* avf; } ;
typedef TYPE_2__ WebMChunkContext ;
struct TYPE_11__ {scalar_t__ nb_streams; int * streams; TYPE_1__* oformat; int pb; TYPE_2__* priv_data; } ;
struct TYPE_9__ {int (* write_trailer ) (TYPE_3__*) ;} ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_0)
{
    WebMChunkContext *VAR_1 = VAR_0->priv_data;
    AVFormatContext *VAR_2 = VAR_1->avf;
    int VAR_3;

    if (!VAR_2->pb) {
        VAR_3 = FUNC_2(VAR_0);
        if (VAR_3 < 0)
            goto fail;
    }
    VAR_2->oformat->write_trailer(VAR_2);
    VAR_3 = FUNC_1(VAR_0, 0);
fail:
    VAR_2->streams = ((void*)0);
    VAR_2->nb_streams = 0;
    FUNC_0(VAR_2);
    return VAR_3;
}
