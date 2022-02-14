
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int last_chunk_pos; int last_timestamp_pos; int timeline_start_pos; int serial; int first_video_flag; scalar_t__ nb_index; } ;
typedef TYPE_2__ WtvContext ;
struct TYPE_16__ {int nb_streams; TYPE_3__** streams; TYPE_2__* priv_data; int * pb; } ;
struct TYPE_15__ {TYPE_1__* codecpar; } ;
struct TYPE_13__ {scalar_t__ codec_id; int codec_type; } ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,int ,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_8 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_6)
{
    AVIOContext *VAR_7 = VAR_6->pb;
    WtvContext *VAR_8 = VAR_6->priv_data;
    int VAR_9, VAR_10, VAR_11;
    AVStream *VAR_12;

    VAR_8->last_chunk_pos = -1;
    VAR_8->last_timestamp_pos = -1;

    FUNC_3(VAR_7, &VAR_4);
    FUNC_3(VAR_7, &VAR_5);

    FUNC_2(VAR_7, 0x01);
    FUNC_2(VAR_7, 0x02);
    FUNC_2(VAR_7, 1 << VAR_3);
    FUNC_2(VAR_7, 1 << VAR_2);


    FUNC_2(VAR_7, 0);
    FUNC_5(VAR_7, 4);
    FUNC_2(VAR_7, 0);

    FUNC_5(VAR_7, 32);
    FUNC_2(VAR_7, 0);

    VAR_10 = (1 << VAR_3) - FUNC_1(VAR_7);
    FUNC_5(VAR_7, VAR_10);

    VAR_8->timeline_start_pos = FUNC_1(VAR_7);

    VAR_8->serial = 1;
    VAR_8->last_chunk_pos = -1;
    VAR_8->first_video_flag = 1;

    for (VAR_9 = 0; VAR_9 < VAR_6->nb_streams; VAR_9++) {
        VAR_12 = VAR_6->streams[VAR_9];
        if (VAR_12->codecpar->codec_id == VAR_0)
            continue;
        VAR_11 = FUNC_6(VAR_6, VAR_12);
        if (VAR_11 < 0) {
            FUNC_0(VAR_6, VAR_1, "write stream codec failed codec_type(0x%x)\n", VAR_12->codecpar->codec_type);
            return -1;
        }
        if (!VAR_9)
            FUNC_8(VAR_6);
    }

    for (VAR_9 = 0; VAR_9 < VAR_6->nb_streams; VAR_9++) {
        VAR_12 = VAR_6->streams[VAR_9];
        if (VAR_12->codecpar->codec_id == VAR_0)
            continue;
        VAR_11 = FUNC_7(VAR_6, VAR_12);
        if (VAR_11 < 0) {
            FUNC_0(VAR_6, VAR_1, "write stream data failed codec_type(0x%x)\n", VAR_12->codecpar->codec_type);
            return -1;
        }
    }

    if (VAR_8->nb_index)
        FUNC_4(VAR_6);

    return 0;
}
