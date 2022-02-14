
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int nb_streams; TYPE_2__* priv_data; } ;
struct TYPE_10__ {TYPE_1__* codecpar; } ;
struct TYPE_9__ {int nb_sinks; int* stream_sink_map; int* sink_stream_subcc_map; } ;
struct TYPE_8__ {int codec_type; int codec_id; } ;
typedef TYPE_2__ LavfiContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_1 (TYPE_4__*,int *) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_3)
{
    LavfiContext *VAR_4 = VAR_3->priv_data;
    AVStream *VAR_5;
    int VAR_6, VAR_7;

    for (VAR_6 = 0; VAR_6 < VAR_4->nb_sinks; VAR_6++) {
        VAR_7 = VAR_4->stream_sink_map[VAR_6];
        if (VAR_4->sink_stream_subcc_map[VAR_7]) {
            VAR_4->sink_stream_subcc_map[VAR_7] = VAR_3->nb_streams;
            if (!(VAR_5 = FUNC_1(VAR_3, ((void*)0))))
                return FUNC_0(VAR_2);
            VAR_5->codecpar->codec_id = VAR_1;
            VAR_5->codecpar->codec_type = VAR_0;
        } else {
            VAR_4->sink_stream_subcc_map[VAR_7] = -1;
        }
    }
    return 0;
}
