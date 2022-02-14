
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int nb_streams; int ** streams; TYPE_4__* priv_data; } ;
struct TYPE_11__ {TYPE_3__* cur_file; TYPE_1__* avf; } ;
struct TYPE_10__ {int nb_streams; TYPE_2__* streams; } ;
struct TYPE_9__ {int out_stream_index; } ;
struct TYPE_8__ {int nb_streams; int * streams; } ;
typedef TYPE_4__ ConcatContext ;
typedef int AVStream ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (TYPE_5__*,int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_1)
{
    ConcatContext *VAR_2 = VAR_1->priv_data;
    AVStream *VAR_3;
    int VAR_4, VAR_5;

    for (VAR_4 = VAR_2->cur_file->nb_streams; VAR_4 < VAR_2->avf->nb_streams; VAR_4++) {
        if (VAR_4 < VAR_1->nb_streams) {
            VAR_3 = VAR_1->streams[VAR_4];
        } else {
            if (!(VAR_3 = FUNC_1(VAR_1, ((void*)0))))
                return FUNC_0(VAR_0);
        }
        if ((VAR_5 = FUNC_2(VAR_3, VAR_2->avf->streams[VAR_4])) < 0)
            return VAR_5;
        VAR_2->cur_file->streams[VAR_4].out_stream_index = VAR_4;
    }
    return 0;
}
