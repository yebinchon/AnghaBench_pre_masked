
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_3__ {int (* query_codec ) (int,int) ;int video_codec; int audio_codec; int subtitle_codec; int data_codec; scalar_t__ codec_tag; } ;
typedef TYPE_1__ AVOutputFormat ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int,unsigned int*) ;
 int FUNC_1 (int,int) ;

int FUNC_2(const AVOutputFormat *VAR_1, enum AVCodecID VAR_2,
                         int VAR_3)
{
    if (VAR_1) {
        unsigned int VAR_4;
        if (VAR_1->query_codec)
            return VAR_1->query_codec(VAR_2, VAR_3);
        else if (VAR_1->codec_tag)
            return !!FUNC_0(VAR_1->codec_tag, VAR_2, &VAR_4);
        else if (VAR_2 == VAR_1->video_codec ||
                 VAR_2 == VAR_1->audio_codec ||
                 VAR_2 == VAR_1->subtitle_codec ||
                 VAR_2 == VAR_1->data_codec)
            return 1;
    }
    return VAR_0;
}
