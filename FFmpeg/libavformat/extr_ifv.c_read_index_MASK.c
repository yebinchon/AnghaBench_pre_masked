
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int int64_t ;
typedef enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;
struct TYPE_5__ {int pb; int ** streams; TYPE_1__* priv_data; } ;
struct TYPE_4__ {scalar_t__ total_vframes; size_t video_stream_index; scalar_t__ total_aframes; size_t audio_stream_index; } ;
typedef TYPE_1__ IFVContext ;
typedef int AVStream ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_2,
                      enum AVMediaType VAR_3,
                      uint32_t VAR_4)
{
    IFVContext *VAR_5 = VAR_2->priv_data;
    AVStream *VAR_6;
    int64_t VAR_7, VAR_8, VAR_9;
    uint32_t VAR_10, VAR_11;
    int VAR_12;

    if (VAR_3 == VAR_1) {
        VAR_10 = VAR_5->total_vframes;
        VAR_6 = VAR_2->streams[VAR_5->video_stream_index];
    } else {
        VAR_10 = VAR_5->total_aframes;
        VAR_6 = VAR_2->streams[VAR_5->audio_stream_index];
    }

    for (VAR_11 = VAR_4; VAR_11 < VAR_10; VAR_11++) {
        if (FUNC_1(VAR_2->pb))
            return VAR_0;
        VAR_7 = FUNC_2(VAR_2->pb);
        VAR_8 = FUNC_2(VAR_2->pb);

        FUNC_3(VAR_2->pb, 8);
        VAR_9 = FUNC_2(VAR_2->pb);

        VAR_12 = FUNC_0(VAR_6, VAR_7, VAR_9, VAR_8, 0, 0);
        if (VAR_12 < 0)
            return VAR_12;

        FUNC_3(VAR_2->pb, VAR_3 == VAR_1 ? 8: 4);
    }

    return 0;
}
