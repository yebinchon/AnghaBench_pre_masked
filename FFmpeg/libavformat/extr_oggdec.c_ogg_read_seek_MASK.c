
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ogg_stream {int keyframe_seek; } ;
struct ogg {int nstreams; struct ogg_stream* streams; } ;
typedef int int64_t ;
struct TYPE_9__ {TYPE_2__** streams; struct ogg* priv_data; } ;
struct TYPE_8__ {TYPE_1__* codecpar; } ;
struct TYPE_7__ {scalar_t__ codec_type; } ;
typedef TYPE_3__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int,int ,int) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_2, int VAR_3,
                         int64_t VAR_4, int VAR_5)
{
    struct ogg *VAR_6 = VAR_2->priv_data;
    struct ogg_stream *VAR_7 = VAR_6->streams + VAR_3;
    int VAR_8;

    FUNC_0(VAR_3 < VAR_6->nstreams);


    FUNC_2(VAR_2);



    if (VAR_2->streams[VAR_3]->codecpar->codec_type == VAR_0
        && !(VAR_5 & VAR_1))
        VAR_7->keyframe_seek = 1;

    VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
    FUNC_2(VAR_2);
    VAR_7 = VAR_6->streams + VAR_3;
    if (VAR_8 < 0)
        VAR_7->keyframe_seek = 0;
    return VAR_8;
}
