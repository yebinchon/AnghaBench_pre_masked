
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_10__ {int nb_streams; TYPE_3__** streams; TYPE_2__* priv_data; } ;
struct TYPE_9__ {int time_base; TYPE_1__* index_entries; } ;
struct TYPE_8__ {int* index_pos; } ;
struct TYPE_7__ {int timestamp; } ;
typedef TYPE_2__ Rl2DemuxContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_1, int VAR_2, int64_t VAR_3, int VAR_4)
{
    AVStream *VAR_5 = VAR_1->streams[VAR_2];
    Rl2DemuxContext *VAR_6 = VAR_1->priv_data;
    int VAR_7;
    int VAR_8 = FUNC_0(VAR_5, VAR_3, VAR_4);
    if(VAR_8 < 0)
        return -1;

    VAR_6->index_pos[VAR_2] = VAR_8;
    VAR_3 = VAR_5->index_entries[VAR_8].timestamp;

    for(VAR_7=0; VAR_7 < VAR_1->nb_streams; VAR_7++){
        AVStream *VAR_9 = VAR_1->streams[VAR_7];
        VAR_8 = FUNC_0(VAR_9,
                    FUNC_1(VAR_3, VAR_5->time_base, VAR_9->time_base),
                    VAR_4 | VAR_0);

        if(VAR_8 < 0)
            VAR_8 = 0;

        VAR_6->index_pos[VAR_7] = VAR_8;
    }

    return 0;
}
