
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {TYPE_4__* priv_data; } ;
struct TYPE_16__ {int stream_match_mode; TYPE_2__* avf; TYPE_1__* cur_file; } ;
struct TYPE_15__ {int out_stream_index; } ;
struct TYPE_14__ {int nb_streams; } ;
struct TYPE_13__ {int nb_streams; TYPE_3__* streams; } ;
typedef TYPE_3__ ConcatStream ;
typedef TYPE_4__ ConcatContext ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;


 TYPE_3__* FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_5__*,int) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_2)
{
    ConcatContext *VAR_3 = VAR_2->priv_data;
    ConcatStream *VAR_4;
    int VAR_5, VAR_6;

    if (VAR_3->cur_file->nb_streams >= VAR_3->avf->nb_streams)
        return 0;
    VAR_4 = FUNC_1(VAR_3->cur_file->streams,
                     VAR_3->avf->nb_streams * sizeof(*VAR_4));
    if (!VAR_4)
        return FUNC_0(VAR_1);
    VAR_3->cur_file->streams = VAR_4;
    FUNC_5(VAR_4 + VAR_3->cur_file->nb_streams, 0,
           (VAR_3->avf->nb_streams - VAR_3->cur_file->nb_streams) * sizeof(*VAR_4));

    for (VAR_5 = VAR_3->cur_file->nb_streams; VAR_5 < VAR_3->avf->nb_streams; VAR_5++) {
        VAR_4[VAR_5].out_stream_index = -1;
        if ((VAR_6 = FUNC_2(VAR_2, VAR_5)) < 0)
            return VAR_6;
    }
    switch (VAR_3->stream_match_mode) {
    case 128:
        VAR_6 = FUNC_4(VAR_2);
        break;
    case 129:
        VAR_6 = FUNC_3(VAR_2);
        break;
    default:
        VAR_6 = VAR_0;
    }
    if (VAR_6 < 0)
        return VAR_6;
    VAR_3->cur_file->nb_streams = VAR_3->avf->nb_streams;
    return 0;
}
