
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_14__ {int nb_streams; TYPE_1__** streams; int * pb; TYPE_2__* priv_data; } ;
struct TYPE_13__ {scalar_t__ pos; int size; int timestamp; } ;
struct TYPE_12__ {int stream_index; int pts; } ;
struct TYPE_11__ {size_t* index_pos; } ;
struct TYPE_10__ {size_t nb_index_entries; TYPE_4__* index_entries; } ;
typedef TYPE_2__ Rl2DemuxContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVIndexEntry ;
typedef int AVIOContext ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_4,
                            AVPacket *VAR_5)
{
    Rl2DemuxContext *VAR_6 = VAR_4->priv_data;
    AVIOContext *VAR_7 = VAR_4->pb;
    AVIndexEntry *VAR_8 = ((void*)0);
    int VAR_9;
    int VAR_10 = 0;
    int VAR_11 = -1;
    int64_t VAR_12 = VAR_2;


    for(VAR_9=0; VAR_9<VAR_4->nb_streams; VAR_9++){
        if(VAR_6->index_pos[VAR_9] < VAR_4->streams[VAR_9]->nb_index_entries
              && VAR_4->streams[VAR_9]->index_entries[ VAR_6->index_pos[VAR_9] ].pos < VAR_12){
            VAR_8 = &VAR_4->streams[VAR_9]->index_entries[ VAR_6->index_pos[VAR_9] ];
            VAR_12= VAR_8->pos;
            VAR_11= VAR_9;
        }
    }

    if(VAR_11 == -1)
        return VAR_0;

    ++VAR_6->index_pos[VAR_11];


    FUNC_3(VAR_7, VAR_8->pos, VAR_3);


    VAR_10 = FUNC_1(VAR_7, VAR_5, VAR_8->size);
    if(VAR_10 != VAR_8->size){
        FUNC_2(VAR_5);
        return FUNC_0(VAR_1);
    }

    VAR_5->stream_index = VAR_11;
    VAR_5->pts = VAR_8->timestamp;

    return VAR_10;
}
